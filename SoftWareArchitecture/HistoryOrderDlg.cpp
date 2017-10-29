// HistoryOrderDlg.cpp : 实现文件
//

#include "stdafx.h"
#include "SoftWareArchitecture.h"
#include "HistoryOrderDlg.h"
#include "afxdialogex.h"


// CHistoryOrderDlg 对话框

IMPLEMENT_DYNAMIC(CHistoryOrderDlg, CDialogEx)

CHistoryOrderDlg::CHistoryOrderDlg(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_DIALOGHO, pParent)
{

}

CHistoryOrderDlg::~CHistoryOrderDlg()
{
}

void CHistoryOrderDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_LISTHO, m_historyorder);
}


BEGIN_MESSAGE_MAP(CHistoryOrderDlg, CDialogEx)
	ON_BN_CLICKED(IDC_BUTTON6, &CHistoryOrderDlg::OnBnClickedButtonOK)
END_MESSAGE_MAP()


// CHistoryOrderDlg 消息处理程序


void CHistoryOrderDlg::OnBnClickedButtonOK()
{
	// TODO: 在此添加控件通知处理程序代码
	CDialogEx::OnOK();
}
BOOL CHistoryOrderDlg::OnInitDialog()
{
	CDialogEx::OnInitDialog();
	CRect rect;
	m_historyorder.GetClientRect(&rect);
	// 为列表视图控件添加全行选中和栅格风格   
	m_historyorder.SetExtendedStyle(m_historyorder.GetExtendedStyle() | LVS_EX_FULLROWSELECT | LVS_EX_GRIDLINES);

	// 为列表视图控件添加三列   
	m_historyorder.InsertColumn(0, _T("乘客姓名"), LVCFMT_CENTER, rect.Width() / 7, 0);
	m_historyorder.InsertColumn(1, _T("车次"), LVCFMT_CENTER, rect.Width() / 7, 1);
	m_historyorder.InsertColumn(2, _T("起点站"), LVCFMT_CENTER, rect.Width() / 7, 2);
	m_historyorder.InsertColumn(3, _T("终点站"), LVCFMT_CENTER, rect.Width() / 7, 3);
	m_historyorder.InsertColumn(4, _T("时间"), LVCFMT_CENTER, rect.Width() / 7, 4);
	m_historyorder.InsertColumn(5, _T("历时"), LVCFMT_CENTER, rect.Width() / 7, 5);
	m_historyorder.InsertColumn(6, _T("票价"), LVCFMT_CENTER, rect.Width() / 7, 6);
	m_historyorder.InsertItem(0, _T(""));
	//向列表视图控件中插入列
	m_historyorder.SetItemText(0, 0, _T("张付俊"));
	m_historyorder.SetItemText(0, 1, _T("D5651"));
	m_historyorder.SetItemText(0, 2, _T("合肥南"));
	m_historyorder.SetItemText(0, 3, _T("汉口"));
	m_historyorder.SetItemText(0, 4, _T("2017/10/30  8:00"));
	m_historyorder.SetItemText(0, 5, _T("2:30"));
	m_historyorder.SetItemText(0, 6, _T("100"));
	m_historyorder.GetHeaderCtrl()->EnableWindow(0);
	return TRUE;
}