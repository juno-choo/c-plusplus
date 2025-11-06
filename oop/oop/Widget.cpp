#include <string>
#include <iostream>

class Widget {
private:
    bool enabled;
public:
    // Widget(bool enabled);
    void enable();
    void disable();
    // ~Widget();
};

class TextBox : public Widget {
private:
    std::string text;
    
public:
    // TextBox(bool enabled) : Widget(enabled), text("") {
    //     std::cout << "TextBox created\n";
    // }
    // explicit TextBox(const std::string& t) : Widget(true), text(t) {}
    void setText(const std::string& t);
    std::string getText() const;
    // ~TextBox();
};

// Widget::Widget(bool enabled) : enabled(enabled) {
//     std::cout << "Widget created\n";
// }

// Widget::~Widget() {
//     std::cout << "Widget destroyed\n";
// }

void Widget::enable() {
    enabled = true;
}

void Widget::disable() {
    enabled = false;
}

// TextBox::TextBox(bool enabled) : Widget(enabled), text("") {
//     std::cout << "TextBox created\n";
// }

// TextBox::TextBox(const std::string& t) : Widget(true), text(t) {
//     std::cout << "TextBox created with text\n";
// }

// TextBox::~TextBox() {
//     std::cout << "TextBox destroyed\n";
// }

void TextBox::setText(const std::string& t) {
    text = t;
}

std::string TextBox::getText() const {
    return text;
}