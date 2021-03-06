#ifndef UTILITIES_HPP
#define UTILITIES_HPP

#include <iostream>
#include <glm/glm.hpp>
#include <GL/glew.h>
#define GLM_ENABLE_EXPERIMENTAL
#include <glm/gtx/transform.hpp> 
#include "../engine_core/camera.hpp"

namespace utils{

    glm::mat4 createRotationMatrix( const glm::vec3 t_rotation );

    glm::mat4 createTransformationMatrix( const glm::vec3 t_translation, const glm::vec3 t_rotation, const glm::vec3 t_scale );

    glm::mat4 createViewMatrix( Camera t_camera );

    std::string readFile( const char* t_file_path );

    bool loadOBJ( const char* t_file_path, std::vector < GLfloat >& t_vertices_vector, std::vector < GLfloat >& t_texture_vector,
     std::vector < GLfloat >& t_normals_vector ,std::vector <GLuint>& t_indices_vector );

}


#endif // UTILITIES_HPP

