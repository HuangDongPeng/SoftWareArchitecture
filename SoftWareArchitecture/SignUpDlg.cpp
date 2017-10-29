// SignUpDlg.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "SoftWareArchitecture.h"
#include "SignUpDlg.h"
#include "afxdialogex.h"


// CSignUpDlg �Ի���
int timecount = 60;
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
	ON_EN_CHANGE(IDC_SUPASSWORD, &CSignUpDlg::OnEnChangeSupassword)
	ON_BN_CLICKED(IDC_BUTTONGETSMS, &CSignUpDlg::OnBnClickedSMS)
	ON_WM_TIMER()
END_MESSAGE_MAP()


// CSignUpDlg ��Ϣ�������


void CSignUpDlg::OnBnClickedCommitbton()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	UpdateData(true);
	UserController userController = UserController();
	if (m_username.IsEmpty()) {
		AfxMessageBox(_T("�û�������Ϊ��"));
		return;
	}
	else if (m_password.GetLength() < 6 || m_password.GetLength() > 16) {
		AfxMessageBox(_T("������6-16λ"));
		return;
	}
	else if (m_idCard.GetLength() != 18) {
		AfxMessageBox(_T("��������ȷ�����֤����"));
		return;
	}
	else if (m_tel.GetLength() != 11) {
		AfxMessageBox(_T("��������ȷ���ֻ���"));
		return;
	}
	
	User aUser = User(m_username, m_password, m_username, m_idCard, m_tel);
	try {
		userController.addAUser(aUser);
	}
	catch (...) {
		AfxMessageBox(_T("���û����ѱ�ע��"));
		return;
	}
	AfxMessageBox(_T("ע��ɹ��������µ�¼"));
	CDialog::OnOK();
}

int fun(string ps) {
	int i, count = 0, a = 1, b = 1, c = 1;
	for (i = 0; i<ps.length(); i++)
		if (a&&islower(ps[i])) count++, a = 0;
		else if (b&&isupper(ps[i])) count++, b = 0;
		else if (c&&isdigit(ps[i])) count++, c = 0;
		else if (!islower(ps[i]) && !isupper(ps[i]) && !isdigit(ps[i])) count++;
		return count;

}

void CSignUpDlg::OnEnChangeSupassword()
{
	// TODO:  ����ÿؼ��� RICHEDIT �ؼ���������
	// ���ʹ�֪ͨ��������д CDialogEx::OnInitDialog()
	// ���������� CRichEditCtrl().SetEventMask()��
	// ͬʱ�� ENM_CHANGE ��־�������㵽�����С�
	UpdateData(true);
	GetDlgItem(IDC_PWSTRENGTH)->ShowWindow(SW_SHOW);
	USES_CONVERSION;
	std::string password(W2A(m_password));
	if (password.length() >= 6 && password.length() <= 16) {
		switch (fun(password))
		{
		case 1:SetDlgItemText(IDC_PWSTRENGTH, _T("����ǿ�ȣ���")); break;
		case 2:SetDlgItemText(IDC_PWSTRENGTH, _T("����ǿ�ȣ���")); break;
		case 3:SetDlgItemText(IDC_PWSTRENGTH, _T("����ǿ�ȣ�ǿ")); break;
		case 4:SetDlgItemText(IDC_PWSTRENGTH, _T("����ǿ�ȣ���ǿ")); break;
		}
	}
}



void CSignUpDlg::OnBnClickedSMS()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	SetTimer(0, 1000, NULL);
	GetDlgItem(IDC_BUTTONGETSMS)->EnableWindow(false);
}

//void CSignUpDlg::OnTimer(UINT_PTR nIDEvent) {
//	CString a;
//	a.Format(_T("%d"), timecount);
//	GetDlgItem(IDC_BUTTONGETSMS)->SetWindowText(a);
//	if (--timecount == 0) {
//		GetDlgItem(IDC_BUTTONGETSMS)->EnableWindow(true);
//		GetDlgItem(IDC_BUTTONGETSMS)->SetWindowText(_T("��ȡ��֤��"));
//		timecount = 60;
//		KillTimer(0);
//	}
//}

void CSignUpDlg::OnTimer(UINT_PTR nIDEvent)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	CString a;
	a.Format(_T("%d������·���"), timecount);
	GetDlgItem(IDC_BUTTONGETSMS)->SetWindowText(a);
	if (--timecount == 0) {
		GetDlgItem(IDC_BUTTONGETSMS)->EnableWindow(true);
		GetDlgItem(IDC_BUTTONGETSMS)->SetWindowText(_T("��ȡ��֤��"));
		timecount = 60;
		KillTimer(0);
	}
	CDialogEx::OnTimer(nIDEvent);
}
