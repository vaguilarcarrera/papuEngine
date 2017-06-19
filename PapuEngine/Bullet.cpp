#include "Bullet.h"
#include "ResourceManager.h"
#include "GLTexture.h"


void Bullet::draw(SpriteBacth& spriteBatch,int tipobala) {
	Color color;
	color.r = 255;
	color.g = 255;
	color.b = 255;
	color.a = 255;
	glm::vec4 uv(0.0f, 0.0f, 1.0f, 1.0f);
	if (tipobala == 0)
	{
		static GLTexture texture = ResourceManager::getTexture("Textures/Paper_Mario_.png");
		glm::vec4 posAnSize = glm::vec4(_position.x, _position.y, 30, 30);
		spriteBatch.draw(posAnSize, uv, texture.id, 0.0f, color);
	}
	if (tipobala == 1)
	{
		static GLTexture texture = ResourceManager::getTexture("Textures/blue_eyes_ultimate_dragonfinal.png");
		glm::vec4 posAnSize = glm::vec4(_position.x, _position.y, 30, 30);
		spriteBatch.draw(posAnSize, uv, texture.id, 0.0f, color);
	}
	if (tipobala == 2)
	{
		static GLTexture texture = ResourceManager::getTexture("Textures/Rasengan_oscuro.png");
		glm::vec4 posAnSize = glm::vec4(_position.x, _position.y, 30, 30);
		spriteBatch.draw(posAnSize, uv, texture.id, 0.0f, color);
	}
	if (tipobala == 3)
	{
		static GLTexture texture = ResourceManager::getTexture("Textures/sharingan.png");
		glm::vec4 posAnSize = glm::vec4(_position.x, _position.y, 30, 30);
		spriteBatch.draw(posAnSize, uv, texture.id, 0.0f, color);
	}

}

bool Bullet::update() {
	_position += _direction * _speed;
	_lifeTime--;
	if (_lifeTime == 0) {
		return true;
	}
	return false;
}

Bullet::Bullet(glm::vec2 po, glm::vec2 dir, float speed, int lifeTime)
{
	_lifeTime = lifeTime;
	_position = po;
	_direction = dir;
	_speed = speed;
}


Bullet::~Bullet()
{
}
