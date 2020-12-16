#ifndef SCULPTOR_H
#define SCULPTOR_H
#include<string>
#include<vector>
#include <cmath>
#include <iostream>
#include <cstdlib>

using namespace std;
/**
 * @brief O tipo struct Voxel:
     * Voxels são como pixels, mas utilizados em imagens 3d (possuem 3 dimensões).
     * Os voxels tem como parametros suas  informações relativas a cor (red, green e blue) e transparência, além de um boleano que define se o voxel eh visivel ou nao.
     * @param r : float que define a intensidade de vermelho, podendo estar entre [0,1]
     * @param g : float que define a intensidade de verde, podendo estar entre [0,1]
     * @param b : float que define a intensidade de azul, podendo estar entre [0,1]
     * @param a : canal alfa, que define a transparencia do voxel, podendo estar entre [0,1]
     * @param isOn : define se o voxel esta ativo ou nao dentro da escultura, sendo 0 par desativado ou 1 para ativado
 */
struct Voxel{
    float r,g,b; /// Cores
    float a; /// Canal alpha
    bool isOn; /// Parametro que define se O voxel será exibido ou nao
};

/**
 * @brief A classe Sculptor
 * constroi um esqueleto onde serao adicionados os voxels e contem os metodos para manipular os pixels de uma matriz tridimensional
 */
class Sculptor
{

protected:
    /**
     * @brief voxel: representa a matriz tridimensional alocada dinamicamente - armazena todos os voxels
     */
    Voxel ***voxel;
    /**
     * @brief nx: define a dimensão no eixo x (numero de linhas da matriz)
     */
    int nx;
    /**
     * @brief ny: define a dimensão no eixo y (numero de colunas da matriz)
     */
    int ny;
    /**
     * @brief nz: define a dimensão no eixo z (numero de planos gerados)
     */
    int nz;
    /**
     * @brief r: representa a intensidade de vermelho, no intervalo de [0,1]
     */
    float r;
    /**
     * @brief g: intensidade atual da cor verde, varia entre [0,1]
     */
    float g;
    /**
     * @brief b: intensidade atual da cor azul, varia entre [0,1]
     */
    float b;
    /**
     * @brief a: representa a opacidade/transparencia, no intervalo de [0,1]
     */
    float a;
public:

     /**
     * @brief Sculptor: Construtor da classe Sculptor
     * @param _nx : dimensao em x (numero de linhas)
     * @param _ny : dimensao em y (numer de colunas)
     * @param _nz : dimensao em z (numero de planos)
     */
    Sculptor(int _nx, int _ny, int _nz);

    /**
      * @brief ~Sculptor: Destrutor da classe Sculptor
    */
    ~Sculptor();

    /**
     * @brief setColor : método que a cor atualmente selecionada do desenho
     * @param r : intensidade de vermelho, no intervalo [0,1]
     * @param g : intensidade de verde, no intervalo [0,1]
     * @param b : intensidade de azul, no intervalo [0,1]
     * @param alpha : transparencia do voxel, no intervalo [0,1]
     */
    void setColor(float r, float g, float b, float alpha);

    /**
     * @brief putVoxel : Define um voxel nas coordenadas (x,y,z). Torna isOn = true e voxel eh apresentado na cor de setColor.
     * @param x : coordenada em x
     * @param y : coordenada em y
     * @param z : coordenada em z
     */
    void putVoxel(int x, int y, int z);

    /**
     * @brief cutVoxel : Remove a exibição do voxel nas coordenadas (x,y,z) Torna isOn = false
     * @param x : coordenada em x
     * @param y : coordenada em y
     * @param z : coordenada em z
     */
    void cutVoxel(int x, int y, int z);
    
     /**
     * @brief writeOFF : metodo que grava a escultura de acordo com o formato OFF
     * @param filename : caminho do arquivo OFF
     */
    void writeOFF(string filename);
     /**
     * @brief limpaVoxels : metodo para limpar os voxels escondidos
     */
     void limparVoxels();


     // Funções auxiliares

     // metódo para verificar se o voxel esta dentro dos limites do escultor
    bool dentroDosLimites(int x, int y, int z);

   //método para inicializar a matriz 3D com voxels e com todos os campos iguais a zero
    void inicializaMatriz3D();

  };



#endif // SCULPTOR_H
