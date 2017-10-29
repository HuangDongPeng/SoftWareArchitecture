// ConfirmOrderDlg.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "SoftWareArchitecture.h"
#include "ConfirmOrderDlg.h"
#include "afxdialogex.h"


// CConfirmOrderDlg �Ի���

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
	DDX_Control(pDX, IDC_LIST1, m_newpassenger);
}


BEGIN_MESSAGE_MAP(CConfirmOrderDlg, CDialogEx)
	ON_BN_CLICKED(IDC_BUTTONAP, &CConfirmOrderDlg::OnBnClickedButtonaddApassenger)
	ON_BN_CLICKED(IDC_BUTTONCONCEL, &CConfirmOrderDlg::OnBnClickedButtonconcel)
	ON_BN_CLICKED(IDC_BUTTONCO, &CConfirmOrderDlg::OnBnClickedButtonCommitOrder)
END_MESSAGE_MAP()


// CConfirmOrderDlg ��Ϣ�������


void CConfirmOrderDlg::OnBnClickedButtonaddApassenger()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	CAddAPassengerDlg hDlg;          // ����Ի�����CTipDlg��ʵ�� 
	hDlg.DoModal();  // �����Ի���
	CRect rect;
	m_newpassenger.GetClientRect(&rect);
	// Ϊ�б���ͼ�ؼ����ȫ��ѡ�к�դ����   
	m_newpassenger.SetExtendedStyle(m_newpassenger.GetExtendedStyle() | LVS_EX_FULLROWSELECT | LVS_EX_GRIDLINES);

	// Ϊ�б���ͼ�ؼ��������   
	m_newpassenger.InsertColumn(0, _T("����"), LVCFMT_CENTER, rect.Width() / 5, 0);
	m_newpassenger.InsertColumn(1, _T("���֤��"), LVCFMT_CENTER, rect.Width() / 2.5, 1);
	m_newpassenger.InsertColumn(2, _T("����"), LVCFMT_CENTER, rect.Width() / 5, 2);
	m_newpassenger.InsertColumn(3, _T("ϯ��"), LVCFMT_CENTER, rect.Width() / 5, 2);
	m_newpassenger.DeleteAllItems();
	m_newpassenger.InsertItem(0, _T(""));
	//���б���ͼ�ؼ��в�����
	m_newpassenger.SetItemText(0, 0, _T("�Ÿ���"));
	m_newpassenger.SetItemText(0, 1, _T("340*******2017"));
	m_newpassenger.SetItemText(0, 2, _T("����"));
	m_newpassenger.SetItemText(0, 3, _T("����"));
	m_newpassenger.GetHeaderCtrl()->EnableWindow(0);
}

void CConfirmOrderDlg::OnBnClickedButtonconcel()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	CDialogEx::OnOK();
}


void CConfirmOrderDlg::OnBnClickedButtonCommitOrder()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	CPayDlg hDlg;           // ����Ի�����CTipDlg��ʵ�� 
	hDlg.DoModal();  // �����Ի���
	CDialogEx::OnOK();
}
