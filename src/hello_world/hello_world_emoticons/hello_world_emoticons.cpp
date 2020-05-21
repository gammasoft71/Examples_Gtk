#include <gtk/gtk.h>

int main(int argc, char* argv[]) {
  gtk_init(&argc, &argv);

  auto label1 = gtk_label_new("\U0001F44B, \U0001F30E\U00002757");

  PangoFontDescription *label1_font_description = pango_font_description_new();
  pango_font_description_set_family(label1_font_description, "Arial");
  pango_font_description_set_size(label1_font_description, 72 * PANGO_SCALE);
  gtk_widget_override_font(label1, label1_font_description);
  
  auto fixed = gtk_fixed_new();
  gtk_fixed_put(GTK_FIXED(fixed), label1, 0, 0);

  auto window = gtk_window_new(GtkWindowType::GTK_WINDOW_TOPLEVEL);
  gtk_window_set_title(GTK_WINDOW(window), "Hello world (emoticons)");
  gtk_window_set_default_size(GTK_WINDOW(window), gtk_widget_get_allocated_width(label1), gtk_widget_get_allocated_height(label1));
  g_signal_connect (window, "destroy", G_CALLBACK(gtk_main_quit), nullptr);
  gtk_container_add(GTK_CONTAINER(window), fixed);
  gtk_widget_show_all(window);
  gtk_main();
}
