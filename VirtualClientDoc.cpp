// VirtualClientDoc.cpp : implementation of the CVirtualClientDoc class
//

#include "stdafx.h"
#include "VirtualClient.h"

#include "VirtualClientDoc.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CVirtualClientDoc

IMPLEMENT_DYNCREATE(CVirtualClientDoc, CDocument)

BEGIN_MESSAGE_MAP(CVirtualClientDoc, CDocument)
	//{{AFX_MSG_MAP(CVirtualClientDoc)
		// NOTE - the ClassWizard will add and remove mapping macros here.
		//    DO NOT EDIT what you see in these blocks of generated code!
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CVirtualClientDoc construction/destruction

CVirtualClientDoc::CVirtualClientDoc()
{
	// TODO: add one-time construction code here

}

CVirtualClientDoc::~CVirtualClientDoc()
{
}

BOOL CVirtualClientDoc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// TODO: add reinitialization code here
	// (SDI documents will reuse this document)

	return TRUE;
}



/////////////////////////////////////////////////////////////////////////////
// CVirtualClientDoc serialization

void CVirtualClientDoc::Serialize(CArchive& ar)
{
	if (ar.IsStoring())
	{
		// TODO: add storing code here
	}
	else
	{
		// TODO: add loading code here
	}
}

/////////////////////////////////////////////////////////////////////////////
// CVirtualClientDoc diagnostics

#ifdef _DEBUG
void CVirtualClientDoc::AssertValid() const
{
	CDocument::AssertValid();
}

void CVirtualClientDoc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CVirtualClientDoc commands
