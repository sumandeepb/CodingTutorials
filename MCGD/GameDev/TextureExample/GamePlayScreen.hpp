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

#include <memory>
#include <BookEngine/IScreen.hpp>
#include <BookEngine/SpriteBatch.hpp>
#include <BookEngine/Sprite.hpp>
#include <BookEngine/ShaderManager.hpp>
#include <BookEngine/Camera2D.hpp>
#include <BookEngine/Window.hpp>

class GameplayScreen : public BookEngine::IScreen
{
public:
	GameplayScreen(BookEngine::Window *window);
	~GameplayScreen();

	// Inherited via IGameScreen
	virtual void Build() override;

	virtual void Destroy() override;

	virtual void OnEntry() override;

	virtual void OnExit() override;

	virtual void Update(float deltaTime) override;

	virtual void Draw() override;

	virtual int GetNextScreenIndex() const override;

	virtual int GetPreviousScreenIndex() const override;

private:
	void CheckInput();
	BookEngine::Window *m_window;
	BookEngine::Sprite m_sprite;
	BookEngine::Camera2D m_camera;
	std::unique_ptr<BookEngine::ShaderManager> m_shaderManager = nullptr;
	int m_screenWidth, m_screenHeight;
};
