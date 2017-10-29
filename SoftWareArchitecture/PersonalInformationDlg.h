#include "UserController.h"
#include "afxwin.h"
#include "SMSDlg.h"

// CPersonalInformationDlg 对话框

class CPersonalInformationDlg : public CDialogEx
{
	DECLARE_DYNAMIC(CPersonalInformationDlg)

public:
	CPersonalInformationDlg(CString username, CWnd* pParent = NULL);   // 标准构造函数
	virtual ~CPersonalInformationDlg();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOGPI };
#endif

protected:
	BOOL OnInitDialog();
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	CString m_pname;
	CString m_pidcard;
	CString m_pusername;
	CString m_ppassword;
	afx_msg void OnBnClickedButtonChangePI();
	afx_msg void OnBnClickedButtonConfirm();
	CString m_ptel;
};
