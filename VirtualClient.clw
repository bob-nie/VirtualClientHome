; CLW file contains information for the MFC ClassWizard

[General Info]
Version=1
LastClass=CVirtualClientView
LastTemplate=CDialog
NewFileInclude1=#include "stdafx.h"
NewFileInclude2=#include "VirtualClient.h"
LastPage=0

ClassCount=5
Class1=CVirtualClientApp
Class2=CVirtualClientDoc
Class3=CVirtualClientView
Class4=CMainFrame

ResourceCount=3
Resource1=IDD_ABOUTBOX
Resource2=IDR_MAINFRAME
Class5=CAboutDlg
Resource3=IDD_VIRTUALCLIENT_FORM

[CLS:CVirtualClientApp]
Type=0
HeaderFile=VirtualClient.h
ImplementationFile=VirtualClient.cpp
Filter=N

[CLS:CVirtualClientDoc]
Type=0
HeaderFile=VirtualClientDoc.h
ImplementationFile=VirtualClientDoc.cpp
Filter=N

[CLS:CVirtualClientView]
Type=0
HeaderFile=VirtualClientView.h
ImplementationFile=VirtualClientView.cpp
Filter=D
LastObject=IDC_BTN_SEND
BaseClass=CFormView
VirtualFilter=VWC


[CLS:CMainFrame]
Type=0
HeaderFile=MainFrm.h
ImplementationFile=MainFrm.cpp
Filter=T




[CLS:CAboutDlg]
Type=0
HeaderFile=VirtualClient.cpp
ImplementationFile=VirtualClient.cpp
Filter=D

[DLG:IDD_ABOUTBOX]
Type=1
Class=CAboutDlg
ControlCount=4
Control1=IDC_STATIC,static,1342177283
Control2=IDC_STATIC,static,1342308480
Control3=IDC_STATIC,static,1342308352
Control4=IDOK,button,1342373889

[MNU:IDR_MAINFRAME]
Type=1
Class=CMainFrame
Command1=ID_FILE_NEW
Command2=ID_FILE_OPEN
Command3=ID_FILE_SAVE
Command4=ID_FILE_SAVE_AS
Command5=ID_FILE_PRINT
Command6=ID_FILE_PRINT_PREVIEW
Command7=ID_FILE_PRINT_SETUP
Command8=ID_FILE_MRU_FILE1
Command9=ID_APP_EXIT
Command10=ID_EDIT_UNDO
Command11=ID_EDIT_CUT
Command12=ID_EDIT_COPY
Command13=ID_EDIT_PASTE
Command14=ID_VIEW_TOOLBAR
Command15=ID_VIEW_STATUS_BAR
Command16=ID_APP_ABOUT
Command17=IDC_SRV_START
Command18=IDC_SRV_STOP
CommandCount=18

[ACL:IDR_MAINFRAME]
Type=1
Class=CMainFrame
Command1=ID_FILE_NEW
Command2=ID_FILE_OPEN
Command3=ID_FILE_SAVE
Command4=ID_FILE_PRINT
Command5=ID_EDIT_UNDO
Command6=ID_EDIT_CUT
Command7=ID_EDIT_COPY
Command8=ID_EDIT_PASTE
Command9=ID_EDIT_UNDO
Command10=ID_EDIT_CUT
Command11=ID_EDIT_COPY
Command12=ID_EDIT_PASTE
Command13=ID_NEXT_PANE
Command14=ID_PREV_PANE
CommandCount=14

[DLG:IDD_VIRTUALCLIENT_FORM]
Type=1
Class=CVirtualClientView
ControlCount=3
Control1=IDC_LIST,SysListView32,1350631425
Control2=IDC_INPUT,edit,1352728644
Control3=IDC_BTN_SEND,button,1342242816

[TB:IDR_MAINFRAME]
Type=1
Class=?
Command1=ID_FILE_NEW
Command2=ID_FILE_OPEN
Command3=ID_FILE_SAVE
Command4=ID_EDIT_CUT
Command5=ID_EDIT_COPY
Command6=ID_EDIT_PASTE
Command7=ID_FILE_PRINT
Command8=ID_APP_ABOUT
CommandCount=8

