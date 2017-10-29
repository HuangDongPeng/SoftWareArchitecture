// InquiryDlg.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "SoftWareArchitecture.h"
#include "InquiryDlg.h"
#include "afxdialogex.h"


// CInquiryDlg �Ի���
CString iusername;
IMPLEMENT_DYNAMIC(CInquiryDlg, CDialogEx)

CInquiryDlg::CInquiryDlg(CString username,CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_INQUIRYDIALOG, pParent)
{
	iusername = username;
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
	ON_BN_CLICKED(IDC_BUTTONPI, &CInquiryDlg::OnBnClickedButtonpi)
	ON_BN_CLICKED(IDC_BUTTONHO, &CInquiryDlg::OnBnClickedButtonho)
END_MESSAGE_MAP()


// CInquiryDlg ��Ϣ�������


void CInquiryDlg::OnBnClickedQuerybutton()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	CResultDlg hDlg;           // ����Ի�����CTipDlg��ʵ�� 
	hDlg.DoModal();  // �����Ի���
}


void CInquiryDlg::OnBnClickedButtonpi()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	CPersonalInformationDlg hDlg(iusername);           // ����Ի�����CTipDlg��ʵ�� 
	hDlg.DoModal();  // �����Ի���
}


void CInquiryDlg::OnBnClickedButtonho()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	CHistoryOrderDlg hDlg;           // ����Ի�����CTipDlg��ʵ�� 
	hDlg.DoModal();  // �����Ի���
}
