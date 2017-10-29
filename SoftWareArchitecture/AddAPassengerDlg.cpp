// AddAPassengerDlg.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "SoftWareArchitecture.h"
#include "AddAPassengerDlg.h"
#include "afxdialogex.h"


// CAddAPassengerDlg �Ի���

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


// CAddAPassengerDlg ��Ϣ�������
BOOL CAddAPassengerDlg::OnInitDialog()
{
	CDialogEx::OnInitDialog();
	CRect rect;
	m_passenger.GetClientRect(&rect);
	// Ϊ�б���ͼ�ؼ����ȫ��ѡ�к�դ����   
	m_passenger.SetExtendedStyle(m_passenger.GetExtendedStyle() | LVS_EX_FULLROWSELECT | LVS_EX_GRIDLINES);

	// Ϊ�б���ͼ�ؼ��������   
	m_passenger.InsertColumn(0, _T("����"), LVCFMT_CENTER, rect.Width() / 3, 0);
	m_passenger.InsertColumn(1, _T("���֤��"), LVCFMT_CENTER, rect.Width() / 3, 1);
	m_passenger.InsertColumn(2, _T("����"), LVCFMT_CENTER, rect.Width() / 3, 2);
	AddtoGrid();
	m_passenger.GetHeaderCtrl()->EnableWindow(0);
	return TRUE;
}

void CAddAPassengerDlg::AddtoGrid()
{
	m_passenger.DeleteAllItems();
	m_passenger.InsertItem(0, _T(""));
	//���б���ͼ�ؼ��в�����
	m_passenger.SetItemText(0, 0, _T("�Ÿ���"));
	m_passenger.SetItemText(0, 1, _T("340******2017"));
	m_passenger.SetItemText(0, 2, _T("����"));

}