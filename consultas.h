#ifndef CONSULTAS_H
#define CONSULTAS_H

#include <string>

class Consultas {
public:
    virtual void calificarVideo(const std::string& nombre, float calificacion) = 0;
    virtual void videosPorCalificacion(float calificacion) = 0;
    virtual void videosPorGenero(const std::string& genero) = 0;
    virtual void episodiosPorSerie(const std::string& nombreSerie) = 0;
    virtual void peliculasPorCalificacion(float calificacion) = 0;
};

#endif  // CONSULTAS_H
