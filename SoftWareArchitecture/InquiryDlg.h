#include "ResultDlg.h"
#include "PersonalInformationDlg.h"
#include "HistoryOrderDlg.h"
// CInquiryDlg �Ի���

class CInquiryDlg : public CDialogEx
{
	DECLARE_DYNAMIC(CInquiryDlg)

public:
	CInquiryDlg(CString username, CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~CInquiryDlg();

// �Ի�������
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_INQUIRYDIALOG };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedQuerybutton();
	afx_msg void OnBnClickedButtonpi();
	afx_msg void OnBnClickedButtonho();
};
