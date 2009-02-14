/*
 * Geeqie
 * (C) 2004 John Ellis
 * Copyright (C) 2008 - 2009 The Geeqie Team
 *
 * Author: Vladimir Nadvornik
 *
 * This software is released under the GNU General Public License (GNU GPL).
 * Please read the included file COPYING for more information.
 * This software comes with no warranty of any kind, use at your own risk!
 */


#ifndef BAR_H
#define BAR_H

typedef struct _PaneData PaneData;

struct _PaneData {
	void (*pane_set_fd)(GtkWidget *pane, FileData *fd);
	gint (*pane_event)(GtkWidget *pane, GdkEvent *event);
	gchar *title;
	
	GList *(*list_func)(gpointer);
	gpointer list_data;

};



GtkWidget *bar_new(GtkWidget *bounding_widget);
void bar_close(GtkWidget *bar);

void bar_set_fd(GtkWidget *bar, FileData *fd);
gint bar_event(GtkWidget *bar, GdkEvent *event);

void bar_set_selection_func(GtkWidget *bar, GList *(*list_func)(gpointer data), gpointer data); 

/* following functions are common for all panes */
void bar_pane_set_selection_func(GtkWidget *pane, GList *(*list_func)(gpointer data), gpointer data); 

#endif
/* vim: set shiftwidth=8 softtabstop=0 cindent cinoptions={1s: */
