#include <gtk/gtk.h>

static void print_hello(GtkWidget *widget, gpointer data) { // ran when the button is clicked
    g_print("Hello World\n"); // print stuff to the console
}

static void activate(GtkApplication *app, gpointer user_data) {
    GtkWidget *window;
    GtkWidget *button;

    window = gtk_application_window_new(app); // create a new window
    gtk_window_set_title(GTK_WINDOW(window), "Hello"); // set the title
    gtk_window_set_default_size(GTK_WINDOW(window), 200, 200); // set the size

    button = gtk_button_new_with_label("Hello World"); // create a button
    g_signal_connect(button, "clicked", G_CALLBACK(print_hello), NULL); // add an event listener to the button
    gtk_window_set_child(GTK_WINDOW(window), button); // add the button to the window

    gtk_window_present(GTK_WINDOW(window)); // show the window 
}

int main(int argc, char *argv[])
{
    GtkApplication *app;
    int status;

    app = gtk_application_new ("org.gtk.example", G_APPLICATION_DEFAULT_FLAGS);
    g_signal_connect(app, "activate", G_CALLBACK(activate), NULL); // once the app is created call the activate function 
    status = g_application_run(G_APPLICATION(app), argc, argv); // start the application loop
    g_object_unref(app); // on close deallocate the memory

    return status; 
}
