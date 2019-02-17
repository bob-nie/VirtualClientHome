// VirtualClientDoc.h : interface of the CVirtualClientDoc class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_VIRTUALCLIENTDOC_H__8342E32A_2B3E_44DC_B130_AD02853CE2C9__INCLUDED_)
#define AFX_VIRTUALCLIENTDOC_H__8342E32A_2B3E_44DC_B130_AD02853CE2C9__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


class CVirtualClientDoc : public CDocument
{
protected: // create from serialization only
	CVirtualClientDoc();
	DECLARE_DYNCREATE(CVirtualClientDoc)

// Attributes
public:

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CVirtualClientDoc)
	public:
	virtual BOOL OnNewDocument();
	virtual void Serialize(CArchive& ar);
	//}}AFX_VIRTUAL

// Implementation
public:
	virtual ~CVirtualClientDoc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CVirtualClientDoc)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_VIRTUALCLIENTDOC_H__8342E32A_2B3E_44DC_B130_AD02853CE2C9__INCLUDED_)
