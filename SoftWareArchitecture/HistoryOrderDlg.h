#pragma once
#include "afxcmn.h"


// CHistoryOrderDlg 对话框

class CHistoryOrderDlg : public CDialogEx
{
	DECLARE_DYNAMIC(CHistoryOrderDlg)

public:
	CHistoryOrderDlg(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~CHistoryOrderDlg();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOGHO };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	CListCtrl m_historyorder;
	afx_msg void OnBnClickedButtonOK();
	BOOL OnInitDialog();
};
