#pragma once
#include "afxcmn.h"


// CResultDlg 对话框

class CResultDlg : public CDialogEx
{
	DECLARE_DYNAMIC(CResultDlg)

public:
	CResultDlg(CWnd* pParent = NULL);   // 标准构造函数
	BOOL OnInitDialog();
	void AddtoGrid();
	virtual ~CResultDlg();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_TRAINDIALOG };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	CListCtrl m_result;
};
