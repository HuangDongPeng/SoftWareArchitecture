#pragma once
#include "User.h"
#include "UserDA.h"
#include "UserController.h"

// CSignInDlg �Ի���

class CSignInDlg : public CDialogEx
{
	DECLARE_DYNAMIC(CSignInDlg)

public:
	CSignInDlg(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~CSignInDlg();

// �Ի�������
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_SIDIALOG };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
public:
	CString m_username;
	CString m_password;
	CString m_pin;
	afx_msg void OnBnClickedSigninbton();
};
