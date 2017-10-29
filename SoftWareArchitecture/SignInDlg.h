#pragma once
#include "User.h"
#include "UserDA.h"
#include "UserController.h"

// CSignInDlg 对话框

class CSignInDlg : public CDialogEx
{
	DECLARE_DYNAMIC(CSignInDlg)

public:
	CSignInDlg(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~CSignInDlg();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_SIDIALOG };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	CString m_username;
	CString m_password;
	CString m_pin;
	afx_msg void OnBnClickedSigninbton();
};
