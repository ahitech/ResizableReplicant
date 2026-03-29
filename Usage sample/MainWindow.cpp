/*
 * Copyright 2026, Alexey Burshtein <ahitech@gmail.com>
 * All rights reserved. Distributed under the terms of the MIT license.
 */


#include "MainWindow.h"

// -----==< Including the replicant header >==-----
#

MainWindow::MainWindow()
    : BWindow(BRect(100, 100, 500, 400), "Replicant Sample", 
              B_TITLED_WINDOW, B_ASYNCHRONOUS_CONTROLS | B_QUIT_ON_WINDOW_CLOSE) {
    
    // Создаем репликант во все окно
}

bool MainWindow::QuitRequested() {
    be_app->PostMessage(B_QUIT_REQUESTED);
    return true;
}

// --- MyApp Implementation ---

MainApp::MainApp()
    : BApplication("application/x-vnd.resizable-replicant-sample") {
}

int main() {
    MainApp app;
    MainWindow* window = new MainWindow();
    window->Show();
    app.Run();
    return 0;
}
