#pragma once

#ifndef _DRAW_
#define _DRAW_
#define PI 3.14
#define TO_RAD 3.1415 / 180

#include <gtk/gtk.h>
#include <math.h>
#include "../widgets/widgets.h"

gboolean on_draw(GtkWidget*, cairo_t*, gpointer);

void draw_graph(GtkWidget*, cairo_t*, gpointer);

void draw_sin(GtkWidget*, cairo_t*, gpointer);

#endif