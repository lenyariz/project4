#include "widgets.h"

void set_params_window(GtkWidget *window)
{
    gtk_window_set_default_size(GTK_WINDOW(window), 700, 600);
}

void create_widgets(GtkWidget *window, GtkWidget *fixed, GtkWidget *DrawArea, BUTTONS buttons, LABELS labels)
{
    gtk_fixed_put(GTK_FIXED(fixed), buttons.frequency, 20, 40);
    gtk_fixed_put(GTK_FIXED(fixed), buttons.amplitude, 260, 40);
    gtk_fixed_put(GTK_FIXED(fixed), buttons.phase, 500, 40);

    labels.frequency = gtk_label_new("Частота");
    labels.amplitude = gtk_label_new("Амплитуда");
    labels.phase = gtk_label_new("Фаза");

    gtk_fixed_put(GTK_FIXED(fixed), labels.frequency, 50, 10);
    gtk_fixed_put(GTK_FIXED(fixed), labels.amplitude, 280, 10);
    gtk_fixed_put(GTK_FIXED(fixed), labels.phase, 545, 10);

    gtk_fixed_put(GTK_FIXED(fixed), DrawArea, 0, 250);
}
