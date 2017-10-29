// CSignUpDlg 对话框
#include "UserController.h"
class CSignUpDlg : public CDialogEx
{
	DECLARE_DYNAMIC(CSignUpDlg)

public:
	CSignUpDlg(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~CSignUpDlg();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_SUDIALOG };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	CString m_username;
	CString m_password;
	CString m_name;
	CString m_idCard;
	CString m_tel;
	afx_msg void OnBnClickedCommitbton();
	afx_msg void OnEnChangeSupassword();
	afx_msg void OnBnClickedSMS();
	void OnTimer(UINT_PTR nIDEvent);
};
