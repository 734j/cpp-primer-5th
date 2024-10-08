#ifndef SCREEN_H
#define SCREEN_H

#include <string>
#include <vector>
#include <iostream>

class Screen;

class Window_mgr {
public:
	using screen_index = std::vector<Screen>::size_type; // size type
	void clear(screen_index); // clear screen
	Window_mgr(); // 
	
private:
	std::vector<Screen> screens; // private data member
};

class Screen {
	friend void Window_mgr::clear(screen_index); // Tell screen class we have a friend function from Window_mgr
	
public:
	using pos = std::string::size_type; // pos type
	using content_type = char;	// content type
	Screen() = default;
	Screen(pos ht, pos wd): height(ht), width(wd), contents(ht * wd, ' ') {} 
	Screen(pos ht, pos wd, content_type c): height(ht), width(wd), contents(ht * wd, c) {}
	const content_type &get() const { return contents[cursor]; }
	const content_type &get(pos row, pos col) const;
	Screen &set(content_type c);
	Screen &set(pos row, pos col, content_type c);	
	Screen &move(pos row, pos col);	
	const Screen &display(std::ostream &os) const;
	Screen &display(std::ostream &os);
	
private:
	void do_display(std::ostream &os) const;	
	pos cursor = 0;
	pos height = 0;
	pos width = 0;
	std::string contents;
};

inline
const Screen::content_type &Screen::get(pos row, pos col) const {
	return contents[row * width + col];
}

inline
Screen &Screen::set(content_type c) {
	contents[cursor] = c;
	return *this;
}

inline
Screen &Screen::set(pos row, pos col, content_type c) {
	contents[row * width + col] = c;
	return *this;
}

inline
Screen &Screen::move(pos row, pos col) {
	cursor = row * width + col;
	return *this;
}

inline
const Screen &Screen::display(std::ostream &os) const {
	do_display(os);
	return *this;
}

inline
Screen &Screen::display(std::ostream &os) {
	do_display(os);
	return *this;
}

inline
void Screen::do_display(std::ostream &os) const {
	for (pos i = 0; i != contents.size(); ++i) {
		os << contents[i];
		if ((i + 1) % width == 0 && i + 1 != contents.size())
			os << "\n";
	}
}

Window_mgr::Window_mgr() : screens{Screen(24, 80)} {}

void Window_mgr::clear(screen_index i) {
	Screen &s = screens[i];
	s.contents = std::string(s.height * s.width, ' ');
}

#endif
