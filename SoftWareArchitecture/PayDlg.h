

// CPayDlg 对话框

class CPayDlg : public CDialogEx
{
	DECLARE_DYNAMIC(CPayDlg)

public:
	CPayDlg(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~CPayDlg();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOGPAY };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持
	BOOL CPayDlg::OnInitDialog();
	DECLARE_MESSAGE_MAP()
public:
	CString m_timecount;
	afx_msg void OnTimer(UINT_PTR nIDEvent);
};
