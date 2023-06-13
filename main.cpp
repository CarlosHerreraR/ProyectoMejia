#include "catalogo.h"
#include <iostream>

void mostrarMenu() {
    std::cout << "----- Menú -----" << std::endl;
    std::cout << "1. Ver todo el catálogo" << std::endl;
    std::cout << "2. Ver episodios de una serie" << std::endl;
    std::cout << "3. Ver películas y series por género" << std::endl;
    std::cout << "4. Ver películas y series por calificación" << std::endl;
    std::cout << "5. Ver películas por calificación" << std::endl;
    std::cout << "6. Calificar películas o series" << std::endl;
    std::cout << "7. Salir" << std::endl;
    std::cout << "Ingrese una opción: ";
}

int main() {
    Catalogo catalogo;

    // Crear películas
    auto pelicula1 = std::make_shared<Pelicula>(1, "Pelicula 1", 120, 8.5, "2022-01-01", "Acción");
    auto pelicula2 = std::make_shared<Pelicula>(2, "Pelicula 2", 90, 7.9, "2022-02-01", "Comedia");
    auto pelicula3 = std::make_shared<Pelicula>(3, "Pelicula 3", 105, 6.7, "2022-03-01", "Drama");
    catalogo.agregarPelicula(pelicula1);
    catalogo.agregarPelicula(pelicula2);
    catalogo.agregarPelicula(pelicula3);

    // Crear episodios
    auto episodio1 = std::make_shared<Episodio>(1, "Episodio 1", 30, 8.8, "2022-01-01", 1, 1);
    auto episodio2 = std::make_shared<Episodio>(2, "Episodio 2", 30, 7.5, "2022-01-08", 1, 2);
    auto episodio3 = std::make_shared<Episodio>(3, "Episodio 3", 30, 9.2, "2022-01-15", 1, 3);

    // Crear serie
    auto serie1 = std::make_shared<Serie>(1, "Serie 1", 30, 9.0, "2022-01-01", "Serie", "Drama");
    serie1->addEpisodio(episodio1);
    serie1->addEpisodio(episodio2);
    serie1->addEpisodio(episodio3);
    catalogo.agregarSerie(serie1);

    int opcion;
    bool salir = false;

    while (!salir) {
        mostrarMenu();
        std::cin >> opcion;

        switch (opcion) {
            case 1:
                catalogo.verTodo();
                break;
            case 2: {
                std::string nombreSerie;
                std::cout << "Ingrese el nombre de la serie: ";
                std::cin.ignore();
                std::getline(std::cin, nombreSerie);
                catalogo.episodiosPorSerie(nombreSerie);
                break;
            }
            case 3: {
                std::string genero;
                std::cout << "Ingrese el género: ";
                std::cin.ignore();
                std::getline(std::cin, genero);
                catalogo.videosPorGenero(genero);
                break;
            }
            case 4: {
                float calificacion;
                std::cout << "Ingrese la calificación: ";
                std::cin >> calificacion;
                catalogo.peliculasPorCalificacion(calificacion);
                break;
            }
            case 5: {
                float calificacion;
                std::cout << "Ingrese la calificación: ";
                std::cin >> calificacion;
                catalogo.peliculasPorCalificacion(calificacion);
                break;
            }
            case 6: {
                std::string nombre;
                float calificacion;
                std::cout << "Ingrese el nombre del video: ";
                std::cin.ignore();
                std::getline(std::cin, nombre);
                std::cout << "Ingrese la calificación: ";
                std::cin >> calificacion;
                catalogo.calificarVideo(nombre, calificacion);
                break;
            }
            case 7:
                salir = true;
                break;
            default:
                std::cout << "Opción inválida. Intente nuevamente." << std::endl;
                break;
        }

        std::cout << std::endl;
    }

    return 0;
}
