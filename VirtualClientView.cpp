// VirtualClientView.cpp : implementation of the CVirtualClientView class
//

#include "stdafx.h"
#include "VirtualClient.h"

#include "VirtualClientDoc.h"
#include "VirtualClientView.h"

#include <afxcview.h>
#include <winsock2.h>
#include "Define.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

SOCKET sClient;

SOCKADDR_IN caddr;

char szMessage[MSGSIZE];
char szLog[1024];
char szMsg[1024];


void GetTime(char* szString)
{
	time_t tt = time(NULL);
	tm *t;
	t = ::localtime(&tt);

	sprintf(szString,"%d/%02d/%02d %02d:%02d:%02d", 
		t->tm_year + 1900,
		t->tm_mon + 1,
		t->tm_mday,
		t->tm_hour,
		t->tm_min,
		t->tm_sec);
}

/////////////////////////////////////////////////////////////////////////////
// CVirtualClientView

IMPLEMENT_DYNCREATE(CVirtualClientView, CFormView)

BEGIN_MESSAGE_MAP(CVirtualClientView, CFormView)
	//{{AFX_MSG_MAP(CVirtualClientView)
	ON_COMMAND(IDC_SRV_START, OnSrvStart)
	ON_WM_CANCELMODE()
	ON_WM_CAPTURECHANGED()
	ON_MESSAGE(WM_SOCKET,OnSocket)
	ON_WM_DESTROY()
	ON_BN_CLICKED(IDC_BTN_SEND, OnBtnSend)
	//}}AFX_MSG_MAP
	// Standard printing commands
	ON_COMMAND(ID_FILE_PRINT, CFormView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, CFormView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, CFormView::OnFilePrintPreview)
	
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CVirtualClientView construction/destruction

CVirtualClientView::CVirtualClientView()
	: CFormView(CVirtualClientView::IDD)
{
	//{{AFX_DATA_INIT(CVirtualClientView)
		// NOTE: the ClassWizard will add member initialization here
	//}}AFX_DATA_INIT
	// TODO: add construction code here

}

CVirtualClientView::~CVirtualClientView()
{
}

void CVirtualClientView::DoDataExchange(CDataExchange* pDX)
{
	CFormView::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CVirtualClientView)
		// NOTE: the ClassWizard will add DDX and DDV calls here
	//}}AFX_DATA_MAP
}

BOOL CVirtualClientView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: Modify the Window class or styles here by modifying
	//  the CREATESTRUCT cs

	return CFormView::PreCreateWindow(cs);
}

void CVirtualClientView::OnInitialUpdate()
{
	CFormView::OnInitialUpdate();
	GetParentFrame()->RecalcLayout();
	ResizeParentToFit();

	CListView* clv = (CListView*)this->GetDlgItem(IDC_LIST);
	CListCtrl* clc = &(clv->GetListCtrl());


	RECT rect;
	clv->GetClientRect(&rect);

	DWORD dwWidth = rect.right - rect.left;

	clc->InsertColumn(0,"rownum",LVCFMT_LEFT,0);
	clc->InsertColumn(1,"datetime",LVCFMT_LEFT,150);
	clc->InsertColumn(2,"recv",LVCFMT_LEFT,(dwWidth-150)/4*3);
	clc->InsertColumn(3,"send",LVCFMT_LEFT,(dwWidth-150)/4);

	WSADATA wsd;
	WSAStartup(MAKEWORD(2,2),&wsd);
	sClient = socket(AF_INET,SOCK_STREAM,0);

	WSAAsyncSelect(sClient,this->m_hWnd,WM_SOCKET,FD_CONNECT | FD_READ| FD_CLOSE);

	int nPort = 7000;

	ZeroMemory(&caddr,sizeof(SOCKADDR_IN));
	caddr.sin_addr.S_un.S_addr = inet_addr("127.0.0.1");
	caddr.sin_family = AF_INET;
	caddr.sin_port = htons(nPort);

	connect(sClient,(SOCKADDR*)&caddr,sizeof(SOCKADDR_IN));
	
}

/////////////////////////////////////////////////////////////////////////////
// CVirtualClientView printing

BOOL CVirtualClientView::OnPreparePrinting(CPrintInfo* pInfo)
{
	// default preparation
	return DoPreparePrinting(pInfo);
}

void CVirtualClientView::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add extra initialization before printing
}

void CVirtualClientView::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add cleanup after printing
}

void CVirtualClientView::OnPrint(CDC* pDC, CPrintInfo* /*pInfo*/)
{
	// TODO: add customized printing code here
}

/////////////////////////////////////////////////////////////////////////////
// CVirtualClientView diagnostics

#ifdef _DEBUG
void CVirtualClientView::AssertValid() const
{
	CFormView::AssertValid();
}

void CVirtualClientView::Dump(CDumpContext& dc) const
{
	CFormView::Dump(dc);
}

CVirtualClientDoc* CVirtualClientView::GetDocument() // non-debug version is inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CVirtualClientDoc)));
	return (CVirtualClientDoc*)m_pDocument;
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CVirtualClientView message handlers



void CVirtualClientView::OnSrvStart() 
{
	// TODO: Add your command handler code here
	/*
	WSADATA wsd;
	if(WSAStartup(MAKEWORD(2,2),&wsd) != 0)
	{
		return;
	}
	sListen = socket(AF_INET,SOCK_STREAM,0);

	int nPort = 7070;

	//SOCKADDR_IN addr;
	ZeroMemory(&saddr,sizeof(SOCKADDR_IN));
	saddr.sin_addr.S_un.S_addr = inet_addr("127.0.0.1");
	saddr.sin_family = AF_INET;
	saddr.sin_port = htons(nPort);

	if(bind(sListen,(const struct sockaddr FAR*)&saddr,sizeof(SOCKADDR_IN)))
	{
		
		int eCode = WSAGetLastError();
		char sztmp[100];
		sprintf(sztmp,"bind error,error code is %d",eCode);
		MessageBox(sztmp);
		return;
	}

	if(listen(sListen,5))
	{
		MessageBox("listen error.");
		return;
	}

	WSAAsyncSelect(sListen,this->m_hWnd,WM_SOCKET,FD_ACCEPT | FD_CONNECT);

	char sztmp[20] = "service has startup";

	InsertLog(sztmp,LOGRECV);

  */

	/*
	SOCKADDR_IN si;
	int nSize = sizeof(SOCKADDR_IN);

	SOCKET A = accept(sListen,(SOCKADDR*)&si,&nSize);

	char m[1024];

	recv(A,m,1024,0);

	InsertLog(m,LOGRECV);

  
	*/

	//WSACleanup();


	
}

void CVirtualClientView::OnCancelMode() 
{
	CFormView::OnCancelMode();
	
	// TODO: Add your message handler code here
	
}

void CVirtualClientView::OnCaptureChanged(CWnd *pWnd) 
{
	// TODO: Add your message handler code here
	
	CFormView::OnCaptureChanged(pWnd);
}


LRESULT CVirtualClientView::OnSocket(WPARAM wParam,LPARAM lParam)
{
	
	switch(WSAGETSELECTEVENT(lParam))
	{
	case FD_CONNECT:
		strcpy(szLog, "client has connect to server");
		InsertLog(szLog,LOGRECV);
		break;
		/*
	case FD_ACCEPT:
		strcpy(szLog,"have accept client connect");
		InsertLog(szLog,LOGRECV);
		sAccept = accept(sListen,(SOCKADDR*)&caddr,&nAddressSize);
		WSAAsyncSelect(sAccept,this->m_hWnd,WM_SOCKET,FD_CONNECT | FD_READ | FD_CLOSE);
		break;
		*/
	case FD_READ:
		ZeroMemory(&szMessage,MSGSIZE);
		recv(wParam,szMessage,MSGSIZE,0);
		InsertLog(szMessage,LOGRECV);
		
		break;
	case FD_WRITE:
		break;
	case FD_CLOSE:
		strcpy(szLog, "server has disconnected");
		InsertLog(szLog,LOGRECV);
		closesocket(wParam);
		break;

	}
	//SOCKADDR_IN c_addr;

	return 0;
	
}

void CVirtualClientView::InsertLog(char* szLogBuffer,int nLogType)
{
	::GetTime(szDateTime);
	CListView* clv = (CListView*)this->GetDlgItem(IDC_LIST);
	CListCtrl* clc = &(clv->GetListCtrl());

	int nRowNum = clc->GetItemCount();
	char szColumnOne[10];
	sprintf(szColumnOne,"%d",nRowNum);
	clc->InsertItem(nRowNum,szColumnOne);
	clc->SetItemText(nRowNum,1,szDateTime);
	switch(nLogType)
	{
	case LOGRECV:
		clc->SetItemText(nRowNum,2,szLogBuffer);
		break;
	case LOGSEND:
		clc->SetItemText(nRowNum,3,szLogBuffer);
		break;
	}

}

void CVirtualClientView::OnDestroy() 
{
	closesocket(sClient);
	WSACleanup();
	CFormView::OnDestroy();
	
	// TODO: Add your message handler code here
	
}

void CVirtualClientView::OnBtnSend() 
{
	// TODO: Add your control notification handler code here
	CWnd* cWnd = this->GetDlgItem(IDC_INPUT);
	CString cs;
	cWnd->GetWindowText(cs);
	if(cs.IsEmpty())
	{
		MessageBox("input is empty.");
		return;
	}


	strcpy(szMsg,cs.GetBuffer(cs.GetLength()));

	//char szMsg[1024] = "hello,this is comes from client.";

	send(sClient,szMsg,sizeof(szMsg),0);
	InsertLog(szMsg,LOGSEND);

	cWnd->SetWindowText(NULL);
}
