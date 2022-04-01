#pragma once

#include <vector>
#include <string>
#include <glm/glm.hpp>
#include "IGUIObject.hpp"
#include "IGUIPanel.hpp"
#include "SpriteFont.hpp"

namespace BookEngine
{
	class IGUILabel : public IGUIObject
	{
	public:
		IGUILabel(glm::vec4 &bounds, glm::vec2 &position, std::string text, SpriteFont *font, const glm::vec2 &fontScale = glm::vec2(1.0f), IGUIPanel *panel = NULL);
		~IGUILabel();

		virtual void Update() override;
		virtual void Draw(SpriteBatch &spriteBatch) override;
		virtual void OnNotify(IGUIObject &button, GUIEvent event) override;
		virtual void SetLabelText(std::string text) { m_labelText = text; };
		virtual std::string GetLabelText() { return m_labelText; };
		virtual void OnClick();
		virtual bool GetClickedStatus() { return m_clicked; };

	protected:
		std::string m_labelText;
		SpriteFont *m_spriteFont;
		IGUIPanel *m_panel;
		glm::vec2 m_fontScale;
		bool m_clicked = false;
	};
}
