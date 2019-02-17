// VirtualClient.h : main header file for the VIRTUALCLIENT application
//

#if !defined(AFX_VIRTUALCLIENT_H__FE5E848A_159A_4362_B67D_CDABB363AC29__INCLUDED_)
#define AFX_VIRTUALCLIENT_H__FE5E848A_159A_4362_B67D_CDABB363AC29__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"       // main symbols

/////////////////////////////////////////////////////////////////////////////
// CVirtualClientApp:
// See VirtualClient.cpp for the implementation of this class
//

class CVirtualClientApp : public CWinApp
{
public:
	CVirtualClientApp();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CVirtualClientApp)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementation
	//{{AFX_MSG(CVirtualClientApp)
	afx_msg void OnAppAbout();
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_VIRTUALCLIENT_H__FE5E848A_159A_4362_B67D_CDABB363AC29__INCLUDED_)
