#pragma once

#ifndef _WIDGETS_
#define _WIDGETS_

#include <gtk/gtk.h>
#include <stdio.h>

typedef struct buttons{
    GtkWidget *frequency;
    GtkWidget *amplitude;
    GtkWidget *phase;
} BUTTONS;

typedef struct labels{
    GtkWidget *frequency;
    GtkWidget *amplitude;
    GtkWidget *phase;
} LABELS;


void set_params_window(GtkWidget*);

void create_widgets(GtkWidget*, GtkWidget*, GtkWidget*, BUTTONS, LABELS);

#endif