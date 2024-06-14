﻿// TUTORIAL2.cpp : implementation file
//

#include "pch.h"
#include "YachtDicePrototype2.h"
#include "TUTORIAL2.h"

// TUTORIAL2

IMPLEMENT_DYNCREATE(TUTORIAL2, CFormView)

TUTORIAL2::TUTORIAL2()
	: CFormView(IDD_TUTORIAL2)
{

}

TUTORIAL2::~TUTORIAL2()
{
}

void TUTORIAL2::DoDataExchange(CDataExchange* pDX)
{
	CFormView::DoDataExchange(pDX);
}

BEGIN_MESSAGE_MAP(TUTORIAL2, CFormView)
	ON_WM_PAINT()
	ON_BN_CLICKED(IDC_PREVIOUS_BTN1, &TUTORIAL2::OnBnClickedPreviousBtn1)
END_MESSAGE_MAP()


// TUTORIAL2 diagnostics

#ifdef _DEBUG
void TUTORIAL2::AssertValid() const
{
	CFormView::AssertValid();
}

#ifndef _WIN32_WCE
void TUTORIAL2::Dump(CDumpContext& dc) const
{
	CFormView::Dump(dc);
}
#endif
#endif //_DEBUG


// TUTORIAL2 message handlers


BOOL TUTORIAL2::Create(LPCTSTR lpszClassName, LPCTSTR lpszWindowName, DWORD dwStyle, const RECT& rect, CWnd* pParentWnd, UINT nID, CCreateContext* pContext)
{
	// TODO: Add your specialized code here and/or call the base class

	return CFormView::Create(lpszClassName, lpszWindowName, dwStyle, rect, pParentWnd, nID, pContext);
}


void TUTORIAL2::OnInitialUpdate()
{
	CFormView::OnInitialUpdate();

	// TODO: Add your specialized code here and/or call the base class
	back.Load(_T("BACKGROUND.png"));//이미지 로드
}


void TUTORIAL2::OnPaint()
{
	CPaintDC dc(this); // device context for painting

	CRect rect;//픽쳐 컨트롤의 크기를 저장할 CRect 객체
	GetClientRect(&rect);

	back.StretchBlt(dc.m_hDC, 0, 0, rect.Width(), rect.Height(), SRCCOPY);//이미지를 픽쳐 컨트롤 크기로 조정
}


void TUTORIAL2::OnBnClickedPreviousBtn1()
{
	// TODO: Add your control notification handler code here
}
