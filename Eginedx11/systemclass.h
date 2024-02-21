#ifndef _SYSTEMCLASS_H_
#define _SYSTEMCLASS_H_

#define WIN32_LEAN_AND_MEAN

#include <windows.h>

#include "inputclass.h"
#include "applicationclass.h"

// Classe SystemClass, classe responsavel por lidar com o sistema operacional no framework
// construtores e um destrutor
// metodo de inicialização, loop de execução e metodo de finalização do framework
// LRESULT CALLBACK Geralmente, essa função é usada como o procedimento de janela principal em um programa Windows. 
// Ela recebe mensagens do sistema operacional e as encaminha para a função de
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
	// Este é um ponteiro para uma string larga constante, que é usada para armazenar o nome da aplicação. 
	// O tipo LPCWSTR é um ponteiro para uma sequência de caracteres wide (Unicode) constante. Geralmente, 
	// esse tipo de dado é usado para strings constantes no Windows.

	// HINSTANCE m_hinstance;: Este é um identificador de instância do aplicativo. 
	// O tipo HINSTANCE é definido como um ponteiro para uma estrutura que contém informações sobre a instância do aplicativo no Windows. 
	// Esse identificador é usado para identificar o programa quando se comunica com o sistema operacional Windows.
	
	// HWND m_hwnd;: Este é um identificador de janela.
	// O tipo HWND é definido como um ponteiro para uma estrutura que representa uma janela no Windows. 
	// Esse identificador é usado para se referir à janela e manipulá-la, como enviar mensagens de janela ou obter informações sobre ela.
	LPCWSTR m_applicationName;
	HINSTANCE m_hinstance;
	HWND m_hwnd;

	InputClass* m_Input;
	ApplicationClass* m_Application;
};

// Essa função é registrada como o procedimento de janela para uma determinada 
// janela e é responsável por processar todas as mensagens que a janela recebe.
// Ela recebe como argumentos o identificador da janela, o tipo de mensagem, e os parâmetros adicionais associados com a mensagem.
static LRESULT CALLBACK WndProc(HWND, UINT, WPARAM, LPARAM);


static SystemClass* ApplicationHandle = 0;


#endif