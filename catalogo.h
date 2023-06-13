#ifndef CATALOGO_H
#define CATALOGO_H

#include "pelicula.h"
#include "serie.h"
#include <vector>
#include <memory>

class Catalogo {
private:
    std::vector<std::shared_ptr<Pelicula>> catalogo_peliculas;
    std::vector<std::shared_ptr<Serie>> catalogo_series;

public:
    void agregarPelicula(std::shared_ptr<Pelicula> pelicula);
    void agregarSerie(std::shared_ptr<Serie> serie);

    void verTodo() const;
    void episodiosPorSerie(const std::string& nombreSerie) const;
    void videosPorGenero(const std::string& genero) const;
    void calificarVideo(const std::string& nombre, float calificacion);
    void peliculasPorCalificacion(float calificacion) const;
};

#endif  // CATALOGO_H
