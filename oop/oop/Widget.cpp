#include <string>
#include <iostream>

class Widget {
private:
    bool enabled;
public:
    virtual ~Widget() {
        std::cout << "Widget destroyed" << std::endl;
    }
    void enable();
    void disable();
    virtual void draw() const {
        std::cout << "Drawing Widget: " << (enabled ? "Enabled" : "Disabled") << std::endl;
    }
};

class TextBox : public Widget {
private:
    std::string text;
    
public:
    ~TextBox() {
        std::cout << "TextBox destroyed" << std::endl;
    }
    void setText(const std::string& t);
    std::string getText() const;
    // Redefine draw to include text
    void draw() const override {
        std::cout << "TextBox content: " << text << std::endl;
    }
};

class CheckBox : public Widget {
private:
    bool checked;
public:
    ~CheckBox() {
        std::cout << "CheckBox destroyed" << std::endl;
    }
    void setChecked(bool c);
    bool isChecked() const;
    void draw() const override {
        std::cout << "CheckBox: " << (checked ? "Checked" : "Unchecked") << std::endl;
    }
};

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