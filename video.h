#ifndef VIDEO_H
#define VIDEO_H

#include <string>

class Video {
private:
    int id_video;
    std::string nombre_video;
    int duracion;
    float calificacion;
    std::string fecha_estreno;

public:
    Video(int id, std::string nombre, int dur, float calif, std::string fecha);
    virtual ~Video();

    int getId() const;
    std::string getNombre() const;
    int getDuracion() const;
    float getCalificacion() const;
    std::string getFechaEstreno() const;
    void setCalificacion(float calif);

    virtual void imprimir() const;
};

#endif  // VIDEO_H
