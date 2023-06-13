#include "episodio.h"
#include <iostream>

Episodio::Episodio(int id, std::string nombre, int dur, float calif, std::string fecha, int numEp, int temp)
    : Video(id, nombre, dur, calif, fecha), numEpisodio(numEp), temporada(temp) {}

int Episodio::getNumEpisodio() const {
    return numEpisodio;
}

int Episodio::getTemporada() const {
    return temporada;
}

void Episodio::imprimir() const {
    std::cout << "Episodio:" << std::endl;
    Video::imprimir();
    std::cout << "Número de episodio: " << numEpisodio << std::endl;
    std::cout << "Temporada: " << temporada << std::endl;
}

void Episodio::calificarVideo(const std::string& nombre, float calificacion) {
    if (getNombre() == nombre) {
        setCalificacion(calificacion);
        std::cout << "Calificación actualizada para el episodio \"" << nombre << "\"" << std::endl;
    } else {
        std::cout << "No se encontró ningún episodio con ese nombre." << std::endl;
    }
}

void Episodio::videosPorCalificacion(float calificacion) {
    if (getCalificacion() > calificacion) {
        imprimir();
        std::cout << std::endl;
    }
}

void Episodio::videosPorGenero(const std::string& genero) {
    // No se implementa en la clase Episodio
}

void Episodio::episodiosPorSerie(const std::string& nombreSerie) {
    if (nombreSerie == getNombre()) {
        imprimir();
        std::cout << std::endl;
    }
}

void Episodio::peliculasPorCalificacion(float calificacion) {
    // No hay películas en un episodio, no se realiza ninguna acción
}
