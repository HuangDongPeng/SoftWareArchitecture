// ResultDlg.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "SoftWareArchitecture.h"
#include "ResultDlg.h"
#include "afxdialogex.h"

// CResultDlg �Ի���

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
	// Ϊ�б���ͼ�ؼ����ȫ��ѡ�к�դ����   
	m_result.SetExtendedStyle(m_result.GetExtendedStyle() | LVS_EX_FULLROWSELECT | LVS_EX_GRIDLINES);

	// Ϊ�б���ͼ�ؼ��������   
	m_result.InsertColumn(0, _T("����"), LVCFMT_CENTER, rect.Width() / 7, 0);
	m_result.InsertColumn(1, _T("��ʼվ"), LVCFMT_CENTER, rect.Width() / 7, 1);
	m_result.InsertColumn(2, _T("�յ�վ"), LVCFMT_CENTER, rect.Width() / 7, 2);
	m_result.InsertColumn(3, _T("ʱ��"), LVCFMT_CENTER, rect.Width() / 7, 3);
	m_result.InsertColumn(4, _T("��ʱ"), LVCFMT_CENTER, rect.Width() / 7, 4);
	m_result.InsertColumn(5, _T("Ʊ��"), LVCFMT_CENTER, rect.Width() / 7, 5);
	m_result.InsertColumn(6, _T("��Ʊ"), LVCFMT_CENTER, rect.Width() / 7, 6);
	AddtoGrid();
	m_result.GetHeaderCtrl()->EnableWindow(0);
	return TRUE;
}

void CResultDlg::AddtoGrid()
{
	m_result.DeleteAllItems();
	m_result.InsertItem(0, _T(""));
	//���б���ͼ�ؼ��в�����
	m_result.SetItemText(0, 0, _T("D3228"));
	m_result.SetItemText(0, 1, _T("�Ϸ�"));
	m_result.SetItemText(0, 2, _T("�人"));
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


// CResultDlg ��Ϣ�������


void CResultDlg::OnBnClickedBack()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	CDialogEx::OnOK();
}


void CResultDlg::OnBnClickedBuy()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	CConfirmOrderDlg hDlg;           // ����Ի�����CTipDlg��ʵ�� 
	hDlg.DoModal();  // �����Ի���
}
