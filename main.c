#include "widgets/widgets.h"
#include "signals/signals.h"

int main(int argc, char *argv[])
{
    GtkWidget *window, *fixed, *DrawArea;
    BUTTONS buttons;
    LABELS labels;
    gtk_init(&argc, &argv);

    window = gtk_window_new(GTK_WINDOW_TOPLEVEL);
    set_params_window(window);

    fixed = gtk_fixed_new();
    DrawArea = gtk_drawing_area_new();

    gtk_widget_set_size_request(DrawArea, 700, 400);
    gtk_container_add(GTK_CONTAINER(window), fixed);

    buttons.frequency = gtk_spin_button_new_with_range(0, 50, 1);
    buttons.amplitude = gtk_spin_button_new_with_range(0, 50, 1);
    buttons.phase = gtk_spin_button_new_with_range(0, 50, 1);

    create_widgets(window, fixed, DrawArea, buttons, labels);

    g_signal_connect(window, "destroy", G_CALLBACK(destroy_window), NULL);
    g_signal_connect(DrawArea, "draw", G_CALLBACK(on_draw), &buttons);
    g_signal_connect(buttons.frequency, "value-changed", G_CALLBACK(change_value), DrawArea);
    g_signal_connect(buttons.amplitude, "value-changed", G_CALLBACK(change_value), DrawArea);
    g_signal_connect(buttons.phase, "value-changed", G_CALLBACK(change_value), DrawArea);

    gtk_widget_show_all(window);
    gtk_main();
    
    return 0;
}
