// SignInDlg.cpp : 实现文件
//

#include "stdafx.h"
#include "SoftWareArchitecture.h"
#include "SignInDlg.h"
#include "afxdialogex.h"

int trycount = 0;
// CSignInDlg 对话框

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


// CSignInDlg 消息处理程序


void CSignInDlg::OnBnClickedSigninbton()
{
	trycount++;
	UpdateData(true);
	if (m_username.IsEmpty()) {
		AfxMessageBox(_T("用户名不能为空"));
		return;
	}
	else if (m_password.IsEmpty()) {
		AfxMessageBox(_T("密码不能为空"));
		return;
	}
	if (trycount >= 3) {
		GetDlgItem(IDC_SIYZM)->ShowWindow(SW_SHOW);
		GetDlgItem(IDC_STATICPIN)->ShowWindow(SW_SHOW);
		GetDlgItem(IDC_BITMAPPIN)->ShowWindow(SW_SHOW);
		if (m_pin.IsEmpty()) {
			AfxMessageBox(_T("请输入验证码"));
			return;
		}
		else if (m_pin != "DGKS") {
			AfxMessageBox(_T("验证码错误"));
			return;
		}
	}
	UserController usercontroller = UserController();
	if (usercontroller.signIn(m_username, m_password))
	{
		INT_PTR nRes;             // 用于保存DoModal函数的返回值   
		CInquiryDlg hDlg;           // 构造对话框类CTipDlg的实例 
		CDialog::OnOK();
		nRes = hDlg.DoModal();  // 弹出对话框
	}
	else 
		AfxMessageBox(_T("用户名密码不匹配"));
}
