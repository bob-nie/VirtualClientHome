// VirtualClientView.h : interface of the CVirtualClientView class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_VIRTUALCLIENTVIEW_H__79D91880_A973_4D63_BE8A_F64193EE9565__INCLUDED_)
#define AFX_VIRTUALCLIENTVIEW_H__79D91880_A973_4D63_BE8A_F64193EE9565__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


class CVirtualClientView : public CFormView
{
protected: // create from serialization only
	CVirtualClientView();
	DECLARE_DYNCREATE(CVirtualClientView)

public:
	//{{AFX_DATA(CVirtualClientView)
	enum{ IDD = IDD_VIRTUALCLIENT_FORM };
		// NOTE: the ClassWizard will add data members here
	//}}AFX_DATA

// Attributes
public:
	CVirtualClientDoc* GetDocument();

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CVirtualClientView)
	public:
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	virtual void OnInitialUpdate(); // called first time after construct
	virtual BOOL OnPreparePrinting(CPrintInfo* pInfo);
	virtual void OnBeginPrinting(CDC* pDC, CPrintInfo* pInfo);
	virtual void OnEndPrinting(CDC* pDC, CPrintInfo* pInfo);
	virtual void OnPrint(CDC* pDC, CPrintInfo* pInfo);
	//}}AFX_VIRTUAL

// Implementation
public:
	virtual ~CVirtualClientView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CVirtualClientView)
	afx_msg void OnSrvStart();
	afx_msg void OnCancelMode();
	afx_msg void OnCaptureChanged(CWnd *pWnd);
	afx_msg LRESULT OnSocket(WPARAM wParam,LPARAM lParam);
	afx_msg void OnDestroy();
	afx_msg void OnBtnSend();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()

private:
	void InsertLog(char* szLogBuffer,int nLogType);
};

#ifndef _DEBUG  // debug version in VirtualClientView.cpp
inline CVirtualClientDoc* CVirtualClientView::GetDocument()
   { return (CVirtualClientDoc*)m_pDocument; }
#endif

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_VIRTUALCLIENTVIEW_H__79D91880_A973_4D63_BE8A_F64193EE9565__INCLUDED_)
