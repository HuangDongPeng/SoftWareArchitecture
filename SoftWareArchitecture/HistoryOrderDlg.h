#pragma once
#include "afxcmn.h"


// CHistoryOrderDlg �Ի���

class CHistoryOrderDlg : public CDialogEx
{
	DECLARE_DYNAMIC(CHistoryOrderDlg)

public:
	CHistoryOrderDlg(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~CHistoryOrderDlg();

// �Ի�������
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOGHO };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
public:
	CListCtrl m_historyorder;
	afx_msg void OnBnClickedButtonOK();
	BOOL OnInitDialog();
};
