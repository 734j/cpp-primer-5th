#include <iostream>

/*
 *
 * 7.29
 *
 *
 */

class Screen {
public:
	typedef std::string::size_type Pos;
	Screen() = default;
	Screen(Pos ht, Pos wd): Height(ht), Width(wd), Contents(ht * wd, ' ') { }
	Screen(Pos ht, Pos wd, char c): Height(ht), Width(wd), Contents(ht * wd, c) { }
	char get() const { return Contents[Cursor]; }
	inline char get(Pos ht, Pos wd) const;
	Screen move(Pos r, Pos c);
	inline Screen set(char c);
	inline Screen set(Pos r, Pos col, char ch);
	Screen display(std::ostream &os) { do_display(os); return *this; }
	const Screen display(std::ostream &os) const { do_display(os); return *this; }
	void printheight(Pos Height);
private:
	void do_display(std::ostream &os) const {os << Contents;}
	Pos Cursor = 0;
	Pos Height = 0;
	Pos Width = 0;
	std::string Contents;
};

inline Screen Screen::set(char c)
{
	Contents[Cursor] = c; // set the new value at the current cursor location
	return *this;
	// return this object as an lvalue
}

inline Screen Screen::set(Pos r, Pos col, char ch)
{
	Contents[r*Width + col] = ch; // set specified location to given value
	return *this;
	// return this object as an lvalue
}

inline Screen Screen::move(Pos r, Pos c)
{
	Pos row = r * Width; // compute the row location
	Cursor = row + c;
	// move cursor to the column within that row
	return *this;
	// return this object as an lvalue
}

char Screen::get(Pos r, Pos c) const // declared as inline in the class
{
	Pos row = r * Width;
	// compute row location
	return Contents[row + c]; // return character at the given column
}

void printheight(Screen::Pos Height) {
	std::cout << Height;
}

int main () {

	Screen myScreen(5, 5, 'X');
	myScreen.move(4,0).set('#').display(std::cout);
	std::cout << "\n";
	myScreen.display(std::cout);
	std::cout << "\n";
	return 0;
}
