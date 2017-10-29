// HistoryOrderDlg.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "SoftWareArchitecture.h"
#include "HistoryOrderDlg.h"
#include "afxdialogex.h"


// CHistoryOrderDlg �Ի���

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


// CHistoryOrderDlg ��Ϣ�������


void CHistoryOrderDlg::OnBnClickedButtonOK()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	CDialogEx::OnOK();
}
BOOL CHistoryOrderDlg::OnInitDialog()
{
	CDialogEx::OnInitDialog();
	CRect rect;
	m_historyorder.GetClientRect(&rect);
	// Ϊ�б���ͼ�ؼ����ȫ��ѡ�к�դ����   
	m_historyorder.SetExtendedStyle(m_historyorder.GetExtendedStyle() | LVS_EX_FULLROWSELECT | LVS_EX_GRIDLINES);

	// Ϊ�б���ͼ�ؼ��������   
	m_historyorder.InsertColumn(0, _T("�˿�����"), LVCFMT_CENTER, rect.Width() / 7, 0);
	m_historyorder.InsertColumn(1, _T("����"), LVCFMT_CENTER, rect.Width() / 7, 1);
	m_historyorder.InsertColumn(2, _T("���վ"), LVCFMT_CENTER, rect.Width() / 7, 2);
	m_historyorder.InsertColumn(3, _T("�յ�վ"), LVCFMT_CENTER, rect.Width() / 7, 3);
	m_historyorder.InsertColumn(4, _T("ʱ��"), LVCFMT_CENTER, rect.Width() / 7, 4);
	m_historyorder.InsertColumn(5, _T("��ʱ"), LVCFMT_CENTER, rect.Width() / 7, 5);
	m_historyorder.InsertColumn(6, _T("Ʊ��"), LVCFMT_CENTER, rect.Width() / 7, 6);
	m_historyorder.InsertItem(0, _T(""));
	//���б���ͼ�ؼ��в�����
	m_historyorder.SetItemText(0, 0, _T("�Ÿ���"));
	m_historyorder.SetItemText(0, 1, _T("D5651"));
	m_historyorder.SetItemText(0, 2, _T("�Ϸ���"));
	m_historyorder.SetItemText(0, 3, _T("����"));
	m_historyorder.SetItemText(0, 4, _T("2017/10/30  8:00"));
	m_historyorder.SetItemText(0, 5, _T("2:30"));
	m_historyorder.SetItemText(0, 6, _T("100"));
	m_historyorder.GetHeaderCtrl()->EnableWindow(0);
	return TRUE;
}