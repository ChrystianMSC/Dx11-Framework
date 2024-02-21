#ifndef _INPUTCLASS_H_
#define _INPUTCLASS_H_

// Classe InputClass, classe feita com o intuito de lidar com Inputs do teclado pelo o usu�rio 
// Possui um construr, um construtor que faz a copia de uma instancia da imputclass, e um destrutor,
// metodo de inicializa��o
// metodos que lidam com os inputs de teclas de um teclado
// e um metodo de verifica��o se um atecla est� sendo apertada 
// um atributo privado que � um array de 256 posi��es para acompanhar o estado de cada tecla 
class InputClass
{
public:
	InputClass();
	InputClass(const InputClass&);
	~InputClass();

	void Initialize();

	void KeyDown(unsigned int);
	void KeyUp(unsigned int);

	bool IsKeyDown(unsigned int);

private:
	bool m_keys[256];
};

#endif