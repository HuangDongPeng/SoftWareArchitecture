// ResultDlg.cpp : 实现文件
//

#include "stdafx.h"
#include "SoftWareArchitecture.h"
#include "ResultDlg.h"
#include "afxdialogex.h"

// CResultDlg 对话框

IMPLEMENT_DYNAMIC(CResultDlg, CDialogEx)

CResultDlg::CResultDlg(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_TRAINDIALOG, pParent)
{

}

BOOL CResultDlg::OnInitDialog()
{
	CDialogEx::OnInitDialog();
	CRect rect;
	m_result.GetClientRect(&rect);
	// 为列表视图控件添加全行选中和栅格风格   
	m_result.SetExtendedStyle(m_result.GetExtendedStyle() | LVS_EX_FULLROWSELECT | LVS_EX_GRIDLINES);

	// 为列表视图控件添加三列   
	m_result.InsertColumn(0, _T("车次"), LVCFMT_CENTER, rect.Width() / 7, 0);
	m_result.InsertColumn(1, _T("起始站"), LVCFMT_CENTER, rect.Width() / 7, 1);
	m_result.InsertColumn(2, _T("终点站"), LVCFMT_CENTER, rect.Width() / 7, 2);
	m_result.InsertColumn(3, _T("时间"), LVCFMT_CENTER, rect.Width() / 7, 3);
	m_result.InsertColumn(4, _T("历时"), LVCFMT_CENTER, rect.Width() / 7, 4);
	m_result.InsertColumn(5, _T("票价"), LVCFMT_CENTER, rect.Width() / 7, 5);
	m_result.InsertColumn(6, _T("余票"), LVCFMT_CENTER, rect.Width() / 7, 6);
	AddtoGrid();
	m_result.GetHeaderCtrl()->EnableWindow(0);
	return TRUE;
}

void CResultDlg::AddtoGrid()
{
	m_result.DeleteAllItems();
	m_result.InsertItem(0, _T(""));
	//向列表视图控件中插入列
	m_result.SetItemText(0, 0, _T("D3228"));
	m_result.SetItemText(0, 1, _T("合肥"));
	m_result.SetItemText(0, 2, _T("武汉"));
	m_result.SetItemText(0, 3, _T("2017/10/30  8:00"));
	m_result.SetItemText(0, 4, _T("2:30"));
	m_result.SetItemText(0, 5, _T("207"));
	m_result.SetItemText(0, 6, _T("100"));

}

CResultDlg::~CResultDlg()
{
}

void CResultDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_LIST2, m_result);
}


BEGIN_MESSAGE_MAP(CResultDlg, CDialogEx)
	ON_BN_CLICKED(IDC_BACK, &CResultDlg::OnBnClickedBack)
	ON_BN_CLICKED(IDC_BUY, &CResultDlg::OnBnClickedBuy)
END_MESSAGE_MAP()


// CResultDlg 消息处理程序


void CResultDlg::OnBnClickedBack()
{
	// TODO: 在此添加控件通知处理程序代码
	CDialogEx::OnOK();
}


void CResultDlg::OnBnClickedBuy()
{
	// TODO: 在此添加控件通知处理程序代码
	CConfirmOrderDlg hDlg;           // 构造对话框类CTipDlg的实例 
	hDlg.DoModal();  // 弹出对话框
}
