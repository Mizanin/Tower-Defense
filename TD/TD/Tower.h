#pragma once
#include <SFML/Graphics.hpp>
class Tower
{
private:
	float RangeOfAttack; //������ ����� �����
	sf::Vector2f position; //������� �����
	sf::CircleShape towerShape;
	int x, y;//������� �������� �����
public:
	//Tower();
	void DrawTower(sf::RenderWindow & window, sf::Vector2f position); //������ ����� 
};
