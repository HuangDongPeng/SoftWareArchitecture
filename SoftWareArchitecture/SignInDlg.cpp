// SignInDlg.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "SoftWareArchitecture.h"
#include "SignInDlg.h"
#include "afxdialogex.h"

int trycount = 0;
// CSignInDlg �Ի���

IMPLEMENT_DYNAMIC(CSignInDlg, CDialogEx)

CSignInDlg::CSignInDlg(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_SIDIALOG, pParent)
	, m_username(_T(""))
	, m_password(_T(""))
	, m_pin(_T(""))
{

}

CSignInDlg::~CSignInDlg()
{
}

void CSignInDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_SIUSERNAME, m_username);
	DDX_Text(pDX, IDC_SIPASSWORD, m_password);
	DDX_Text(pDX, IDC_SIYZM, m_pin);
}


BEGIN_MESSAGE_MAP(CSignInDlg, CDialogEx)
	ON_BN_CLICKED(IDC_SIGNINBTON, &CSignInDlg::OnBnClickedSigninbton)
END_MESSAGE_MAP()


// CSignInDlg ��Ϣ�������


void CSignInDlg::OnBnClickedSigninbton()
{
	trycount++;
	UpdateData(true);
	if (m_username.IsEmpty()) {
		AfxMessageBox(_T("�û�������Ϊ��"));
		return;
	}
	else if (m_password.IsEmpty()) {
		AfxMessageBox(_T("���벻��Ϊ��"));
		return;
	}
	if (trycount >= 3) {
		GetDlgItem(IDC_SIYZM)->ShowWindow(SW_SHOW);
		GetDlgItem(IDC_STATICPIN)->ShowWindow(SW_SHOW);
		GetDlgItem(IDC_BITMAPPIN)->ShowWindow(SW_SHOW);
		if (m_pin.IsEmpty()) {
			AfxMessageBox(_T("��������֤��"));
			return;
		}
		else if (m_pin != "DGKS") {
			AfxMessageBox(_T("��֤�����"));
			return;
		}
	}
	UserController usercontroller = UserController();
	if (usercontroller.signIn(m_username, m_password))
	{
		INT_PTR nRes;             // ���ڱ���DoModal�����ķ���ֵ   
		CInquiryDlg hDlg;           // ����Ի�����CTipDlg��ʵ�� 
		CDialog::OnOK();
		nRes = hDlg.DoModal();  // �����Ի���
	}
	else 
		AfxMessageBox(_T("�û������벻ƥ��"));
}
