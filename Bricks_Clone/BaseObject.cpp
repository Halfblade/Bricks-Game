#include "stdafx.h"
#include "BaseObject.h"

void BaseObject::Draw()
{
	Console::SetCursorPosition(x_position, y_position);
	Console::ForegroundColor(color);
	std::cout << visage;
}