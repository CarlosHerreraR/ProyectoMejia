#include "pelicula.h"
#include <iostream>

Pelicula::Pelicula(int id, std::string nombre, int dur, float calif, std::string fecha, std::string genre)
    : Video(id, nombre, dur, calif, fecha), genero(genre) {}

std::string Pelicula::getGenero() const {
    return genero;
}

void Pelicula::setGenero(const std::string& genre) {
    genero = genre;
}

void Pelicula::imprimir() const {
    std::cout << "Película:" << std::endl;
    Video::imprimir();
    std::cout << "Género: " << genero << std::endl;
}

void Pelicula::calificarVideo(const std::string& nombre, float calificacion) {
    if (getNombre() == nombre) {
        setCalificacion(calificacion);
        std::cout << "Calificación actualizada para la película \"" << nombre << "\"" << std::endl;
    } else {
        std::cout << "No se encontró ninguna película con ese nombre." << std::endl;
    }
}

void Pelicula::videosPorCalificacion(float calificacion) {
    if (getCalificacion() > calificacion) {
        imprimir();
        std::cout << std::endl;
    }
}

void Pelicula::videosPorGenero(const std::string& genero) {
    if (getGenero() == genero) {
        imprimir();
        std::cout << std::endl;
    }
}

void Pelicula::episodiosPorSerie(const std::string& nombreSerie) {
    // No hay episodios en una película, no se realiza ninguna acción
}

void Pelicula::peliculasPorCalificacion(float calificacion) {
    if (getCalificacion() > calificacion) {
        imprimir();
        std::cout << std::endl;
    }
}
