#include "catalogo.h"
#include <iostream>

void Catalogo::agregarPelicula(std::shared_ptr<Pelicula> pelicula) {
    catalogo_peliculas.push_back(pelicula);
}

void Catalogo::agregarSerie(std::shared_ptr<Serie> serie) {
    catalogo_series.push_back(serie);
}

void Catalogo::verTodo() const {
    std::cout << "Catálogo:" << std::endl;
    std::cout << "Películas:" << std::endl;
    for (const auto& pelicula : catalogo_peliculas) {
        pelicula->imprimir();
        std::cout << std::endl;
    }

    std::cout << "Series:" << std::endl;
    for (const auto& serie : catalogo_series) {
        serie->imprimir();
        std::cout << std::endl;
    }
}

void Catalogo::episodiosPorSerie(const std::string& nombreSerie) const {
    for (const auto& serie : catalogo_series) {
        serie->episodiosPorSerie(nombreSerie);
    }
}

void Catalogo::videosPorGenero(const std::string& genero) const {
    std::cout << "Películas por género \"" << genero << "\":" << std::endl;
    for (const auto& pelicula : catalogo_peliculas) {
        pelicula->videosPorGenero(genero);
    }

    std::cout << "Series por género \"" << genero << "\":" << std::endl;
    for (const auto& serie : catalogo_series) {
        serie->videosPorGenero(genero);
    }
}

void Catalogo::calificarVideo(const std::string& nombre, float calificacion) {
    for (const auto& pelicula : catalogo_peliculas) {
        pelicula->calificarVideo(nombre, calificacion);
    }

    for (const auto& serie : catalogo_series) {
        serie->calificarVideo(nombre, calificacion);
    }
}

void Catalogo::peliculasPorCalificacion(float calificacion) const {
    std::cout << "Películas con calificación mayor a " << calificacion << ":" << std::endl;
    for (const auto& pelicula : catalogo_peliculas) {
        pelicula->peliculasPorCalificacion(calificacion);
    }
}
