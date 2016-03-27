#pragma once
#include <cstdlib>
#include <iostream>

namespace ASCII {

	struct Coordinate {
		int x;
		int y;
	};

	enum Orientation {
		UP = 0, RIGHT, DOWN, LEFT
	};

	class Graphic {
	private:
		int width;
		int height;

		char** charBuffer;

		Coordinate position;
		Orientation rotation;

	public:
		Graphic(const int width, const int height);
		Graphic(const int width, const int height, const char** charBuffer);

		~Graphic();

		void move(const int dx, const int dy);
		void moveTo(const int x, const int y);

		void rotate(const int rotation);  //will rotate rotation * (90 degrees)
		void rotateTo(const int rotation);//will rotate to rotation * (90 degrees)

		void clear();
<<<<<<< HEAD
		void draw(const Graphic toDraw);
=======
		void draw(const Graphic& toDraw);
		void drawWithAlpha(const Graphic& toDraw);
>>>>>>> ASCII-Graphics
		void flush() const;
	};

	class JumpingGraphic : Graphic {
	public:
		JumpingGraphic(const int& width, const int& height);
		JumpingGraphic(const int& width, const int& height, vector<vector<char>> initCharBuffer);

		void jump(const int& dx, const int& dy, Graphic& canvas);
		void jumpTo(const int& x, const int& y, Graphic& canvas);
	};
}

