
// JsonCheckerDlg.h : 头文件
//

#pragma once
#include "afxwin.h"


// CJsonCheckerDlg 对话框
class CJsonCheckerDlg : public CDialogEx
{
// 构造
public:
	CString m_sJsonFile; // JSON 文件
	CJsonCheckerDlg(CWnd* pParent = NULL);	// 标准构造函数

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_JSONCHECKER_DIALOG, IDH = IDR_HTML_JSONCHECKER_DIALOG };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV 支持

// 实现
protected:
	HICON m_hIcon;

	// 生成的消息映射函数
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
	DECLARE_DHTML_EVENT_MAP()
public:
	afx_msg void OnFileSettings();
	afx_msg void OnFileQuit();
	CComboBox m_ComVendorTemplate;
	int m_nVendorTemplate;
	CComboBox m_ComStandardTemplate;
	int m_nStandardTemplate;
	CEdit m_EditJSON;
	CString m_sJSON; // JSON文件内容
	CEdit m_EditTarget;
	CString m_sTarget; // 转换结果
	afx_msg void OnBnClickedConvert();
	afx_msg void OnFileOpen();
	CComboBox m_ComInterfaceType;
	int m_nInterfaceType;
	afx_msg void OnEnChangeJSON();
};
