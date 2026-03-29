/*
 * Copyright 2026, Alexey Burshtein <ahitech@gmail.com>
 * All rights reserved. Distributed under the terms of the MIT license.
 */
#ifndef _MAIN_WINDOW_H
#define _MAIN_WINDOW_H

#include <Application.h>
#include <Rect.h>
#include <View.h>
#include <Window.h>
#include <SupportDefs.h>


class MainView : public BView 
{
public:

private:

};


class MainWindow : public BWindow
{
public:
	MainWindow();
	virtual bool QuitRequested();

private:

};


class MainApp : public BApplication
{
public:
	MainApp();
private:	
	
};

#endif // _MAIN_WINDOW_H
