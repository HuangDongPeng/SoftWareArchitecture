#pragma once


// CConfirmOrderDlg �Ի���

class CConfirmOrderDlg : public CDialogEx
{
	DECLARE_DYNAMIC(CConfirmOrderDlg)

public:
	CConfirmOrderDlg(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~CConfirmOrderDlg();

// �Ի�������
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_ORDERDIALOG };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
};
