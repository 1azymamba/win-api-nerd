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
	LPSTR lpCmdLine, // コマンドラインから受け取った引数 LPSTR型はWindows標準の文字型 LPSTR == char *
	int nCmdShow) {


	HANDLE hFile = CreateFileW(
		L"hoge.txt", 
		GENERIC_READ | GENERIC_WRITE,
		FILE_SHARE_WRITE, 
		NULL, 
		CREATE_ALWAYS, 
		FILE_ATTRIBUTE_NORMAL,
		NULL);

	if (hFile == INVALID_HANDLE_VALUE) {
		MessageBox(NULL, TEXT("File creation was unsuccessed..."), TEXT("CreateFileW"), MB_OK);
		return 1;
	}

	MessageBox(NULL, TEXT("File creation was successed!"), TEXT("CreateFileW"), MB_OK);


	LPSTR buf = "mamba out...";

	BOOL writing_result = WriteFile(
		hFile,
		buf,
		lstrlen(buf),
		NULL,
		NULL

	);

	if (writing_result == 0){
		MessageBox(NULL, TEXT("File writing was unsuccessed..."), TEXT("WriteFile"), MB_OK);
		return 1;
	}

	MessageBox(NULL, TEXT("File writing was successed!"), TEXT("WriteFile"), MB_OK);
	CloseHandle(hFile);

}


