#include <SFML/Audio.hpp>
#include <SFML/Graphics.hpp>

int main(){
	//create the main window
	sf::RenderWindow App(sf::VideoMode(800,600), "SFML Window");
	
	//Load a sprite to display
	sf::Texture tex;
	if(!tex.loadFromFile("ship.png"))
		return EXIT_FAILURE;
	sf::Sprite Sprite(tex); //fast to be draw
	
	//create a graphical string to display
	sf::Font Arial;
	if(!Arial.loadFromFile("LiberationMono-Regular.ttf"))
		return EXIT_FAILURE;
	sf::Text text("Hello SFML", Arial, 50);
	text.setPosition(20.0,300.0);
	text.move(100.0, 20.0);
	//load music to play
	sf::Music Music;
	if (!Music.openFromFile("Epoq-Lepidoptera.ogg"))
		return EXIT_FAILURE;
		
	//play the music
	Music.play();
	
	sf::Event Event;
	
	//Start the game loop
	while (App.isOpen()){
		//process events
		
		//while (App.GetEvent(Event))
		while (App.pollEvent(Event)){
			//close window:exit
			if (Event.type == sf::Event::Closed)
				App.close();
		}
		
		//clear screen
		App.clear();
		
		//Draw the sprite
		App.draw(Sprite);
		
		//Draw the string
		App.draw(text);
		
		//update the window
		App.display();
	}
		
	return EXIT_SUCCESS;
}
