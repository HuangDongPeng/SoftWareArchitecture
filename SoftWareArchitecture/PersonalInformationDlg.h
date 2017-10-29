#include "UserController.h"
#include "afxwin.h"
#include "SMSDlg.h"

// CPersonalInformationDlg �Ի���

class CPersonalInformationDlg : public CDialogEx
{
	DECLARE_DYNAMIC(CPersonalInformationDlg)

public:
	CPersonalInformationDlg(CString username, CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~CPersonalInformationDlg();

// �Ի�������
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOGPI };
#endif

protected:
	BOOL OnInitDialog();
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

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
