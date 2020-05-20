#include <gtk/gtk.h>

int main(int argc, char* argv[]) {
  auto application = gtk_application_new("org.gammasoft71.application", GApplicationFlags::G_APPLICATION_FLAGS_NONE);

  g_signal_connect(application, "activate", G_CALLBACK(+[](GtkApplication* application) {
    auto window = gtk_window_new(GtkWindowType::GTK_WINDOW_TOPLEVEL);
    gtk_application_add_window(application, GTK_WINDOW(window));
    gtk_widget_show_all(window);
  }), nullptr);

  auto result = g_application_run(G_APPLICATION(application), argc, argv);
  g_object_unref(application);
  return result;
}
