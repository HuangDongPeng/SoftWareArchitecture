#pragma once


// CSMSDlg �Ի���

class CSMSDlg : public CDialogEx
{
	DECLARE_DYNAMIC(CSMSDlg)

public:
	CSMSDlg(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~CSMSDlg();

// �Ի�������
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_SMS };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
public:
	//afx_msg void OnTimer(UINT_PTR nIDEvent);
	afx_msg void OnBnClickedButtonGetSMS();
	afx_msg void OnTimer(UINT_PTR nIDEvent);
};
