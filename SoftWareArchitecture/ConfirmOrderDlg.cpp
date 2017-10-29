// ConfirmOrderDlg.cpp : 实现文件
//

#include "stdafx.h"
#include "SoftWareArchitecture.h"
#include "ConfirmOrderDlg.h"
#include "afxdialogex.h"


// CConfirmOrderDlg 对话框

IMPLEMENT_DYNAMIC(CConfirmOrderDlg, CDialogEx)

CConfirmOrderDlg::CConfirmOrderDlg(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_ORDERDIALOG, pParent)
{

}

CConfirmOrderDlg::~CConfirmOrderDlg()
{
}

void CConfirmOrderDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_LIST1, m_newpassenger);
}


BEGIN_MESSAGE_MAP(CConfirmOrderDlg, CDialogEx)
	ON_BN_CLICKED(IDC_BUTTONAP, &CConfirmOrderDlg::OnBnClickedButtonaddApassenger)
	ON_BN_CLICKED(IDC_BUTTONCONCEL, &CConfirmOrderDlg::OnBnClickedButtonconcel)
	ON_BN_CLICKED(IDC_BUTTONCO, &CConfirmOrderDlg::OnBnClickedButtonCommitOrder)
END_MESSAGE_MAP()


// CConfirmOrderDlg 消息处理程序


void CConfirmOrderDlg::OnBnClickedButtonaddApassenger()
{
	// TODO: 在此添加控件通知处理程序代码
	CAddAPassengerDlg hDlg;          // 构造对话框类CTipDlg的实例 
	hDlg.DoModal();  // 弹出对话框
	CRect rect;
	m_newpassenger.GetClientRect(&rect);
	// 为列表视图控件添加全行选中和栅格风格   
	m_newpassenger.SetExtendedStyle(m_newpassenger.GetExtendedStyle() | LVS_EX_FULLROWSELECT | LVS_EX_GRIDLINES);

	// 为列表视图控件添加三列   
	m_newpassenger.InsertColumn(0, _T("姓名"), LVCFMT_CENTER, rect.Width() / 5, 0);
	m_newpassenger.InsertColumn(1, _T("身份证号"), LVCFMT_CENTER, rect.Width() / 2.5, 1);
	m_newpassenger.InsertColumn(2, _T("类型"), LVCFMT_CENTER, rect.Width() / 5, 2);
	m_newpassenger.InsertColumn(3, _T("席别"), LVCFMT_CENTER, rect.Width() / 5, 2);
	m_newpassenger.DeleteAllItems();
	m_newpassenger.InsertItem(0, _T(""));
	//向列表视图控件中插入列
	m_newpassenger.SetItemText(0, 0, _T("张付俊"));
	m_newpassenger.SetItemText(0, 1, _T("340*******2017"));
	m_newpassenger.SetItemText(0, 2, _T("成人"));
	m_newpassenger.SetItemText(0, 3, _T("二等"));
	m_newpassenger.GetHeaderCtrl()->EnableWindow(0);
}

void CConfirmOrderDlg::OnBnClickedButtonconcel()
{
	// TODO: 在此添加控件通知处理程序代码
	CDialogEx::OnOK();
}


void CConfirmOrderDlg::OnBnClickedButtonCommitOrder()
{
	// TODO: 在此添加控件通知处理程序代码
	CPayDlg hDlg;           // 构造对话框类CTipDlg的实例 
	hDlg.DoModal();  // 弹出对话框
	CDialogEx::OnOK();
}
