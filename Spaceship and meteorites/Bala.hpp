#include "Conf.hpp"

class Bala {
private:
	int x, y;
public:
	Bala(int _x,int _y) {
		this->x = _x;
		this->y = _y;
	}
	void setPosicion(int _x, int _y) {
		x = _x;
		y = _y;
	}
	void mover() {
		Console::SetCursorPosition(x, y); cout << " ";
		if (y > 4) {
			y--;
			Console::SetCursorPosition(x, y); cout << "|";
		}
	
	}
};
