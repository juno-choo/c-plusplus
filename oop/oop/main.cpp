#include <iostream>
#include <vector>
#include "Widget.cpp"

void showWidgetInfo(const Widget& w) {
    // This function could display some info about the widget
    // For this example, we'll just print a placeholder message
    w.draw();
}

int main() {
    std::vector<Widget*> widgets;
    
    widgets.push_back(new TextBox());
    widgets.push_back(new CheckBox());

    for (const auto& widget : widgets) {
        showWidgetInfo(*widget);
    }

    for (const auto& widget : widgets) {
        delete widget;
    }

    return 0;
}
