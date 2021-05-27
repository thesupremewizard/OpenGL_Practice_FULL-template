#include "Shaders.h"
#include "Helpers.h"
#include <stdio.h>
#include <stdlib.h>


GLuint createShaderFromSources(const char* vertexShader, const char* fragmentShader){
    GLuint vs = glCreateShader (GL_VERTEX_SHADER);
    glShaderSource(vs, 1, &vertexShader, NULL);
    glCompileShader(vs);
    CHECK_GL_ERRORS();

    GLuint fs = glCreateShader (GL_FRAGMENT_SHADER);
    glShaderSource(fs, 1, &fragmentShader, NULL);
    glCompileShader(fs);
    CHECK_GL_ERRORS();

    GLuint shaderProgram = glCreateProgram ();
    glAttachShader(shaderProgram, fs);
    glAttachShader(shaderProgram, vs);
    glLinkProgram(shaderProgram);
    CHECK_GL_ERRORS();

    /*int infologLength = 0;
    glGetShaderiv(shaderProgram, GL_INFO_LOG_LENGTH, &infologLength);
    if (infologLength > 0){
        GLchar* infoLog = (GLchar*)malloc(static_cast<size_t>(infologLength));
        if (infoLog == nullptr){
            printf("ERROR: Could not allocate InfoLog buffer");
            exit(1);
        }
        int charsWritten = 0;
        glGetShaderInfoLog(shaderProgram, infologLength, &charsWritten, infoLog);
        printf("Shader InfoLog:\n%s", infoLog );
        free(infoLog);
    }
    CHECK_GL_ERRORS();*/
    
    return shaderProgram;
}

GLuint createShader(){
    // Шейдер вершин
    const char* vertexShader = STRINGIFY_SHADER(
        // vertex attribute
        attribute vec3 aPos;
        attribute vec3 aColor;
        attribute vec2 aTexture;
        // uniforms
        uniform mat4 uModelViewProjMat;
        // output
        varying vec3 vColor;
        varying vec2 vTexture;
                                                
//        struct Light{
//        vec3 position;
//        vec3 color;
//
//        float  ambient;
//        vec3 diffuse;
//        vec3 specular;
//
//        float  constant;
//        float  liner;
//        float  quadratic;
//        };
//         Light Light = Light(
//                             vec3(0.5f, 1.0f, 0.0f),
//                             vec3(1.0f, 1,0f, 1,0f),
//                             0.4f,
//                             vec3(0.9f, 0.9f, 0,9f),
//                             vec3(1.0f, 1.0f, 1.0f),
//                             1.0f,
//                             0.09f,
//                             0.032f
//                             );
        void main () {
            vec4 vertexVec4 = vec4(aPos, 1.0);      // последняя компонента 1, тк это точка
            // вычисляем позицию точки в пространстве OpenGL
            gl_Position = uModelViewProjMat * vertexVec4;
            // цвет и текстурные координаты просто пробрасываем для интерполяции
            vColor = aColor;
            vTexture  = aTexture;
        
        
        }
    );
    const char* fragmentShader = STRINGIFY_SHADER(
        varying vec3 vColor;
        varying  vec2 vTexture;
        uniform sampler2D newTexture0;
        

        void main () {
            gl_FragColor = vec4(vColor, 1.0);
        gl_FragColor = texture2D(newTexture0, vTexture) * vec4(vColor, 1.0);
        if(abs(vTexture.x) < 0.1 && abs(vTexture.y) < 0.1)
        {
            discard;
        }
        }
    );

    GLuint shader = createShaderFromSources(vertexShader, fragmentShader);
    CHECK_GL_ERRORS();
    return shader;
}
