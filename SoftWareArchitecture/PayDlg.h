

// CPayDlg �Ի���

class CPayDlg : public CDialogEx
{
	DECLARE_DYNAMIC(CPayDlg)

public:
	CPayDlg(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~CPayDlg();

// �Ի�������
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOGPAY };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��
	BOOL CPayDlg::OnInitDialog();
	DECLARE_MESSAGE_MAP()
public:
	CString m_timecount;
	afx_msg void OnTimer(UINT_PTR nIDEvent);
};
