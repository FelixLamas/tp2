#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

#define cant 5

struct compu 
{
    int velocidad;//entre 1 y 3 Gherz
    int anio;//entre 2000 y 2017
    int cantidad;//entre 1 y 4
    char *tipo_cpu; //valores del arreglo tipos
};

void CargarEquipos(struct compu equipo[], char tipos[6][10]);
void MostrarEquipos(struct compu equipos[], int n);
void EquipoViejo(struct compu equipos[]);
int main()
{
    char tipos[6][10] = {"Intel", "AMD", "Celeron", "Athlon", "Core", "Pentium"};
    struct compu equipos[cant];
    int n=cant;
    srand(time(NULL));

    CargarEquipos(equipos, tipos);
    MostrarEquipos(equipos, n);
    printf("-------------------------------------------------------------------\n");
    EquipoViejo(equipos);
    getchar();
    return 0;
}

void CargarEquipos(struct compu equipo[], char tipos[6][10])
{
    for (int i = 0; i < cant; i++)
    {
        equipo[i].velocidad = 1+rand()%3;
        equipo[i].anio = 2000 + rand() % 17;
        equipo[i].cantidad = 1 + rand() % 4;
        equipo[i].tipo_cpu = &tipos[ rand() % 5][10];
    }
}

void MostrarEquipos(struct compu equipos[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("El equipo %d:\n", (i + 1));
        printf("Velocidad del procesador: %d\n", equipos[i].velocidad);
        printf("Año del equipo: %d\n", equipos[i].anio);
        printf("Cantidad de equipos: %d\n", equipos[i].cantidad);
        printf("tipo de procesador: %s\n", equipos[i].tipo_cpu);
    }
    
}

void EquipoViejo(struct compu equipos[])
{
    int indexV;
    struct compu equipoViejo[1];
    for (int i = 0; i < cant; i++)
    {
        if (i==0)
        {
            indexV = i;
        }
        else
        {
            if (equipos[i].anio < equipos[indexV].anio)
            {
                indexV = i;
            }   
        }
        
    }
    equipoViejo[0] = equipos[indexV];
    printf("El equipo mas viejo es:\n");
    MostrarEquipos(equipoViejo, 1);
   
}