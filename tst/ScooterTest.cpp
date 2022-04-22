//
// Created by Maikol Guzman on 9/17/20.
//

#include <Scooter.h>
#include "gtest/gtest.h"

/**
 * Esta prueba permite calcular el costo final del alquiler del vehículo.
 * Si el scooter se alquila menos de 24 horas, el precio es el inicial SIN DESCUENTO multiplicado por el total de horas
 * Si el scooter se alquila mas de 24 horas, el precio original por hora tiene un descuento del 10%, donde el precio
 * final es lo mismo que decir: precio por hora menos 10% descuento por el total de horas alquilado.
 */
TEST(ScooterTestSuite, CalculateFinalRentPrice) {
    Scooter scooter;

    scooter.setId(333);
    scooter.setModel("GigaByke Groove");
    scooter.setDescription("Best electric scooter");
    scooter.setQuantity(10);
    scooter.setPrice(5);
    scooter.setMileage(20);

    // Si una bicicleta se alquila menos de 24 horas, al final el cliente tendría que pagar $25
    EXPECT_EQ(scooter.finalRentPrice(5), 25);
    // Si una bicicleta se alquila más de 24 horas, al final el cliente tendría que pagar $112.5 porque tiene un
    // descuento de 10%
    EXPECT_EQ(scooter.finalRentPrice(25), 112.5);
}

/**
 * Esta prueba de unidad permite evaluar el toString() de la clase Scooter
 */
TEST(ScooterTestSuite, CheckToString){
    Scooter scooter;

    scooter.setId(333);
    scooter.setModel("GigaByke Groove");
    scooter.setDescription("Best electric scooter");
    scooter.setQuantity(10);
    scooter.setPrice(5);
    scooter.setMileage(20);

    EXPECT_EQ(scooter.toString(), "Vehicle id: 333, Model: GigaByke Groove, "
                                  "Description: Best electric scooter, Quantity: 10, Price: $5.00, Mileage: 20");
}