#include "signals.h"

void destroy_window(void)
{
    puts("Window destroy!");
    gtk_main_quit();
}

gboolean on_draw(GtkWidget *window, cairo_t *cr, gpointer data)
{
    draw_graph(window, cr, data);
    draw_sin(window, cr, data);
    return TRUE;
}

void change_value(GtkWidget *window, gpointer data)
{
    puts("Change");
    gtk_widget_queue_draw(data);
}