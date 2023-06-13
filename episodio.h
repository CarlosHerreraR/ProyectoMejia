#ifndef EPISODIO_H
#define EPISODIO_H

#include "video.h"
#include "consultas.h"

class Episodio : public Video, public Consultas {
private:
    int numEpisodio;
    int temporada;

public:
    Episodio(int id, std::string nombre, int dur, float calif, std::string fecha, int numEp, int temp);

    int getNumEpisodio() const;
    int getTemporada() const;

    void imprimir() const override;
    void calificarVideo(const std::string& nombre, float calificacion) override;
    void videosPorCalificacion(float calificacion) override;
    void videosPorGenero(const std::string& genero) override;
    void episodiosPorSerie(const std::string& nombreSerie) override;
    void peliculasPorCalificacion(float calificacion) override;
};

#endif  // EPISODIO_H
