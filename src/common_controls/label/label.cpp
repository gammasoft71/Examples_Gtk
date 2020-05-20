#include <gtk/gtk.h>

int main(int argc, char* argv[]) {
  gtk_init(&argc, &argv);

  auto label1 = gtk_label_new("label1");
  
  auto fixed = gtk_fixed_new();
  gtk_fixed_put(GTK_FIXED(fixed), label1, 10, 10);
  
  auto window = gtk_window_new(GtkWindowType::GTK_WINDOW_TOPLEVEL);
  gtk_window_set_title(GTK_WINDOW(window), "Label example");
  gtk_window_set_default_size(GTK_WINDOW(window), 300, 300);
  gtk_container_add(GTK_CONTAINER(window), fixed);
  gtk_widget_show_all(window);

  g_signal_connect (window, "destroy", G_CALLBACK(gtk_main_quit), nullptr);

  gtk_main();
}
