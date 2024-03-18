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
#include <Shlwapi.h> 
#pragma comment(lib, "Shlwapi.lib")

// ������WINAPI��
// define WINAPI __stdcall�Ƃ��Ē�`����Ă��āAWin32API���Ăяo���Ƃ��̋K��̂��ƁB
// �قƂ�ǂ�Windows�֐���WINAPI�Ƃ��Ē�`�����
// �����R�[�h��Unicode���g���I



int WINAPI WinMain(
	HINSTANCE hInstance, // �C���X�^���X�n���h���ƌĂ΂��^
	HINSTANCE hPrevInstance, // Win16�ł͂����͓���̃A�v���P�[�V�����̃C���X�^���X�ԂŃ��������L���Ă����B�����͏��NULL
	LPSTR lpCmdLine, // �R�}���h���C������󂯎�������� LPSTR�^��Windows�W���̕����^ LPSTR == char *
	int nCmdShow) {

	TCHAR tempPath[MAX_PATH];
	TCHAR fullPath[MAX_PATH];
	DWORD tmp_path_len = GetTempPathW(MAX_PATH, tempPath);

	PathCombine(fullPath, tempPath, L"hoge.txt");

	HANDLE hFile = CreateFileW(
		fullPath,
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


