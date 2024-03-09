/*

- Must user CreateFileW and WriteFile.
- 0 size file is not permited.
- Don't use ChatGPT.

reference
https://wisdom.sakura.ne.jp/system/winapi/win32/win3.html

*/

// total hours wasted here = 1...

#include <stdio.h>
#include <windows.h>

// ここのWINAPIは
// define WINAPI __stdcallとして定義されていて、Win32APIを呼び出すときの規約のこと。
// ほとんどのWindows関数はWINAPIとして定義される
// 文字コードはUnicodeを使え！


int WINAPI WinMain(
	HINSTANCE hInstance, // インスタンスハンドルと呼ばれる型
	HINSTANCE hPrevInstance, // Win16ではここは同一のアプリケーションのインスタンス間でメモリ共有していた。ここは常にNULL
	LPSTR lpCmdLine, // コマンドラインから受け取った引数 LPSTR型はWindows標準の文字型
	int nCmdShow) {
	int on_button;

	on_button =	MessageBox(NULL, TEXT("Fuck you C language!"),
					 TEXT("Finally, I've done this sh*t task."),
					 MB_YESNO | MB_ICONQUESTION);

	if (on_button == IDYES)
		MessageBox(NULL, TEXT("Yes, Yes!!"), TEXT("Message for you"), MB_OK);

	else MessageBox(NULL, TEXT("No, No, No!!!"), TEXT("Message for you"), MB_OK);
	
	return 0;
}


/*
int WINAPI WinMain(HINSTANCE hinst, HINSTANCE hPrevInst, LPSTR szStr, INT iCmdShow)
{
	MessageBox(NULL, _T(""), _T(""), MB_OK);

	return 0;
}

*/