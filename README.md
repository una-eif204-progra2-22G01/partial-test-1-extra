# Programación 2 - Examen Parcial 1

| CODIGO: EIF204                         | ESCUELA DE INFORMÁTICA       |
| -------------------------------------- | ---------------------------- |
| NOMBRE: PROGRAMACIÓN II                | PROFESOR: Maikol Guzmán Alán |
| VALOR: 20% - Tiempo Aproximado 8 horas | Puntaje total:  100 puntos   |

## Temas a evaluar

- Herencia
- Relaciones de clases
- Clases abstractas
  - Funciones Virtuales Puras
  - Interfaces
- Principios de diseño (SOLID)

## Descripción del examen

El objetivo del examen es desarrollar una aplicacion para  alquilar Bicicletas, Motos o Scooters. 

Para desarrollar el examen se debe realizar lo siguiente:

- Analizar las pruebas de unidad y a partir de ahi construir el examen.
- Crear el diagrama de UML de clases.
- Correr todas las pruebas de unidad.

### Aspectos importantes:

1. Existen tres entidades principales (Motocycle, Bike y Scooter)
   - Motorcycle: 
     - Se caracteriza porque el simple alquiler de las motos tiene un 25% de descuento sin importar el tipo de pago o el tipo de moto.
     - Las motos tienen un proceso para asegurarlas. El resultado de ese proceso se representa con un mensaje que dice: "SE PROCESA UN SEGURO DE MOTO".
     - El precio final de alquiler se caracteríza porque el valor de entrada son las horas de alquiler.
   - Bicicleta:
     - El precio final de alquiler se caracteríza porque el valor de entra son las horas de alquiler.
   - Scooter:
     - El precio final de alquiler se caracteríza porque el valor de entra son las horas de alquiler.
     - Si el scooter se alquila con menos de 24 horas, el precio es el inicial **SIN DESCUENTO** multiplicado por el total de horas.
     - Si el scooter se alquila más de 24 horas, **el precio original por hora tiene un descuento del 10%**, donde el precio final es lo mismo que decir: precio por hora menos 10% descuento por el total de horas alquilado.
2. Proceso de Renta:
   - Existen tres formas de pago:
     - Online
       - Si se paga *online* se le tiene que cobrar un 1% para efectos de el envío.
       - Procesa el pago con el siguiente mensaje de regreso: "Se paga por el website. $0.00, se le cobra un envio de: $0.00, TOTAL A PAGAR: $0.00"
     - Telefono
       - Al pagar por teléfono se acumulan 25 puntos por cada $100. **Se aplica el redondeo** 
       - Procesa el pago con el siguiente mensaje de regreso: "Se paga por el telefono un total de $0.00 y se acumulan: 0 puntos"
     - Efectivo
       - Cualquier vehículo que se alquile y se pague en efectivo. Tiene un descuento del 5%.
       - Procesa el pago con el siguiente mensaje de regreso: "Se paga con efectivo y tiene un descuento del 5%. $0.00"



## Evaluación

| Detalle                                                      | Puntaje |
| ------------------------------------------------------------ | ------- |
| [ **ESTÁNDARES** ] Uso correcto de nombre de variables, métodos y clases con estructura correcta. | 10      |
| [ **POO** ] Uso correcto de la herencia, el polimorfismo y el encapsulamiento | 15      |
| [ **SOLID** ] Implementación correcta de los principios de diseño (**S**RP – Single Responsibility Principle, **O**CP – Open/Closed Principle, **L**SP – Liskov's Substitution Principle) | 20      |
| [ **SOLID - DESCRIPCIÓN** ] Describir la aplicación de los principios de SOLID implementados en este ejercicio. **Incluirlos como comentarios dentro del código.** | 15      |
| [ **UML** ] Diseño del diagrama de clases utilizando el respectivo estándar de desarrollo. | 10      |
| [ **CÁLCULOS** ] Implementación correcta de los procesos de cálculo. | 15      |
| [ **TESTING** ] Las pruebas de verificación deben de correr para validar el examen | 15      |

## Reglas

1. Subir al GitHub del proyecto todos los archivos necesarios para ejecutar las pruebas unitarias.
   - Tener como mínimo *diferentes commits en dias distintos* para certificar el progreso del examen en tiempos normales. **En caso de no cumplirlo se le rebaja 25% al total del examen.** (El objetivo de esta restricción es prevenir que los estudiantes hagan fraude, si el estudiante hace todos los commits en un mismo día, se va a solicitar explicación al estudiante y se somete a revisión adicional para evitar el plagio)
2. Si se encuentra plagio o copias entre estudiantes se anula el examen de acuerdo al reglamento de la universidad.
3. El profesor únicamente revisa lo que esta en el repositório hasta la fecha de entrega. Cualquier entrega posterior a la fecha acordada se declara examen perdido con 0.