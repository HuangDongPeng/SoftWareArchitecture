#pragma once


// CSMSDlg 对话框

class CSMSDlg : public CDialogEx
{
	DECLARE_DYNAMIC(CSMSDlg)

public:
	CSMSDlg(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~CSMSDlg();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_SMS };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	//afx_msg void OnTimer(UINT_PTR nIDEvent);
	afx_msg void OnBnClickedButtonGetSMS();
	afx_msg void OnTimer(UINT_PTR nIDEvent);
};
