// InquiryDlg.cpp : 实现文件
//

#include "stdafx.h"
#include "SoftWareArchitecture.h"
#include "InquiryDlg.h"
#include "afxdialogex.h"


// CInquiryDlg 对话框

IMPLEMENT_DYNAMIC(CInquiryDlg, CDialogEx)

CInquiryDlg::CInquiryDlg(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_INQUIRYDIALOG, pParent)
{

}

CInquiryDlg::~CInquiryDlg()
{
}

void CInquiryDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(CInquiryDlg, CDialogEx)
	ON_BN_CLICKED(IDC_QUERYBUTTON, &CInquiryDlg::OnBnClickedQuerybutton)
END_MESSAGE_MAP()


// CInquiryDlg 消息处理程序


void CInquiryDlg::OnBnClickedQuerybutton()
{
	// TODO: 在此添加控件通知处理程序代码
	CResultDlg hDlg;           // 构造对话框类CTipDlg的实例 
	CDialog::OnOK();
	hDlg.DoModal();  // 弹出对话框
}
