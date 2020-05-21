#include <gtk/gtk.h>

int main(int argc, char* argv[]) {
  gtk_init(&argc, &argv);

  auto button1 = gtk_button_new_with_label("Button 1");

  auto button2 = gtk_button_new_with_label("Button 2");
  gtk_widget_set_size_request(button2, 200, 75);

  auto label1 = gtk_label_new("Button 1 clicked 0 times");

  auto label2 = gtk_label_new("Button 2 clicked 0 times");

  auto fixed = gtk_fixed_new();
  gtk_fixed_put(GTK_FIXED(fixed), button1, 50, 50);
  gtk_fixed_put(GTK_FIXED(fixed), button2, 50, 100);
  gtk_fixed_put(GTK_FIXED(fixed), label1, 50, 200);
  gtk_fixed_put(GTK_FIXED(fixed), label2, 50, 230);

  auto window = gtk_window_new(GtkWindowType::GTK_WINDOW_TOPLEVEL);
  gtk_window_set_title(GTK_WINDOW(window), "Button example");
  gtk_window_set_default_size(GTK_WINDOW(window), 300, 300);
  gtk_container_add(GTK_CONTAINER(window), fixed);
  gtk_widget_show_all(window);

  g_signal_connect (button1, "clicked", G_CALLBACK(+[](GtkWidget* widget, gpointer data) {
    static auto button_clicked = 0;
    static auto label_string = g_string_new("");
    g_string_printf(label_string, "Button 1 clicked %d times", ++button_clicked);
    gtk_label_set_text(GTK_LABEL(data), label_string->str);
  }), label1);

  g_signal_connect (button2, "clicked", G_CALLBACK(+[](GtkWidget* widget, gpointer data) {
    static auto button_clicked = 0;
    static auto label_string = g_string_new("");
    g_string_printf(label_string, "Button 1 clicked %d times", ++button_clicked);
    gtk_label_set_text(GTK_LABEL(data), label_string->str);
  }), label2);

  g_signal_connect (window, "destroy", G_CALLBACK(gtk_main_quit), nullptr);

  gtk_main();
}
