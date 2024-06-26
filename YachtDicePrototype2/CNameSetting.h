﻿#pragma once
#include "afxdialogex.h"


// CNameSetting dialog

class CNameSetting : public CDialogEx
{
	DECLARE_DYNAMIC(CNameSetting)

public:
	CNameSetting(CWnd* pParent = nullptr);   // standard constructor
	virtual ~CNameSetting();

// Dialog Data
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_NAME_DIALOG };
#endif

protected:
	HICON m_hIcon;

	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

	DECLARE_MESSAGE_MAP()
public:
	CImage backImage;
	virtual BOOL OnInitDialog();
	afx_msg void OnPaint();

	CString m_strInput; //닉네임
	afx_msg void OnBnClickedOk();
	afx_msg void OnShowWindow(BOOL bShow, UINT nStatus);

	CEdit m_editBox;
	CBitmapButton m_pic_Cancle;
	CBitmapButton m_pic_OK;
	afx_msg void OnStnClickedStaticUsername();

	afx_msg HBRUSH OnCtlColor(CDC* pDC, CWnd* pWnd, UINT nCtlColor);
	afx_msg HCURSOR OnQueryDragIcon();
};
