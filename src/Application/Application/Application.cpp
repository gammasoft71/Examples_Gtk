#include <gtk/gtk.h>

int main(int argc, char* argv[]) {
  gtk_init(&argc, &argv);

  auto window = gtk_window_new(GTK_WINDOW_TOPLEVEL);
  gtk_window_set_title(GTK_WINDOW(window), "First application");
  gtk_window_resize(GTK_WINDOW(window), 300, 300);
  gtk_widget_show(window);
  g_signal_connect (window, "destroy", G_CALLBACK(+[](GtkWidget* widget, gpointer data) {
    gtk_main_quit();
  }), nullptr);
  gtk_main();
}
