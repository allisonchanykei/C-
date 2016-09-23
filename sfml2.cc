#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>

int main(){
	sf::RenderWindow window(sf::VideoMode(800,600), "SFML Window");
	
	
	
	int rad(70);
	
	sf::CircleShape shape1(rad),shape2(rad/2);

	shape1.setFillColor(sf::Color(100,250,30));
	shape2.setFillColor(sf::Color(220,0,230));
	
	shape1.setOrigin(rad,rad);
	shape2.setOrigin(rad,rad);
	
	//initial positions for first ball
	int x1(window.getSize().x/2);
	int y1(window.getSize().y/2);
	
	//initial positions for second ball
	int x2(window.getSize().x/2+155);
	int y2(window.getSize().y/2+155);
	
	//set initial positions
	shape1.setPosition(x1,y1);
	shape2.setPosition(x2,y2);
	
	sf::Vector2f pos1(shape1.getPosition());
	sf::Vector2f pos2(shape2.getPosition());
	
	int x1Vel(4), x2Vel(-5);
	int y1Vel(4),y2Vel(5);
	
	while (window,isOpen())
	{
		
		//check all the window's events thatwere triggered since the last iteration
		sf::Event event;
		while(window.pollEvent(event))
		{
			//"close requested" event: we close the window
			if (event.type == sf::Event::Closed)
				window.close();
		}
		pos1=shape1.getPosition();
		
		
