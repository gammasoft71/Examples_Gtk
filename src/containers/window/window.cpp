#include <gtk/gtk.h>

int main(int argc, char* argv[]) {
  gtk_init(&argc, &argv);

  auto button1 = gtk_button_new();
  gtk_button_set_label(GTK_BUTTON(button1), "Close");

  auto fixed = gtk_fixed_new();
  gtk_fixed_put(GTK_FIXED(fixed), button1, 10, 10);

  auto window1 = gtk_window_new(GtkWindowType::GTK_WINDOW_TOPLEVEL);
  gtk_window_set_title(GTK_WINDOW(window1), "window1");
  gtk_window_set_default_size(GTK_WINDOW(window1), 640, 480);
  gtk_window_move(GTK_WINDOW(window1), 300, 200);

  g_signal_connect (button1, "pressed", G_CALLBACK(+[](GtkWidget* widget, gpointer data) {
    gtk_window_close(GTK_WINDOW(data));
  }), window1);
  
  g_signal_connect (window1, "delete-event", G_CALLBACK(+[](GtkWidget* widget, GdkEvent* event, gpointer data)->bool {
    auto dialog = gtk_message_dialog_new(GTK_WINDOW(data), GtkDialogFlags::GTK_DIALOG_MODAL, GtkMessageType::GTK_MESSAGE_QUESTION, GtkButtonsType::GTK_BUTTONS_YES_NO, "Are you sure you want exit? ?");
    auto result = gtk_dialog_run(GTK_DIALOG(dialog));
    gtk_widget_destroy(dialog);
    return result != GtkResponseType::GTK_RESPONSE_YES;
  }), window1);
  
  g_signal_connect (window1, "destroy", G_CALLBACK(+[](GtkWidget* widget, gpointer data) {
    gtk_main_quit();
  }), nullptr);

  gtk_container_add(GTK_CONTAINER(window1), fixed);
  gtk_widget_show_all(window1);
  gtk_main();
}
