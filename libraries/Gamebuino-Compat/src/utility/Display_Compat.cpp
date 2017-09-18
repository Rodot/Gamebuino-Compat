#include "Display_Compat.h"

namespace Gamebuino_Compat {

Display::Display() : Gamebuino_Meta::Image(80, 64, ColorMode::rgb565) {
	persistence = false;
}

void Display::clear() {
	Gamebuino_Meta::Image::clear(Color::white);
}

void Display::fillScreen() {
	fill();
}

void Display::fillScreen(Color color) {
	fill(color);
}

void Display::fillScreen(ColorIndex color) {
	fill(color);
}

}; // namespace Gamebuino_Compat
