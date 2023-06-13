#include "serie.h"
#include <iostream>

Serie::Serie(int id, std::string nombre, int dur, float calif, std::string fecha, std::string nombreS, std::string genre)
    : Video(id, nombre, dur, calif, fecha), id(id), nombreSerie(nombreS), genero(genre) {}

int Serie::getId() const {
    return id;
}

std::string Serie::getNombreSerie() const {
    return nombreSerie;
}

std::string Serie::getGenero() const {
    return genero;
}

void Serie::addEpisodio(std::shared_ptr<Episodio> episodio) {
    episodios.push_back(episodio);
}

void Serie::imprimir() const {
    std::cout << "Serie:" << std::endl;
    Video::imprimir();
    std::cout << "Nombre de la serie: " << nombreSerie << std::endl;
    std::cout << "Género: " << genero << std::endl;
    std::cout << "Episodios:" << std::endl;
    for (const auto& episodio : episodios) {
        episodio->imprimir();
        std::cout << std::endl;
    }
}

void Serie::calificarVideo(const std::string& nombre, float calificacion) {
    for (const auto& episodio : episodios) {
        if (episodio->getNombre() == nombre) {
            episodio->setCalificacion(calificacion);
            std::cout << "Calificación actualizada para el episodio \"" << nombre << "\"" << std::endl;
            return;
        }
    }

    std::cout << "No se encontró ningún episodio con ese nombre." << std::endl;
}

void Serie::videosPorCalificacion(float calificacion) {
    if (getCalificacion() > calificacion) {
        imprimir();
        std::cout << std::endl;
    }

    for (const auto& episodio : episodios) {
        episodio->videosPorCalificacion(calificacion);
    }
}

void Serie::videosPorGenero(const std::string& genero) {
    if (getGenero() == genero) {
        imprimir();
        std::cout << std::endl;
    }

    for (const auto& episodio : episodios) {
        episodio->videosPorGenero(genero);
    }
}

void Serie::episodiosPorSerie(const std::string& nombreSerie) {
    if (nombreSerie == getNombreSerie()) {
        imprimir();
        std::cout << std::endl;
    }
}

void Serie::peliculasPorCalificacion(float calificacion) {
    // No se implementa en la clase Serie
}
