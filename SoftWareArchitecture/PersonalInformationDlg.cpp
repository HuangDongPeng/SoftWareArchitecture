// PersonalInformationDlg.cpp : 实现文件
//

#include "stdafx.h"
#include "SoftWareArchitecture.h"
#include "PersonalInformationDlg.h"
#include "afxdialogex.h"

CString tusername;
// CPersonalInformationDlg 对话框

IMPLEMENT_DYNAMIC(CPersonalInformationDlg, CDialogEx)

CPersonalInformationDlg::CPersonalInformationDlg(CString username, CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_DIALOGPI, pParent)
	, m_pname(_T(""))
	, m_pidcard(_T(""))
	, m_ptel(_T(""))
{
	tusername = username;
}

CPersonalInformationDlg::~CPersonalInformationDlg()
{
}

BOOL CPersonalInformationDlg::OnInitDialog()
{
	CDialogEx::OnInitDialog();
	UserController usercontroller = UserController();
	User aUser = usercontroller.getUser(tusername);
	m_pname = aUser.getName();
	m_pusername = aUser.getUsername();
	m_ppassword = aUser.getPassword();
	m_pidcard = aUser.getIdCard();
	m_ptel = aUser.getTel();
	UpdateData(false);
	return TRUE;
}
void CPersonalInformationDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_PNAME, m_pname);
	DDX_Text(pDX, IDC_PNAME2, m_pidcard);
	DDX_Text(pDX, IDC_PNAME3, m_pusername);
	DDX_Text(pDX, IDC_PNAME4, m_ppassword);
	DDX_Text(pDX, IDC_PNAME5, m_ptel);
}


BEGIN_MESSAGE_MAP(CPersonalInformationDlg, CDialogEx)
	ON_BN_CLICKED(IDC_BUTTONCPI, &CPersonalInformationDlg::OnBnClickedButtonChangePI)
	ON_BN_CLICKED(IDC_BUTTONC, &CPersonalInformationDlg::OnBnClickedButtonConfirm)
END_MESSAGE_MAP()


// CPersonalInformationDlg 消息处理程序


void CPersonalInformationDlg::OnBnClickedButtonChangePI()
{
	// TODO: 在此添加控件通知处理程序代码
	CSMSDlg hDlg;           // 构造对话框类CTipDlg的实例 
	hDlg.DoModal();  // 弹出对话框
	GetDlgItem(IDC_PNAME)->EnableWindow(true);
	GetDlgItem(IDC_PNAME2)->EnableWindow(true);
	GetDlgItem(IDC_PNAME3)->EnableWindow(true);
	GetDlgItem(IDC_PNAME4)->EnableWindow(true);
	GetDlgItem(IDC_PNAME5)->EnableWindow(true);
}


void CPersonalInformationDlg::OnBnClickedButtonConfirm()
{
	// TODO: 在此添加控件通知处理程序代码
	CDialogEx::OnOK();
}
