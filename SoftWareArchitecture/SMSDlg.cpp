// SMSDlg.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "SoftWareArchitecture.h"
#include "SMSDlg.h"
#include "afxdialogex.h"
int timecount1 = 60;

// CSMSDlg �Ի���

IMPLEMENT_DYNAMIC(CSMSDlg, CDialogEx)

CSMSDlg::CSMSDlg(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_SMS, pParent)
{

}

CSMSDlg::~CSMSDlg()
{
}

void CSMSDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(CSMSDlg, CDialogEx)
	ON_WM_TIMER()
	ON_BN_CLICKED(IDC_BUTTONSMS, &CSMSDlg::OnBnClickedButtonGetSMS)
	ON_WM_TIMER()
END_MESSAGE_MAP()


// CSMSDlg ��Ϣ�������


//void CSMSDlg::OnTimer(UINT_PTR nIDEvent)
//{
//	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
//	CString a;
//	a.Format(_T("%d������·���"), timecount1);
//	GetDlgItem(IDC_BUTTONSMS)->SetWindowText(a);
//	if (--timecount1 == 0) {
//		GetDlgItem(IDC_BUTTONSMS)->EnableWindow(true);
//		GetDlgItem(IDC_BUTTONSMS)->SetWindowText(_T("��ȡ��֤��"));
//		timecount1 = 60;
//		KillTimer(0);
//	}
//	CDialogEx::OnTimer(nIDEvent);
//}


void CSMSDlg::OnBnClickedButtonGetSMS()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	OnTimer(0);
	SetTimer(0, 1000, NULL);
	GetDlgItem(IDC_BUTTONSMS)->EnableWindow(false);
}


void CSMSDlg::OnTimer(UINT_PTR nIDEvent)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	CString a;
	a.Format(_T("%d������·���"), timecount1);
	GetDlgItem(IDC_BUTTONSMS)->SetWindowText(a);
	if (--timecount1 == 0) {
		GetDlgItem(IDC_BUTTONSMS)->EnableWindow(true);
		GetDlgItem(IDC_BUTTONSMS)->SetWindowText(_T("��ȡ��֤��"));
		timecount1 = 60;
		KillTimer(0);
	}
	CDialogEx::OnTimer(nIDEvent);
}
