#include <gtk/gtk.h>

int main(int argc, char* argv[]) {
  gtk_init(&argc, &argv);

  auto button1 = gtk_button_new_with_label("Click me");
  
  auto fixed = gtk_fixed_new();
  gtk_fixed_put(GTK_FIXED(fixed), button1, 10, 10);
  
  auto window = gtk_window_new(GtkWindowType::GTK_WINDOW_TOPLEVEL);
  gtk_window_set_title(GTK_WINDOW(window), "Hello world (message_dialog)");
  gtk_window_set_default_size(GTK_WINDOW(window), 300, 300);
  gtk_container_add(GTK_CONTAINER(window), fixed);
  gtk_widget_show_all(window);

  g_signal_connect (button1, "clicked", G_CALLBACK(+[](GtkWidget* widget, gpointer data) {
      auto dialog = gtk_message_dialog_new(GTK_WINDOW(data), GtkDialogFlags::GTK_DIALOG_MODAL, GtkMessageType::GTK_MESSAGE_INFO, GtkButtonsType::GTK_BUTTONS_OK, "Hello, World!");
      gtk_dialog_run(GTK_DIALOG(dialog));
      gtk_widget_destroy(dialog);
  }), window);
  g_signal_connect (window, "destroy", G_CALLBACK(gtk_main_quit), nullptr);

  gtk_main();
}
