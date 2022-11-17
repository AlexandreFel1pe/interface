#include <gtk/gtk.h>

int main( int   argc,
           char *argv[] )
{
    GtkWidget *window;
    GtkWidget *button;

    gtk_init (&argc, &argv);

    window = gtk_window_new (GTK_WINDOW_TOPLEVEL);

    gtk_container_set_border_width (GTK_CONTAINER (window), 10);

    gtk_window_set_title (GTK_WINDOW (window), "Interface");

    button = gtk_button_new_with_label ("Hello World");

    gtk_container_add (GTK_CONTAINER (window), button);

    gtk_widget_show (button);

    gtk_widget_show (window);

    gtk_main ();
}