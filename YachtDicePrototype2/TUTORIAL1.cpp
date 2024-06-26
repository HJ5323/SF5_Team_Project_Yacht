﻿// TUTORIAL1.cpp : implementation file
//

#include "pch.h"
#include "YachtDicePrototype2.h"
#include "TUTORIAL1.h"
#include "CTutorial.h"

// TUTORIAL1

IMPLEMENT_DYNCREATE(TUTORIAL1, CFormView)

TUTORIAL1::TUTORIAL1()
	: CFormView(IDD_TUTORIAL1)
{

}

TUTORIAL1::~TUTORIAL1()
{
}

void TUTORIAL1::DoDataExchange(CDataExchange* pDX)
{
	CFormView::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_NEXT_BTN1, m_next_btn);
}

BEGIN_MESSAGE_MAP(TUTORIAL1, CFormView)
	ON_WM_PAINT()
	ON_BN_CLICKED(IDC_NEXT_BTN1, &TUTORIAL1::OnBnClickedNextBtn1)
END_MESSAGE_MAP()


// TUTORIAL1 diagnostics

#ifdef _DEBUG
void TUTORIAL1::AssertValid() const
{
	CFormView::AssertValid();
}

#ifndef _WIN32_WCE
void TUTORIAL1::Dump(CDumpContext& dc) const
{
	CFormView::Dump(dc);
}
#endif
#endif //_DEBUG


// TUTORIAL1 message handlers


void TUTORIAL1::OnInitialUpdate()
{
	CFormView::OnInitialUpdate();

	// TODO: Add your specialized code here and/or call the base class
	back.Load(_T("TUTORIAL_RULE.png"));//이미지 로드
	m_next_btn.LoadBitmaps(IDB_NEXT, NULL, NULL, NULL); // 첫 번째 인자에는 추가한 비트맵 ID명
	m_next_btn.SizeToContent(); // 이미지 크기에 버튼 크기를 맞춰주는 작업
}


BOOL TUTORIAL1::Create(LPCTSTR lpszClassName, LPCTSTR lpszWindowName, DWORD dwStyle, const RECT& rect, CWnd* pParentWnd, UINT nID, CCreateContext* pContext)
{
	// TODO: Add your specialized code here and/or call the base class

	return CFormView::Create(lpszClassName, lpszWindowName, dwStyle, rect, pParentWnd, nID, pContext);
}


void TUTORIAL1::OnPaint()
{
	CPaintDC dc(this); // device context for painting

	CRect rect;//픽쳐 컨트롤의 크기를 저장할 CRect 객체
	GetClientRect(&rect);

	back.StretchBlt(dc.m_hDC, 0, 0, rect.Width(), rect.Height(), SRCCOPY);//이미지를 픽쳐 컨트롤 크기로 조정
}

void TUTORIAL1::OnBnClickedNextBtn1()
{
	CTutorial* pTutorialDlg = static_cast<CTutorial*>(GetParent()); // Get parent dialog
	if (pTutorialDlg)
	{
		pTutorialDlg->HideForm1();
		pTutorialDlg->ShowForm2();
	}
}
