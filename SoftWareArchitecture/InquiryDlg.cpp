// InquiryDlg.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "SoftWareArchitecture.h"
#include "InquiryDlg.h"
#include "afxdialogex.h"


// CInquiryDlg �Ի���

IMPLEMENT_DYNAMIC(CInquiryDlg, CDialogEx)

CInquiryDlg::CInquiryDlg(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_INQUIRYDIALOG, pParent)
{

}

CInquiryDlg::~CInquiryDlg()
{
}

void CInquiryDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(CInquiryDlg, CDialogEx)
	ON_BN_CLICKED(IDC_QUERYBUTTON, &CInquiryDlg::OnBnClickedQuerybutton)
END_MESSAGE_MAP()


// CInquiryDlg ��Ϣ�������


void CInquiryDlg::OnBnClickedQuerybutton()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	CResultDlg hDlg;           // ����Ի�����CTipDlg��ʵ�� 
	CDialog::OnOK();
	hDlg.DoModal();  // �����Ի���
}
