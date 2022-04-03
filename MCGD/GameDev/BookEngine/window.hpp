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

#pragma once

#include <string>
#include <SDL.h>
#include <GL/glew.h>

namespace BookEngine
{
    enum WindowFlags
    {
        INVISIBLE = 0x1,
        FULLSCREEN = 0x2,
        BORDERLESS = 0x4,
        RESIZABLE = 0x8,
        FULLSCREEN_DESKTOP = 0x16
    };

    class Window
    {
    public:
        Window();
        ~Window();

        int Create(std::string windowName, int screenWidth, int screenHeight, unsigned int currentFlags);

        void SwapBuffer();

        int GetScreenWidth() { return m_screenWidth; }
        int GetScreenHeight() { return m_screenHeight; }

        void ToggleFullScreen();

        void OnWindowEvent(SDL_Event &evnt);

        void SetWindowName(const std::string &windowName);

    private:
        SDL_Window *m_window;
        int m_screenWidth, m_screenHeight;
        bool m_isWindowed;
    };
}
