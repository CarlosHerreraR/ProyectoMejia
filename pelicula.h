#ifndef PELICULA_H
#define PELICULA_H

#include "video.h"
#include "consultas.h"

class Pelicula : public Video, public Consultas {
private:
    std::string genero;

public:
    Pelicula(int id, std::string nombre, int dur, float calif, std::string fecha, std::string genre);

    std::string getGenero() const;
    void setGenero(const std::string& genre);

    void imprimir() const override;
    void calificarVideo(const std::string& nombre, float calificacion) override;
    void videosPorCalificacion(float calificacion) override;
    void videosPorGenero(const std::string& genero) override;
    void episodiosPorSerie(const std::string& nombreSerie) override;
    void peliculasPorCalificacion(float calificacion) override;
};

#endif  // PELICULA_H
