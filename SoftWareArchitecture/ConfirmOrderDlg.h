#pragma once


// CConfirmOrderDlg 对话框

class CConfirmOrderDlg : public CDialogEx
{
	DECLARE_DYNAMIC(CConfirmOrderDlg)

public:
	CConfirmOrderDlg(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~CConfirmOrderDlg();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_ORDERDIALOG };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
};
