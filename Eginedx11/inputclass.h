#ifndef _INPUTCLASS_H_
#define _INPUTCLASS_H_

// Classe InputClass, classe feita com o intuito de lidar com Inputs do teclado pelo o usuário 
// Possui um construr, um construtor que faz a copia de uma instancia da imputclass, e um destrutor,
// metodo de inicialização
// metodos que lidam com os inputs de teclas de um teclado
// e um metodo de verificação se um atecla está sendo apertada 
// um atributo privado que é um array de 256 posições para acompanhar o estado de cada tecla 
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