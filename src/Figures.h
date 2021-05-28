#ifndef FIGURES_H
#define FIGURES_H

#include <glm.hpp>
#include "Vertex.h"

using namespace glm;

// данные о вершинах
int triangleVertexCount = 36;
Vertex triangleVertexes[] = {
//////////////////////
    //////////////////////////////////////x
    //                ВЕРШИНА                   ЦВЕТ       Текстурные координаты
    Vertex(vec3(-0.5f, -0.5f, -0.5f), vec3(1.0f, 1.0f, 1.0f),vec2(-0.5f, -0.5f)),//розовый
    Vertex(vec3( 0.5f, -0.5f, -0.5f), vec3(1.0f, 1.0f, 1.0f),vec2(0.5f, -0.5f)),
    Vertex(vec3( 0.5f, -0.5f,  0.5f), vec3(1.0f, 1.0f, 1.0f),vec2(0.5f, 0.5f)),
    Vertex(vec3( 0.5f, -0.5f,  0.5f), vec3(1.0f, 1.0f, 1.0f),vec2(0.5f, 0.5f)),
    Vertex(vec3(-0.5f, -0.5f,  0.5f), vec3(1.0f, 1.0f, 1.0f),vec2(-0.5f, 0.5f)),
    Vertex(vec3(-0.5f, -0.5f, -0.5f), vec3(1.0f, 1.0f, 1.0f),vec2(-0.5f, -0.5f)),
    

    Vertex(vec3(-0.5f,  0.5f, -0.5f), vec3(1.0f, 1.0f, 1.0f),vec2(-0.5f, -0.5f)),//красный
    Vertex(vec3( 0.5f,  0.5f, -0.5f), vec3(1.0f, 1.0f, 1.0f),vec2(0.5f, -0.5f)),
    Vertex(vec3( 0.5f,  0.5f,  0.5f), vec3(1.0f, 1.0f, 1.0f),vec2(0.5f, 0.5f)),
    Vertex(vec3( 0.5f,  0.5f,  0.5f), vec3(1.0f, 1.0f, 1.0f),vec2(0.5f, 0.5f)),
    Vertex(vec3(-0.5f,  0.5f,  0.5f), vec3(1.0f, 1.0f, 1.0f),vec2(-0.5f, 0.5f)),
    Vertex(vec3(-0.5f,  0.5f, -0.5f), vec3(1.0f, 1.0f, 1.0f),vec2(-0.5f, -0.5f)),

    Vertex(vec3(-0.5f, -0.5f, -0.5f), vec3(1.0f, 1.0f, 1.0f),vec2(-0.5f, -0.5f)),//фиолетовый
    Vertex(vec3( 0.5f, -0.5f, -0.5f), vec3(1.0f, 1.0f, 1.0f),vec2(0.5f, -0.5f)),
    Vertex(vec3( 0.5f,  0.5f, -0.5f), vec3(1.0f, 1.0f, 1.0f),vec2(0.5f, 0.5f)),
    Vertex(vec3( 0.5f,  0.5f, -0.5f), vec3(1.0f, 1.0f, 1.0f),vec2(0.5f, 0.5f)),
    Vertex(vec3(-0.5f,  0.5f, -0.5f), vec3(1.0f, 1.0f, 1.0f),vec2(-0.5f, 0.5f)),
    Vertex(vec3(-0.5f, -0.5f, -0.5f), vec3(1.0f, 1.0f, 1.0f),vec2(-0.5f, -0.5f)),

    Vertex(vec3(-0.5f, -0.5f,  0.5f), vec3(1.0f, 1.0f, 1.0f),vec2(-0.5f, -0.5f)),//оранжевый
    Vertex(vec3( 0.5f, -0.5f,  0.5f), vec3(1.0f, 1.0f, 1.0f),vec2(0.5f, -0.5f)),
    Vertex(vec3( 0.5f,  0.5f,  0.5f), vec3(1.0f, 1.0f, 1.0f),vec2(0.5f, 0.5f)),
    Vertex(vec3( 0.5f,  0.5f,  0.5f), vec3(1.0f, 1.0f, 1.0f),vec2(0.5f, 0.5f)),
    Vertex(vec3(-0.5f,  0.5f,  0.5f), vec3(1.0f, 1.0f, 1.0f),vec2(-0.5f, 0.5f)),
    Vertex(vec3(-0.5f, -0.5f,  0.5f), vec3(1.0f, 1.0f, 1.0f),vec2(-0.5f, -0.5f)),

    Vertex(vec3(-0.5f,  0.5f,  0.5f), vec3(1.0f, 1.0f, 1.0f),vec2(-0.5f, -0.5f)),//белый
    Vertex(vec3(-0.5f,  0.5f, -0.5f), vec3(1.0f, 1.0f, 1.0f),vec2(0.5f, -0.5f)),
    Vertex(vec3(-0.5f, -0.5f, -0.5f), vec3(1.0f, 1.0f, 1.0f),vec2(0.5f, 0.5f)),
    Vertex(vec3(-0.5f, -0.5f, -0.5f), vec3(1.0f, 1.0f, 1.0f),vec2(0.5f, 0.5f)),
    Vertex(vec3(-0.5f, -0.5f,  0.5f), vec3(1.0f, 1.0f, 1.0f),vec2(-0.5f, 0.5f)),
    Vertex(vec3(-0.5f,  0.5f,  0.5f), vec3(1.0f, 1.0f, 1.0f),vec2(-0.5f, -0.5f)),

    Vertex(vec3( 0.5f,  0.5f,  0.5f), vec3(1.0f, 1.0f, 1.0f),vec2(-0.5f, -0.5f)),//зеленый
    Vertex(vec3( 0.5f,  0.5f, -0.5f), vec3(1.0f, 1.0f, 1.0f),vec2(0.5f, -0.5f)),
    Vertex(vec3( 0.5f, -0.5f, -0.5f), vec3(1.0f, 1.0f, 1.0f),vec2(0.5f, 0.5f)),
    Vertex(vec3( 0.5f, -0.5f, -0.5f), vec3(1.0f, 1.0f, 1.0f),vec2(0.5f, 0.5f)),
    Vertex(vec3( 0.5f, -0.5f,  0.5f), vec3(1.0f, 1.0f, 1.0f),vec2(-0.5f, 0.5f)),
    Vertex(vec3( 0.5f,  0.5f,  0.5f), vec3(1.0f, 1.0f, 1.0f),vec2(-0.5f, -0.5f))

};

#endif
