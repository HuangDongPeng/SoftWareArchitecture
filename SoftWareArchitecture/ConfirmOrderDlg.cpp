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
}


BEGIN_MESSAGE_MAP(CConfirmOrderDlg, CDialogEx)
	ON_BN_CLICKED(IDC_BUTTONAP, &CConfirmOrderDlg::OnBnClickedButtonaddApassenger)
END_MESSAGE_MAP()


// CConfirmOrderDlg ��Ϣ�������


void CConfirmOrderDlg::OnBnClickedButtonaddApassenger()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
}
