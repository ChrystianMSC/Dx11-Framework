#ifndef _SYSTEMCLASS_H_
#define _SYSTEMCLASS_H_

#define WIN32_LEAN_AND_MEAN

#include <windows.h>

#include "inputclass.h"
#include "applicationclass.h"

// Classe SystemClass, classe responsavel por lidar com o sistema operacional no framework
// construtores e um destrutor
// metodo de inicializa��o, loop de execu��o e metodo de finaliza��o do framework
// LRESULT CALLBACK Geralmente, essa fun��o � usada como o procedimento de janela principal em um programa Windows. 
// Ela recebe mensagens do sistema operacional e as encaminha para a fun��o de
// tratamento apropriada dentro do programa
class SystemClass
{
public:
	SystemClass();
	SystemClass(const SystemClass&);
	~SystemClass();

	bool Initialize();
	void Shutdown();
	void Run();

	LRESULT CALLBACK MessageHandler(HWND, UINT, WPARAM, LPARAM);

private:
	bool Frame();
	void InitializeWindows(int&, int&);
	void ShutdownWindows();

private:
	// LPCWSTR m_applicationName;:
	// Este � um ponteiro para uma string larga constante, que � usada para armazenar o nome da aplica��o. 
	// O tipo LPCWSTR � um ponteiro para uma sequ�ncia de caracteres wide (Unicode) constante. Geralmente, 
	// esse tipo de dado � usado para strings constantes no Windows.

	// HINSTANCE m_hinstance;: Este � um identificador de inst�ncia do aplicativo. 
	// O tipo HINSTANCE � definido como um ponteiro para uma estrutura que cont�m informa��es sobre a inst�ncia do aplicativo no Windows. 
	// Esse identificador � usado para identificar o programa quando se comunica com o sistema operacional Windows.
	
	// HWND m_hwnd;: Este � um identificador de janela.
	// O tipo HWND � definido como um ponteiro para uma estrutura que representa uma janela no Windows. 
	// Esse identificador � usado para se referir � janela e manipul�-la, como enviar mensagens de janela ou obter informa��es sobre ela.
	LPCWSTR m_applicationName;
	HINSTANCE m_hinstance;
	HWND m_hwnd;

	InputClass* m_Input;
	ApplicationClass* m_Application;
};

// Essa fun��o � registrada como o procedimento de janela para uma determinada 
// janela e � respons�vel por processar todas as mensagens que a janela recebe.
// Ela recebe como argumentos o identificador da janela, o tipo de mensagem, e os par�metros adicionais associados com a mensagem.
static LRESULT CALLBACK WndProc(HWND, UINT, WPARAM, LPARAM);


static SystemClass* ApplicationHandle = 0;


#endif