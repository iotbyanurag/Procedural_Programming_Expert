#include <gtkmm.h>

class HelloWorld : public Gtk::Window
{
public:
  HelloWorld();

protected:
  Gtk::Button m_button;
};

HelloWorld::HelloWorld()
: m_button("Hello World")
{
  set_border_width(10);
  m_button.signal_clicked().connect(sigc::mem_fun(*this, &HelloWorld::hide));
  add(m_button);
  m_button.show();
}

int main(int argc, char *argv[])
{
  auto app = Gtk::Application::create(argc, argv, "org.gtkmm.example");

  HelloWorld helloworld;

  return app->run(helloworld);
}