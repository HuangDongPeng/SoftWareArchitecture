#include "ResultDlg.h"
// CInquiryDlg 对话框

class CInquiryDlg : public CDialogEx
{
	DECLARE_DYNAMIC(CInquiryDlg)

public:
	CInquiryDlg(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~CInquiryDlg();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_INQUIRYDIALOG };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedQuerybutton();
};
