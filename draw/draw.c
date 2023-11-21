#include "draw.h"

void draw_graph(GtkWidget *window, cairo_t *cr, gpointer data)
{
    cairo_move_to(cr, 325, 0);
    cairo_line_to(cr, 325, 700);
    cairo_stroke(cr);
    cairo_move_to(cr, 0, 200);
    cairo_line_to(cr, 700, 200);
    cairo_stroke(cr);
}

void draw_sin(GtkWidget* window, cairo_t* cr, gpointer data)
{

    BUTTONS *buttons = data;

    cairo_set_source_rgb(cr, 0, 0.4, 0.5);

    int frequency = gtk_spin_button_get_value(GTK_SPIN_BUTTON(buttons->frequency));
    int amplitude = gtk_spin_button_get_value(GTK_SPIN_BUTTON(buttons->amplitude));
    int phase = gtk_spin_button_get_value(GTK_SPIN_BUTTON(buttons->phase));

    for (float x = -8.0; x < 10.0; x += 0.001)
    {
        cairo_move_to(cr, 100 * x + 20, amplitude * sin(2 * PI * frequency * x + (phase * TO_RAD)) + 190);
        cairo_line_to(cr, 100 * x + 21, amplitude * sin(2 * PI * frequency * x + (phase * TO_RAD)) + 191);
    }

    cairo_stroke(cr);
}
