#include "camera.hpp"

Camera::Camera() : m_position(glm::vec3( 0, 0, 0 )){

}

void Camera::move(){

    if( sf::Keyboard::isKeyPressed(sf::Keyboard::W)){
        m_position.z -= 0.02f;
    }

    if( sf::Keyboard::isKeyPressed(sf::Keyboard::D)){
        m_position.x += 0.02f;
    }

    if( sf::Keyboard::isKeyPressed(sf::Keyboard::A)){
        m_position.x -= 0.02f;
    }

    if( sf::Keyboard::isKeyPressed(sf::Keyboard::S)){
        m_position.z += 0.02f;
    }

}

GLfloat Camera::getPitch(){

    return m_pitch;
}

GLfloat Camera::getYaw(){

    return m_yaw;
}

glm::vec3 Camera::getPosition(){

    return m_position;
}