// AddAPassengerDlg.cpp : 实现文件
//

#include "stdafx.h"
#include "SoftWareArchitecture.h"
#include "AddAPassengerDlg.h"
#include "afxdialogex.h"


// CAddAPassengerDlg 对话框

IMPLEMENT_DYNAMIC(CAddAPassengerDlg, CDialogEx)

CAddAPassengerDlg::CAddAPassengerDlg(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_DIALOGAP, pParent)
{

}

CAddAPassengerDlg::~CAddAPassengerDlg()
{
}

void CAddAPassengerDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_LISTPASSENGER, m_passenger);
}


BEGIN_MESSAGE_MAP(CAddAPassengerDlg, CDialogEx)
END_MESSAGE_MAP()


// CAddAPassengerDlg 消息处理程序
BOOL CAddAPassengerDlg::OnInitDialog()
{
	CDialogEx::OnInitDialog();
	CRect rect;
	m_passenger.GetClientRect(&rect);
	// 为列表视图控件添加全行选中和栅格风格   
	m_passenger.SetExtendedStyle(m_passenger.GetExtendedStyle() | LVS_EX_FULLROWSELECT | LVS_EX_GRIDLINES);

	// 为列表视图控件添加三列   
	m_passenger.InsertColumn(0, _T("姓名"), LVCFMT_CENTER, rect.Width() / 3, 0);
	m_passenger.InsertColumn(1, _T("身份证号"), LVCFMT_CENTER, rect.Width() / 3, 1);
	m_passenger.InsertColumn(2, _T("类型"), LVCFMT_CENTER, rect.Width() / 3, 2);
	AddtoGrid();
	m_passenger.GetHeaderCtrl()->EnableWindow(0);
	return TRUE;
}

void CAddAPassengerDlg::AddtoGrid()
{
	m_passenger.DeleteAllItems();
	m_passenger.InsertItem(0, _T(""));
	//向列表视图控件中插入列
	m_passenger.SetItemText(0, 0, _T("张付俊"));
	m_passenger.SetItemText(0, 1, _T("340******2017"));
	m_passenger.SetItemText(0, 2, _T("成人"));

}