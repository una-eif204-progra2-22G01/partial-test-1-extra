//
// Created by Maikol Guzman on 9/17/20.
//

#include <Motorcycle.h>
#include "gtest/gtest.h"

/**
 * Esta prueba permite evaluar que las motos tenga un descuento de 25% sobre el precio por hora que se alquila,
 * este descuento es único para este tipo de vehículo.
 */
TEST(MotorcycleTestSuite, CalculatePriceWithDiscount) {
    Motorcycle motorcycle;

    motorcycle.setId(111);
    motorcycle.setModel("BMW R1200");
    motorcycle.setDescription("Moto BMW R1200");
    motorcycle.setQuantity(5);
    motorcycle.setPrice(25);
    motorcycle.setDriveLicense(true);
    motorcycle.setFuelType("PREMIUM");
    motorcycle.setMotorPotency(1200);

    // Recordar que existe un descuento de 25% sobre el costo por hora de alquiler para las motos
    EXPECT_EQ(motorcycle.calculatePrice(),18.75);
}

/**
 * Esta prueba permite evaluar el proceso denominado "ProcessInsurance" que se le aplican únicamente a los
 * vehículos de tipo Moto
 */
TEST(MotorcycleTestSuite, ProcessInsurance) {
    Motorcycle motorcycle;

    motorcycle.setId(111);
    motorcycle.setModel("BMW R1200");
    motorcycle.setDescription("Moto BMW R1200");
    motorcycle.setQuantity(5);
    motorcycle.setPrice(25);
    motorcycle.setDriveLicense(true);
    motorcycle.setFuelType("PREMIUM");
    motorcycle.setMotorPotency(1200);

    EXPECT_EQ(motorcycle.processInsurance(),"SE PROCESA UN SEGURO DE MOTO");
}

/**
 * Esta prueba permite calcular el costo final con el descuento inicial de 25% sobre el precio por hora de alquiler
 * por la cantidad de horas que se alquile el vehículo
 */
TEST(MotorcycleTestSuite, CalculateFinalRentPrice) {
    Motorcycle motorcycle;

    motorcycle.setId(111);
    motorcycle.setModel("BMW R1200");
    motorcycle.setDescription("Moto BMW R1200");
    motorcycle.setQuantity(5);
    motorcycle.setPrice(25);
    motorcycle.setDriveLicense(true);
    motorcycle.setFuelType("PREMIUM");
    motorcycle.setMotorPotency(1200);

    // Si una moto se alquila 24 horas, al final el cliente tendría que pagar $450
    EXPECT_EQ(motorcycle.finalRentPrice(24),450);
}

/**
 * Esta prueba de unidad permite evaluar el toString() de la clase Motorcycle
 */
TEST(MotorcycleTestSuite, CheckToString){
    Motorcycle motorcycle;

    motorcycle.setId(111);
    motorcycle.setModel("BMW R1200");
    motorcycle.setDescription("Moto BMW R1200");
    motorcycle.setQuantity(5);
    motorcycle.setPrice(25);
    motorcycle.setDriveLicense(true);
    motorcycle.setFuelType("PREMIUM");
    motorcycle.setMotorPotency(1200);

    EXPECT_EQ(motorcycle.toString(),"Vehicle id: 111, Model: BMW R1200, Description: Moto BMW R1200, "
                                    "Quantity: 5, Price: $18.75, Drive License: Yes, "
                                    "Fuel Type: PREMIUM, Motor Potency: 1200");
}