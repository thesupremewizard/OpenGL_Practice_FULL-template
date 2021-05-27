#include "ObjLoader.h"
#include <cstdlib>
#include <glm.hpp>
#include <assimp/Importer.hpp>
#include <assimp/scene.h>
#include <assimp/postprocess.h>

using namespace std;
using namespace glm;


/*
void loadObjModel(const string& modelPath, std::vector<Vertex>& resultVertexes){
    Assimp::Importer importer;

    const aiScene* scene = importer.ReadFile(modelPath.c_str(), aiProcess_ValidateDataStructure |
                                                                aiProcess_Triangulate |
                                                                aiProcess_OptimizeMeshes);

    // подсчет количества вершин и индексов
    scene->mNumMeshes;
    mesh = scene->mMeshes[i];
    mesh->numVertex;
    mesh->mNumFaces * 3;
    vector<vec3>vertexCount(mesh->mNumFaces * 3);
    vector<vec3> indices();
    
    
    // Временные буфферы для хранения вершин и индексов

    // Копируем во временные буфферы буфферы

    // Резервируем память в массиве результата

    // Вбиваем по индексам в массив вершин

}
*/

