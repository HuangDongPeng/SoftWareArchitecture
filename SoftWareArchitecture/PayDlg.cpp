// PayDlg.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "SoftWareArchitecture.h"
#include "PayDlg.h"
#include "afxdialogex.h"
int second = 59;
int minute = 29;
// CPayDlg �Ի���

IMPLEMENT_DYNAMIC(CPayDlg, CDialogEx)

CPayDlg::CPayDlg(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_DIALOGPAY, pParent)
	, m_timecount(_T(""))
{

}

CPayDlg::~CPayDlg()
{
}

void CPayDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_DAOJISHI, m_timecount);
}

BOOL CPayDlg::OnInitDialog()
{
	CDialogEx::OnInitDialog();
	SetTimer(0, 1000, NULL);
	return TRUE;
}


BEGIN_MESSAGE_MAP(CPayDlg, CDialogEx)
	ON_WM_TIMER()
END_MESSAGE_MAP()


// CPayDlg ��Ϣ�������


void CPayDlg::OnTimer(UINT_PTR nIDEvent)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	CString a;
	a.Format(_T("%d:%d"), minute, second);
	GetDlgItem(IDC_DAOJISHI)->SetWindowTextW(a);
	if (--second == 0) {
		second = 59;
		minute--;
	}
	CDialogEx::OnTimer(nIDEvent);
}
