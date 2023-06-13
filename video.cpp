#include "video.h"
#include <iostream>

Video::Video(int id, std::string nombre, int dur, float calif, std::string fecha)
    : id_video(id), nombre_video(nombre), duracion(dur), calificacion(calif), fecha_estreno(fecha) {}

Video::~Video() {}

int Video::getId() const {
    return id_video;
}

std::string Video::getNombre() const {
    return nombre_video;
}

int Video::getDuracion() const {
    return duracion;
}

float Video::getCalificacion() const {
    return calificacion;
}

std::string Video::getFechaEstreno() const {
    return fecha_estreno;
}

void Video::setCalificacion(float calif) {
    calificacion = calif;
}

void Video::imprimir() const {
    std::cout << "ID: " << id_video << std::endl;
    std::cout << "Nombre: " << nombre_video << std::endl;
    std::cout << "Duración: " << duracion << " minutos" << std::endl;
    std::cout << "Calificación: " << calificacion << std::endl;
    std::cout << "Fecha de estreno: " << fecha_estreno << std::endl;
}
