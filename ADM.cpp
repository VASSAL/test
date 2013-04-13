// ADM.cpp: файл реализации
//

#include "stdafx.h"
#include "Transportniy_potok.h"
#include "ADM.h"
#include "afxdialogex.h"


// диалоговое окно CADM

IMPLEMENT_DYNAMIC(CADM, CDialogEx)

CADM::CADM(CWnd* pParent /*=NULL*/)
	: CDialogEx(CADM::IDD, pParent)
{

}

CADM::~CADM()
{
}

void CADM::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_RADIO3, CONTROL_1);
	DDX_Control(pDX, IDC_RADIO4, CONTROL_2);
	DDX_Control(pDX, IDC_RADIO5, CONTROL_3);
	DDX_Control(pDX, IDC_RADIO6, CONTROL_4);
	DDX_Control(pDX, IDC_RADIO7, CONTROL_6);
	DDX_Control(pDX, IDC_RADIO8, CONTROL_5);
	DDX_Control(pDX, IDC_RADIO9, CONTROL_7);
}


BEGIN_MESSAGE_MAP(CADM, CDialogEx)
	ON_BN_CLICKED(IDC_BUTTON1, &CADM::status_grenhall)
	ON_BN_CLICKED(IDC_BUTTON2, &CADM::Call_dispech)
	ON_NOTIFY(NM_CUSTOMDRAW, IDC_PROGRESS1, &CADM::Progress_zagalnoy_nagruzki)
	ON_LBN_SELCHANGE(IDC_LIST1, &CADM::Information_about)
END_MESSAGE_MAP()


// обработчики сообщений CADM


//CString CADM::Green_hall(HRESULT grn)
//{
//	return CString();
//}


void CADM::status_grenhall()
{
	// TODO: добавьте свой код обработчика уведомлений
}


void CADM::Call_dispech()
{
	// TODO: добавьте свой код обработчика уведомлений
}


void CADM::Progress_zagalnoy_nagruzki(NMHDR *pNMHDR, LRESULT *pResult)
{
	LPNMCUSTOMDRAW pNMCD = reinterpret_cast<LPNMCUSTOMDRAW>(pNMHDR);
	// TODO: добавьте свой код обработчика уведомлений
	*pResult = 0;
}


void CADM::Information_about()
{
	// TODO: добавьте свой код обработчика уведомлений
}
