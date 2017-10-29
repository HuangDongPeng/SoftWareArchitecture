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
}


BEGIN_MESSAGE_MAP(CConfirmOrderDlg, CDialogEx)
	ON_BN_CLICKED(IDC_BUTTONAP, &CConfirmOrderDlg::OnBnClickedButtonaddApassenger)
END_MESSAGE_MAP()


// CConfirmOrderDlg 消息处理程序


void CConfirmOrderDlg::OnBnClickedButtonaddApassenger()
{
	// TODO: 在此添加控件通知处理程序代码
}
