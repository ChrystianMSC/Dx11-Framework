#ifndef _APPLICATIONCLASS_H_
#define _APPLICATIONCLASS_H_

#include <windows.h>


// Macros de definição de propriedades de uma janela
const bool FULL_SCREEN = true;
const bool VSYNC_ENABLED = true;
const float SCREEN_DEPTH = 1000.0f;
const float SCREEN_NEAR = 0.3f;


// Classe que define a applicação
// construtores e destrutor
// metodo de inicialização que recebe como parametro dois inteiros que definem a resolução da janela aberta
// e um identificader da janela no sistema
// metodo de finalização
// metodo Frame que será esplicato posteriormente
// mmetodo privado Render() possivelmente será usado para fazer a renderização.
class ApplicationClass
{
public:
	ApplicationClass();
	ApplicationClass(const ApplicationClass&);
	~ApplicationClass();

	bool Initialize(int, int, HWND);
	void Shutdown();
	bool Frame();

private:
	bool Render();

private:

};

#endif