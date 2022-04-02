/*
    Copyright (c) 2016 Michael "Mickey" MacDonald.

    Permission is hereby granted, free of charge, to any person obtaining
    a copy of this software and associated documentation files (the "Software"),
    to deal in the Software without restriction, including without limitation
    the rights to use, copy, modify, merge, publish, distribute, sublicense,
    and/or sell copies of the Software, and to permit persons to whom the Software
    is furnished to do so, subject to the following conditions:

    The above copyright notice and this permission notice shall be included in
    all copies or substantial portions of the Software.

    THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
    EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES
    OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.
    IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY
    CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT,
    TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE
    OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
*/

#include <iostream>
#include <SDL.h>
#include "GameplayScreen.hpp"
#include <BookEngine/IGame.hpp>

GameplayScreen::GameplayScreen()
{
}

GameplayScreen::~GameplayScreen()
{
}

void GameplayScreen::Build()
{
}

void GameplayScreen::Destroy()
{
    m_audioManager.Destroy();
}

void GameplayScreen::OnEntry()
{
    m_audioManager.Init();
    m_bgMusic = m_audioManager.LoadMusic("Music/bensound-epic.mp3");
    m_bgMusic.Play();
}

void GameplayScreen::OnExit()
{
    m_bgMusic.Stop();
}

void GameplayScreen::Update(float deltaTime)
{
    CheckInput();
}

void GameplayScreen::Draw()
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glClearColor(1.0f, 0.0f, 0.0f, 1.0f);
}

int GameplayScreen::GetNextScreenIndex() const
{
    return SCREENINDEX_NO_SCREEN;
}

int GameplayScreen::GetPreviousScreenIndex() const
{
    return SCREENINDEX_NO_SCREEN;
}

void GameplayScreen::CheckInput()
{
    SDL_Event event;
    while (SDL_PollEvent(&event))
    {
        m_game->OnSDLEvent(event);
    }
}
