// CAddAPassengerDlg 对话框

#include "afxcmn.h"
class CAddAPassengerDlg : public CDialogEx
{
	DECLARE_DYNAMIC(CAddAPassengerDlg)

public:
	CAddAPassengerDlg(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~CAddAPassengerDlg();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOGAP };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	BOOL OnInitDialog();

	void AddtoGrid();

	DECLARE_MESSAGE_MAP()
public:
	CListCtrl m_passenger;
};
