// CAddAPassengerDlg �Ի���

#include "afxcmn.h"
class CAddAPassengerDlg : public CDialogEx
{
	DECLARE_DYNAMIC(CAddAPassengerDlg)

public:
	CAddAPassengerDlg(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~CAddAPassengerDlg();

// �Ի�������
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOGAP };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	BOOL OnInitDialog();

	void AddtoGrid();

	DECLARE_MESSAGE_MAP()
public:
	CListCtrl m_passenger;
};
