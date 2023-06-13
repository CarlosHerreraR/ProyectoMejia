#ifndef SERIE_H
#define SERIE_H

#include "video.h"
#include "consultas.h"
#include "episodio.h"
#include <vector>
#include <memory>

class Serie : public Video, public Consultas {
private:
    int id;
    std::string nombreSerie;
    std::string genero;
    std::vector<std::shared_ptr<Episodio>> episodios;

public:
    Serie(int id, std::string nombre, int dur, float calif, std::string fecha, std::string nombreS, std::string genre);

    int getId() const;
    std::string getNombreSerie() const;
    std::string getGenero() const;
    void addEpisodio(std::shared_ptr<Episodio> episodio);

    void imprimir() const override;
    void calificarVideo(const std::string& nombre, float calificacion) override;
    void videosPorCalificacion(float calificacion) override;
    void videosPorGenero(const std::string& genero) override;
    void episodiosPorSerie(const std::string& nombreSerie) override;
    void peliculasPorCalificacion(float calificacion) override;
};

#endif  // SERIE_H
