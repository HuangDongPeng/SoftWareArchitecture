// SignUpDlg.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "SoftWareArchitecture.h"
#include "SignUpDlg.h"
#include "afxdialogex.h"


// CSignUpDlg �Ի���

IMPLEMENT_DYNAMIC(CSignUpDlg, CDialogEx)

CSignUpDlg::CSignUpDlg(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_SUDIALOG, pParent)
	, m_username(_T(""))
	, m_password(_T(""))
	, m_name(_T(""))
	, m_idCard(_T(""))
	, m_tel(_T(""))
{

}

CSignUpDlg::~CSignUpDlg()
{
}

void CSignUpDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_SUUSERNAME, m_username);
	DDX_Text(pDX, IDC_SUPASSWORD, m_password);
	DDX_Text(pDX, IDC_SUNAME, m_name);
	DDX_Text(pDX, IDC_SUIDCARD, m_idCard);
	DDX_Text(pDX, IDC_SUTEL, m_tel);
}


BEGIN_MESSAGE_MAP(CSignUpDlg, CDialogEx)
	ON_BN_CLICKED(IDC_COMMITBTON, &CSignUpDlg::OnBnClickedCommitbton)
END_MESSAGE_MAP()


// CSignUpDlg ��Ϣ��������


void CSignUpDlg::OnBnClickedCommitbton()
{
	// TODO: �ڴ����ӿؼ�֪ͨ�����������
	UpdateData(true);
	UserController userController = UserController();
	//USES_CONVERSION;
	//string username(W2A(m_username)), password(W2A(m_password)), name(W2A(m_name)), idcard(W2A(m_idCard)), tel(W2A(m_tel));
	//User aUser = User(username, password, username, idcard, tel);
	//userController.addAUser(aUser);
	MessageBox(_T("111"));
}