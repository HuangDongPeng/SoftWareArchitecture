// SignInDlg.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "SoftWareArchitecture.h"
#include "SignInDlg.h"
#include "afxdialogex.h"


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
	UpdateData(true);
	UserController usercontroller = UserController();
	User aUser = User();
}
