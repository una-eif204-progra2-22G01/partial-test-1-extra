//
// Created by Maikol Guzman on 9/17/20.
//

#include <Bike.h>
#include "gtest/gtest.h"


/**
 * Esta prueba permite calcular el costo final del alquiler del vehículo.
 * Total de horas para alquilar multiplicado por el precio por hora.
 */
TEST(BikeTestSuite, CalculateFinalRentPrice) {
    Bike bike;

    bike.setId(222);
    bike.setModel("Ibis Ripmo");
    bike.setDescription("V2 XT 2020");
    bike.setQuantity(10);
    bike.setPrice(10);
    bike.setType("MOUNTAIN");

    // Si una bicicleta se alquila 24 horas, al final el cliente tendría que pagar $240
    EXPECT_EQ(bike.finalRentPrice(24), 240);
}

/**
 * Esta prueba de unidad permite evaluar el toString() de la clase Bike
 */
TEST(BikeTestSuite, CheckToString){
    Bike bike;

    bike.setId(222);
    bike.setModel("Ibis Ripmo");
    bike.setDescription("V2 XT 2020");
    bike.setQuantity(10);
    bike.setPrice(10);
    bike.setType("MOUNTAIN");

    EXPECT_EQ(bike.toString(), "Vehicle id: 222, Model: Ibis Ripmo, Description: V2 XT 2020, Quantity: 10, "
                               "Price: $10.00, Type: MOUNTAIN");
}