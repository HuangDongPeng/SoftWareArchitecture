
// SoftWareArchitecture.h : PROJECT_NAME Ӧ�ó������ͷ�ļ�
//

#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"		// ������


// CSoftWareArchitectureApp: 
// �йش����ʵ�֣������ SoftWareArchitecture.cpp
//

class CSoftWareArchitectureApp : public CWinApp
{
public:
	CSoftWareArchitectureApp();

// ��д
public:
	virtual BOOL InitInstance();

// ʵ��

	DECLARE_MESSAGE_MAP()
};

extern CSoftWareArchitectureApp theApp;
