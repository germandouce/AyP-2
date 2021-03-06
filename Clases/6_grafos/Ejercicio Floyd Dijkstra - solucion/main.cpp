#include "Grafo.h"

int main() {
    Grafo grafo;
    grafo.agregarVertice("A");
    grafo.agregarVertice("B");
    grafo.agregarVertice("C");
    grafo.agregarVertice("D");
    grafo.agregarVertice("E");
    grafo.agregarVertice("F");


    grafo.agregarCamino("A", "C", 8);
    grafo.agregarCamino("C", "B", 7);
    grafo.agregarCamino("C", "D", 5);
    grafo.agregarCamino("D", "B", 1);
    grafo.agregarCamino("E", "A", 1);
    grafo.agregarCamino("E", "D", 5);


    grafo.mostrarGrafo();

    grafo.usarFloyd();
    grafo.caminoMinimo("A", "B");
    grafo.caminoMinimo("A", "F");
    grafo.caminoMinimo("D", "C");
    grafo.caminoMinimo("F", "F");

    grafo.usarDijkstra();
    grafo.caminoMinimo("A", "B");
    grafo.caminoMinimo("A", "F");
    grafo.caminoMinimo("D", "C");
    grafo.caminoMinimo("F", "F");

    return 0;
}
