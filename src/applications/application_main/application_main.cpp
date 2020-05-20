#include <gtk/gtk.h>

int main(int argc, char* argv[]) {
  gtk_init(&argc, &argv);

  auto window = gtk_window_new(GtkWindowType::GTK_WINDOW_TOPLEVEL);
  gtk_widget_show(window);

  g_signal_connect (window, "destroy", G_CALLBACK(gtk_main_quit), nullptr);

  gtk_main();
}
