#pragma once

#ifndef _SIGNALS_
#define _SIGNALS_

#include <gtk/gtk.h>
#include <stdio.h>
#include "../draw/draw.h"

void destroy_window(void);

gboolean on_draw(GtkWidget*, cairo_t*, gpointer);

void change_value(GtkWidget*, gpointer);

#endif