#ifndef FIGURES_H
#define FIGURES_H

#include <glm.hpp>
#include "Vertex.h"

using namespace glm;

// данные о вершинах
int triangleVertexCount = 36;
Vertex triangleVertexes[] = {

    //                ВЕРШИНА                   ЦВЕТ
    Vertex(vec3(-0.5f, -0.5f, -0.5f), vec3(1.0f, 0.0f, 1.0f)),//розовый
    Vertex(vec3( 0.5f, -0.5f, -0.5f), vec3(1.0f, 0.0f, 1.5f)),
    Vertex(vec3( 0.5f, -0.5f,  0.5f), vec3(1.0f, 0.0f, 1.5f)),
    Vertex(vec3( 0.5f, -0.5f,  0.5f), vec3(1.0f, 0.0f, 1.5f)),
    Vertex(vec3(-0.5f, -0.5f,  0.5f), vec3(1.0f, 0.0f, 1.5f)),
    Vertex(vec3(-0.5f, -0.5f, -0.5f), vec3(1.0f, 0.0f, 1.5f)),

    Vertex(vec3(-0.5f,  0.5f, -0.5f), vec3(0.9f, 0.1f, 0.2f)),//красный
    Vertex(vec3( 0.5f,  0.5f, -0.5f), vec3(0.9f, 0.1f, 0.2f)),
    Vertex(vec3( 0.5f,  0.5f,  0.5f), vec3(0.9f, 0.1f, 0.2f)),
    Vertex(vec3( 0.5f,  0.5f,  0.5f), vec3(0.9f, 0.1f, 0.2f)),
    Vertex(vec3(-0.5f,  0.5f,  0.5f), vec3(0.9f, 0.1f, 0.2f)),
    Vertex(vec3(-0.5f,  0.5f, -0.5f), vec3(0.9f, 0.1f, 0.2f)),

    Vertex(vec3(-0.5f, -0.5f, -0.5f), vec3(0.5f, 0.1f, 0.9f)),//фиолетовый
    Vertex(vec3( 0.5f, -0.5f, -0.5f), vec3(0.5f, 0.1f, 0.9f)),
    Vertex(vec3( 0.5f,  0.5f, -0.5f), vec3(0.5f, 0.1f, 0.9f)),
    Vertex(vec3( 0.5f,  0.5f, -0.5f), vec3(0.5f, 0.1f, 0.9f)),
    Vertex(vec3(-0.5f,  0.5f, -0.5f), vec3(0.5f, 0.1f, 0.9f)),
    Vertex(vec3(-0.5f, -0.5f, -0.5f), vec3(0.5f, 0.1f, 0.9f)),

    Vertex(vec3(-0.5f, -0.5f,  0.5f), vec3(2.0f, 0.5f, 0.0f)),//оранжевый
    Vertex(vec3( 0.5f, -0.5f,  0.5f), vec3(2.0f, 0.5f, 0.0f)),
    Vertex(vec3( 0.5f,  0.5f,  0.5f), vec3(2.0f, 0.5f, 0.0f)),
    Vertex(vec3( 0.5f,  0.5f,  0.5f), vec3(2.0f, 0.5f, 0.0f)),
    Vertex(vec3(-0.5f,  0.5f,  0.5f), vec3(2.0f, 0.5f, 0.0f)),
    Vertex(vec3(-0.5f, -0.5f,  0.5f), vec3(2.0f, 0.5f, 0.0f)),

    Vertex(vec3(-0.5f,  0.5f,  0.5f), vec3(1.0f, 1.0f, 1.0f)),//белый
    Vertex(vec3(-0.5f,  0.5f, -0.5f), vec3(1.0f, 1.0f, 1.0f)),
    Vertex(vec3(-0.5f, -0.5f, -0.5f), vec3(1.0f, 1.0f, 1.0f)),
    Vertex(vec3(-0.5f, -0.5f, -0.5f), vec3(1.0f, 1.0f, 1.0f)),
    Vertex(vec3(-0.5f, -0.5f,  0.5f), vec3(1.0f, 1.0f, 1.0f)),
    Vertex(vec3(-0.5f,  0.5f,  0.5f), vec3(1.0f, 1.0f, 1.0f)),

    Vertex(vec3( 0.5f,  0.5f,  0.5f), vec3(0.5f, 1.0f, 0.0f)),//зеленый
    Vertex(vec3( 0.5f,  0.5f, -0.5f), vec3(0.5f, 1.0f, 0.0f)),
    Vertex(vec3( 0.5f, -0.5f, -0.5f), vec3(0.5f, 1.0f, 0.0f)),
    Vertex(vec3( 0.5f, -0.5f, -0.5f), vec3(0.5f, 1.0f, 0.0f)),
    Vertex(vec3( 0.5f, -0.5f,  0.5f), vec3(0.5f, 1.0f, 0.0f)),
    Vertex(vec3( 0.5f,  0.5f,  0.5f), vec3(0.5f, 1.0f, 0.1f))

};

#endif
