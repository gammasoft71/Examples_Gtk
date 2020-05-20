#include <gtk/gtk.h>

int main(int argc, char* argv[]) {
  gtk_init(&argc, &argv);

  auto label1 = gtk_label_new("Hello, World!");
  GdkRGBA label1_color {.0, .5, .0, 1.0};
  gtk_widget_override_color(label1, GtkStateFlags::GTK_STATE_FLAG_NORMAL, &label1_color);
  PangoFontDescription *label1_font_description = pango_font_description_new();
  pango_font_description_set_family(label1_font_description, "Arial");
  pango_font_description_set_size(label1_font_description, 34 * PANGO_SCALE);
  pango_font_description_set_weight(label1_font_description, PANGO_WEIGHT_BOLD);
  pango_font_description_set_style(label1_font_description, PangoStyle::PANGO_STYLE_ITALIC);
  gtk_widget_override_font(label1, label1_font_description);
  
  auto fixed = gtk_fixed_new();
  gtk_fixed_put(GTK_FIXED(fixed), label1, 5, 100);
  
  auto window = gtk_window_new(GTK_WINDOW_TOPLEVEL);
  gtk_window_set_title(GTK_WINDOW(window), "Hello world (label)");
  gtk_window_resize(GTK_WINDOW(window), 300, 300);
  g_signal_connect (window, "destroy", G_CALLBACK(+[](GtkWidget* widget, gpointer data) {
    gtk_main_quit();
  }), nullptr);
  gtk_container_add(GTK_CONTAINER(window), fixed);
  gtk_widget_show_all(window);
  gtk_main();
}
