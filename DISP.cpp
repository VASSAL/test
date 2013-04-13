// DISP.cpp: файл реализации
//

#include "stdafx.h"
#include "Transportniy_potok.h"
#include "DISP.h"
#include "afxdialogex.h"


// диалоговое окно CDISP

IMPLEMENT_DYNAMIC(CDISP, CDialogEx)

CDISP::CDISP(CWnd* pParent /*=NULL*/)
	: CDialogEx(CDISP::IDD, pParent)
	, FREQUENCY(_T(""))
	, CONTINUANCE(_T(""))
	, INSTALL(_T(""))
{

}

CDISP::~CDISP()
{
}

void CDISP::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT1, FREQUENCY);
	DDX_Text(pDX, IDC_EDIT2, CONTINUANCE);
	DDX_Text(pDX, IDC_EDIT3, INSTALL);
	DDX_Control(pDX, IDC_RADIO3, S1);
	DDX_Control(pDX, IDC_RADIO4, S2);
	DDX_Control(pDX, IDC_RADIO5, S3);
	DDX_Control(pDX, IDC_RADIO6, S4);
	DDX_Control(pDX, IDC_RADIO7, S5);
	DDX_Control(pDX, IDC_RADIO8, S6);
	DDX_Control(pDX, IDC_RADIO9, S7);
}


BEGIN_MESSAGE_MAP(CDISP, CDialogEx)
	ON_BN_CLICKED(IDC_BUTTON1, &CDISP::CALL_REMONT)
	ON_BN_CLICKED(IDC_BUTTON3, &CDISP::GREEN_HALL)
	ON_BN_CLICKED(IDC_BUTTON2, &CDISP::NAGRUZKA_ERROR)
	ON_BN_CLICKED(IDC_BUTTON4, &CDISP::CALL_ADMINISTRATOR)
	ON_BN_CLICKED(IDC_BUTTON5, &CDISP::THIS_IS_OK)
END_MESSAGE_MAP()


// обработчики сообщений CDISP


void CDISP::CALL_REMONT()
{
	// TODO: добавьте свой код обработчика уведомлений
}


void CDISP::GREEN_HALL()
{
	// TODO: добавьте свой код обработчика уведомлений
}


void CDISP::NAGRUZKA_ERROR()
{
	// TODO: добавьте свой код обработчика уведомлений
}


void CDISP::CALL_ADMINISTRATOR()
{
	// TODO: добавьте свой код обработчика уведомлений
}


void CDISP::THIS_IS_OK()
{
	// TODO: добавьте свой код обработчика уведомлений
}
