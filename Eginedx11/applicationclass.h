#ifndef _APPLICATIONCLASS_H_
#define _APPLICATIONCLASS_H_

#include <windows.h>


// Macros de defini��o de propriedades de uma janela
const bool FULL_SCREEN = true;
const bool VSYNC_ENABLED = true;
const float SCREEN_DEPTH = 1000.0f;
const float SCREEN_NEAR = 0.3f;


// Classe que define a applica��o
// construtores e destrutor
// metodo de inicializa��o que recebe como parametro dois inteiros que definem a resolu��o da janela aberta
// e um identificader da janela no sistema
// metodo de finaliza��o
// metodo Frame que ser� esplicato posteriormente
// mmetodo privado Render() possivelmente ser� usado para fazer a renderiza��o.
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