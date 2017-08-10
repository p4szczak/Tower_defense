#include <iostream>
#include "Camera.h"

Camera::Camera()
{
	startPos();
}

void Camera::leftCameraRotation()
{
	//I quarter
	if (posX >= 0 + tmpX && posX < 15.0f + tmpX &&
		posZ >= -15.0f + tmpZ && posZ < 0 + tmpZ )
	{
		posX += rad;
		posZ += rad;
	}
	//II quarter
	else if (posX >= -15.0f + tmpX && posX < 0 + tmpX &&
		posZ > -15.0f + tmpZ && posZ <= 0 + tmpZ )
	{
		posX += rad;
		posZ -= rad;
	}
	//III quarter
	else if (posX > -15.0f + tmpX && posX <= 0 + tmpX &&
		posZ > 0 + tmpZ && posZ <= 15.0f + tmpZ)
	{
		posX -= rad;
		posZ -= rad;
	}
	//IV quarter
	else if (posX > 0 + tmpX && posX <= 15.0f + tmpX &&
		posZ >= 0 + tmpZ && posZ < 15.0f + tmpZ)
	{
		posX -= rad;
		posZ += rad;
	}
}

void Camera::rightCameraRotation()
{
	//I quarter
	if (posX > 0 + tmpX && posX <= 15.0f + tmpX &&
		posZ > -15.0f + tmpZ && posZ <= 0 + tmpZ)
	{
		posX -= rad;
		posZ -= rad;
	}
	//II quarter
	else if (posX > -15.0f + tmpX && posX <= 0 + tmpX &&
		posZ >= -15.0f + tmpZ && posZ < 0 + tmpZ)
	{
		posX -= rad;
		posZ += rad;
	}
	//III quarter
	else if (posX >= -15.0f + tmpX && posX < 0 + tmpX &&
		posZ >= 0 + tmpZ && posZ < 15.0f + tmpZ)
	{
		posX += rad;
		posZ += rad;
	}
	//IV quarter
	else if (posX >= 0 + tmpX && posX < 15.0f + tmpX &&
		posZ > 0 + tmpZ && posZ <= 15.0f + tmpZ)
	{
		posX += rad;
		posZ -= rad;
	}
}

void Camera::cameraDistanceLonger()
{
	if (posX == 0 && posZ - atZ < 0)
	{
		posY += rad;
		posZ -= rad;
		tmpZ -= rad;
	}
	else if (posX == 0 && posZ - atZ > 0)
	{
		posY += rad;
		posZ += rad;
		tmpZ += rad;
	}
	else if (posZ == 0 && posX - atX < 0)
	{
		posY += rad;
		posX -= rad;
		tmpX -= rad;
	}
	else if (posZ == 0 && posX - atX > 0)
	{
		posY += rad;
		posX += rad;
		tmpX += rad;
	}
	else if (posZ - atZ < 0 && posX - atX < 0)
	{
		posX -= rad;
		posY += rad;
		posZ -= rad;
		tmpZ -= rad;
		tmpX -= rad;
	}
	else if (posZ - atZ > 0 && posX - atX < 0)
	{
		posX -= rad;
		posY += rad;
		posZ += rad;
		tmpZ += rad;
		tmpX -= rad;
	}
	else if (posZ - atZ < 0 && posX - atX > 0)
	{
		posX += rad;
		posY += rad;
		posZ -= rad;
		tmpZ -= rad;
		tmpX += rad;
	}
	else if (posZ - atZ > 0 && posX - atX > 0)
	{
		posX += rad;
		posY += rad;
		posZ += rad;
		tmpZ += rad;
		tmpX += rad;
	}

	std::cout << "camera.posX = " << posX << std::endl;
	std::cout << "camera.posZ = " << posZ << std::endl;
	std::cout << "tmpX = " << tmpX << std::endl;
	std::cout << "tmpZ = " << tmpZ << std::endl;
}

void Camera::cameraDistanceShorter()
{
	if (posX == 0 && posZ - atZ < 0)
	{
		posY -= rad;
		posZ += rad;
		tmpZ += rad;
	}
	else if (posX == 0 && posZ - atZ > 0)
	{
		posY -= rad;
		posZ -= rad;
		tmpZ -= rad;
	}
	else if (posZ == 0 && posX - atX < 0)
	{
		posY -= rad;
		posX += rad;
		tmpX += rad;
	}
	else if (posZ == 0 && posX - atX > 0)
	{
		posY -= rad;
		posX -= rad;
		tmpX -= rad;
	}
	else if (posZ - atZ < 0 && posX - atX < 0)
	{
		posX += rad;
		posY -= rad;
		posZ += rad;
		tmpZ += rad;
		tmpX += rad;
	}
	else if (posZ - atZ > 0 && posX - atX < 0)
	{
		posX += rad;
		posY -= rad;
		posZ -= rad;
		tmpZ -= rad;
		tmpX += rad;
	}
	else if (posZ - atZ < 0 && posX - atX > 0)
	{
		posX -= rad;
		posY -= rad;
		posZ += rad;
		tmpZ += rad;
		tmpX -= rad;
	}
	else if (posZ - atZ > 0 && posX - atX > 0)
	{
		posX -= rad;
		posY -= rad;
		posZ -= rad;
		tmpZ -= rad;
		tmpX -= rad;
	}
	std::cout << "camera.posX = " << posX << std::endl;
	std::cout << "camera.posZ = " << posZ << std::endl;
	std::cout << "tmpX = " << tmpX << std::endl;
	std::cout << "tmpZ = " << tmpZ << std::endl;
}

void Camera::cameraUp()
{
	posZ += rad;
	atZ += rad;
	tmpZ += rad;
}

void Camera::cameraDown()
{
	posZ -= rad;
	atZ -= rad;
	tmpZ -= rad;
}

void Camera::cameraLeft()
{
	posX += rad;
	atX += rad;
	tmpX += rad;
}

void Camera::cameraRight()
{
	posX -= rad;
	atX -= rad;
	tmpX -= rad;
}

float Camera::getAtX()
{
	return atX;
}

float Camera::getAtY()
{
	return atY;
}

float Camera::getAtZ()
{
	return atZ;
}

float Camera::getPosX()
{
	return posX;
}

float Camera::getPosY()
{
	return posY;
}

float Camera::getPosZ()
{
	return posZ;
}

void Camera::startPos()
{
	posX = startX;
	posY = startY;
	posZ = startZ;
	atX = startAtX;
	atY = startAtY;
	atZ = startAtZ;
}

void Camera::check()
{
	std::cout << "camera.posX = " << posX << std::endl;
	std::cout << "camera.posZ = " << posZ << std::endl;
	std::cout << "camera.tmpX = " << tmpX << std::endl;
	std::cout << "camera.tmpZ = " << tmpZ << std::endl;
	std::cout << std::endl;
}