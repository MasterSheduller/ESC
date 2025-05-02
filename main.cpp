#include <FL/Fl.H>
#include <FL/Fl_Window.H>
#include <FL/Fl_Button.H>

void button_callback(Fl_Widget* widget, void* data) {
    Fl_Button* button = (Fl_Button*)widget;
    button->label("Clicked!");
}

int main() {
    Fl_Window* window = new Fl_Window(300, 200, "FLTK in Codespace");
    Fl_Button* button = new Fl_Button(100, 80, 100, 40, "Click Me");
    button->callback(button_callback);
    window->end();
    window->show();
    return Fl::run();
}