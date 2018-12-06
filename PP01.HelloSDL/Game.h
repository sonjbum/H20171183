#include "TextureManager.h"
#include"Player.h"

class Game
{
public:
	Game() {}
	~Game() {}
	bool init(const char* title, int xpos, int ypos, int width, int height, int flags);
	void render();
	void update();
	void handleEvents();
	void clean();
	bool running() { return m_bRunning; }
	int m_currentFrame;
	GameObject m_go;
	Player m_player;
	TextureManager m_textureManager;
private:
	SDL_Texture * m_pTexture;
	SDL_Rect m_sourceRectangle;
	SDL_Rect m_destinationRectangle;
	SDL_Window * m_pWindow;
	SDL_Renderer* m_pRenderer;
	bool m_bRunning;
protected:
};