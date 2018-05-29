#include "Label.h"




Label::Label(sf::Vector2f pos, sf::Color color, sf::Font & font, std::string text):
	m_value("0"), m_text(text, font, 30), m_color(color), m_label(text) {
	m_text.setPosition(pos);
}

Label::~Label()
{
}

void Label::draw(sf::RenderWindow & window){
	m_text.setString(m_label + ": " + m_value);
	window.draw(m_text);
}

sf::Vector2f Label::getCenter() const
{
	return sf::Vector2f();
}

sf::FloatRect Label::getRect() const
{
	return sf::FloatRect();
}

void Label::setValue(std::string v){
	m_value = v;
}
