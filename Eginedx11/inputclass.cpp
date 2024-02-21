#include "inputclass.h"


InputClass::InputClass()
{
}


InputClass::InputClass(const InputClass& other)
{
}


InputClass::~InputClass()
{
}


// Função iniciadora da classe inputClass, faz a inicialização do estado das teclas para falso,
// sendo falso não apertada e verdadeiro apertada
void InputClass::Initialize()
{
	int i;

	// Initialize all the keys to being released and not pressed.
	for(i=0; i<256; i++)
	{
		m_keys[i] = false;
	}

	return;
}


void InputClass::KeyDown(unsigned int input)
{
	m_keys[input] = true;
	return;
}


void InputClass::KeyUp(unsigned int input)
{
	m_keys[input] = false;
	return;
}


bool InputClass::IsKeyDown(unsigned int key)
{
	return m_keys[key];
}