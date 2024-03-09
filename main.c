/*

- Must user CreateFileW and WriteFile.
- 0 size file is not permited.
- Don't use ChatGPT.

reference
https://wisdom.sakura.ne.jp/system/winapi/win32/win3.html

*/

#include <stdio.h>
#include <windows.h>

// ここのWINAPIは
// define WINAPI __stdcallとして定義されていて、Win32APIを呼び出すときの規約のこと。
// ほとんどのWindows関数はWINAPIとして定義される

int WINAPI WinMain(
	HINSTANCE hInstance, // インスタンスハンドルと呼ばれる型
	HINSTANCE hPrevInstance, // Win16ではここは同一のアプリケーションのインスタンス間でメモリ共有していた。ここは常にNULL
	LPSTR lpCmdLine, // コマンドラインから受け取った引数 LPSTR型はWindows標準の文字型
	int nCmdShow) {
	return 0;
}


/*
int WINAPI WinMain(HINSTANCE hinst, HINSTANCE hPrevInst, LPSTR szStr, INT iCmdShow)
{
	MessageBox(NULL, _T(""), _T(""), MB_OK);

	return 0;
}

*/