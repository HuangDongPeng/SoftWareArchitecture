// SMSDlg.cpp : 实现文件
//

#include "stdafx.h"
#include "SoftWareArchitecture.h"
#include "SMSDlg.h"
#include "afxdialogex.h"
int timecount1 = 60;

// CSMSDlg 对话框

IMPLEMENT_DYNAMIC(CSMSDlg, CDialogEx)

CSMSDlg::CSMSDlg(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_SMS, pParent)
{

}

CSMSDlg::~CSMSDlg()
{
}

void CSMSDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(CSMSDlg, CDialogEx)
	ON_WM_TIMER()
	ON_BN_CLICKED(IDC_BUTTONSMS, &CSMSDlg::OnBnClickedButtonGetSMS)
	ON_WM_TIMER()
END_MESSAGE_MAP()


// CSMSDlg 消息处理程序


//void CSMSDlg::OnTimer(UINT_PTR nIDEvent)
//{
//	// TODO: 在此添加消息处理程序代码和/或调用默认值
//	CString a;
//	a.Format(_T("%d秒后重新发送"), timecount1);
//	GetDlgItem(IDC_BUTTONSMS)->SetWindowText(a);
//	if (--timecount1 == 0) {
//		GetDlgItem(IDC_BUTTONSMS)->EnableWindow(true);
//		GetDlgItem(IDC_BUTTONSMS)->SetWindowText(_T("获取验证码"));
//		timecount1 = 60;
//		KillTimer(0);
//	}
//	CDialogEx::OnTimer(nIDEvent);
//}


void CSMSDlg::OnBnClickedButtonGetSMS()
{
	// TODO: 在此添加控件通知处理程序代码
	OnTimer(0);
	SetTimer(0, 1000, NULL);
	GetDlgItem(IDC_BUTTONSMS)->EnableWindow(false);
}


void CSMSDlg::OnTimer(UINT_PTR nIDEvent)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	CString a;
	a.Format(_T("%d秒后重新发送"), timecount1);
	GetDlgItem(IDC_BUTTONSMS)->SetWindowText(a);
	if (--timecount1 == 0) {
		GetDlgItem(IDC_BUTTONSMS)->EnableWindow(true);
		GetDlgItem(IDC_BUTTONSMS)->SetWindowText(_T("获取验证码"));
		timecount1 = 60;
		KillTimer(0);
	}
	CDialogEx::OnTimer(nIDEvent);
}
