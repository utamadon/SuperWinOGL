
// WinOGL.h : WinOGL アプリケーションのメイン ヘッダー ファイル
//
#pragma once

#ifndef __AFXWIN_H__
	#error "PCH に対してこのファイルをインクルードする前に 'pch.h' をインクルードしてください"
#endif

#include "resource.h"       // メイン シンボル


// CWinOGLApp:
// このクラスの実装については、WinOGL.cpp を参照してください
//

class CWinOGLApp : public CWinApp
{
public:
	CWinOGLApp() noexcept;


// オーバーライド
public:
	virtual BOOL InitInstance();

// 実装
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CWinOGLApp theApp;
