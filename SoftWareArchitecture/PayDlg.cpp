// PayDlg.cpp : 实现文件
//

#include "stdafx.h"
#include "SoftWareArchitecture.h"
#include "PayDlg.h"
#include "afxdialogex.h"
int second = 59;
int minute = 29;
// CPayDlg 对话框

IMPLEMENT_DYNAMIC(CPayDlg, CDialogEx)

CPayDlg::CPayDlg(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_DIALOGPAY, pParent)
	, m_timecount(_T(""))
{

}

CPayDlg::~CPayDlg()
{
}

void CPayDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_DAOJISHI, m_timecount);
}

BOOL CPayDlg::OnInitDialog()
{
	CDialogEx::OnInitDialog();
	SetTimer(0, 1000, NULL);
	return TRUE;
}


BEGIN_MESSAGE_MAP(CPayDlg, CDialogEx)
	ON_WM_TIMER()
END_MESSAGE_MAP()


// CPayDlg 消息处理程序


void CPayDlg::OnTimer(UINT_PTR nIDEvent)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	CString a;
	a.Format(_T("%d:%d"), minute, second);
	GetDlgItem(IDC_DAOJISHI)->SetWindowTextW(a);
	if (--second == 0) {
		second = 59;
		minute--;
	}
	CDialogEx::OnTimer(nIDEvent);
}
