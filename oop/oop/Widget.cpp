#include <string>
#include <iostream>

class Widget {
private:
    bool enabled;
public:
    Widget();
    void enable();
    void disable();
    ~Widget();
};

class TextBox : public Widget {
private:
    std::string text;
public:
    TextBox();
    void setText(const std::string& t);
    std::string getText() const;
    ~TextBox();
};

Widget::Widget() : enabled(false) {
    std::cout << "Widget created\n";
}

Widget::~Widget() {
    std::cout << "Widget destroyed\n";
}

void Widget::enable() {
    enabled = true;
}

void Widget::disable() {
    enabled = false;
}

TextBox::TextBox() : text("") {
    std::cout << "TextBox created\n";
}

TextBox::~TextBox() {
    std::cout << "TextBox destroyed\n";
}

void TextBox::setText(const std::string& t) {
    text = t;
}

std::string TextBox::getText() const {
    return text;
}