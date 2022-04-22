//
// Created by Maikol Guzman on 5/21/21.
//

#include <IRentPayment.h>
#include <OnlinePayment.h>
#include <VehicleRentManager.h>
#include <CashPayment.h>
#include <PhonePayment.h>
#include <Scooter.h>
#include <Bike.h>
#include <Motorcycle.h>
#include "gtest/gtest.h"

/**
 * El siguiente test permite procesar pago al momento de alquilar un Scooter, dependiendo del tipo de pago
 * existe un proceso distinto.
 * NOTA: Si paga en efectivo tiene un 5% de descuento.
 */
TEST(VehicleManagerTestSuite, ScooterPayment) {
    IRentPayment *onlinePayment = new OnlinePayment();
    IRentPayment *cashPayment = new CashPayment();
    IRentPayment *phonePayment = new PhonePayment();

    IRentVehicle *scooterRentVehicle = new Scooter(333,"GigaByke Groove",
                                                   "Best electric scooter", 10, 5, 20);

    VehicleRentManager vehicleRentManager ;

    // Si una bicicleta se alquila 5 horas y se paga por el website
    EXPECT_EQ(vehicleRentManager.payment(scooterRentVehicle, onlinePayment, 5),
              "Se paga por el website. $25.00, se le cobra un envio de: $0.25, TOTAL A PAGAR: $25.25");
    // Si una bicicleta se alquila 5 horas y se paga en efectivo. Tiene un descuento del 5%
    EXPECT_EQ(vehicleRentManager.payment(scooterRentVehicle, cashPayment, 5),
              "Se paga con efectivo y tiene un descuento del 5%. $23.75");
    // Si una bicicleta se alquila 55 horas y se paga por el telefono
    EXPECT_EQ(vehicleRentManager.payment(scooterRentVehicle, phonePayment, 55),
              "Se paga por el telefono un total de $247.50 y se acumulan: 50 puntos");
}

/**
 * El siguiente test permite procesar pago al momento de alquilar una Bicicleta, dependiendo del tipo de pago
 * existe un proceso distinto.
 * NOTA: Si paga en efectivo tiene un 5% de descuento.
 */
TEST(VehicleManagerTestSuite, BikePayment) {
    IRentPayment *onlinePayment = new OnlinePayment();
    IRentPayment *cashPayment = new CashPayment();
    IRentPayment *phonePayment = new PhonePayment();

    IRentVehicle *bikeRentVehicle = new Bike(222, "Ibis Ripmo",
                                             "V2 XT 2020", 10, 10, "MOUNTAIN");

    VehicleRentManager vehicleRentManager ;

    // Si una bicicleta se alquila 24 horas y se paga por el website
    EXPECT_EQ(vehicleRentManager.payment(bikeRentVehicle, onlinePayment, 24),
              "Se paga por el website. $240.00, se le cobra un envio de: $2.40, TOTAL A PAGAR: $242.40");
    // Si una bicicleta se alquila 24 horas y se paga en efectivo. Tiene un descuento del 5%
    EXPECT_EQ(vehicleRentManager.payment(bikeRentVehicle, cashPayment, 24),
              "Se paga con efectivo y tiene un descuento del 5%. $228.00");
    // Si una bicicleta se alquila 55 horas y se paga por el telefono
    EXPECT_EQ(vehicleRentManager.payment(bikeRentVehicle, phonePayment, 55),
              "Se paga por el telefono un total de $550.00 y se acumulan: 150 puntos");
}

/**
 * El siguiente test permite procesar pago al momento de alquilar una Moto, dependiendo del tipo de pago
 * existe un proceso distinto.
 * NOTA: Si paga en efectivo tiene un 5% de descuento.
 */
TEST(VehicleManagerTestSuite, MotorcyclePayment) {
    IRentPayment *onlinePayment = new OnlinePayment();
    IRentPayment *cashPayment = new CashPayment();
    IRentPayment *phonePayment = new PhonePayment();

    IRentVehicle *motorcycleRentVehicle = new Motorcycle(111, "BMW R1200",
                                                         "Moto BMW R1200", 5, 25, true,
                                                         "PREMIUM", 1200);

    VehicleRentManager vehicleRentManager ;

    // Si una moto se alquila 24 horas y se paga por el website
    EXPECT_EQ(vehicleRentManager.payment(motorcycleRentVehicle, onlinePayment, 24),
              "Se paga por el website. $450.00, se le cobra un envio de: $4.50, TOTAL A PAGAR: $454.50");
    // Si una moto se alquila 24 horas y se paga en efectivo. Tiene un descuento del 5%
    EXPECT_EQ(vehicleRentManager.payment(motorcycleRentVehicle, cashPayment, 24),
              "Se paga con efectivo y tiene un descuento del 5%. $427.50");
    // Si una moto se alquila 55 horas y se paga por el telefono
    EXPECT_EQ(vehicleRentManager.payment(motorcycleRentVehicle, phonePayment, 55),
              "Se paga por el telefono un total de $1031.25 y se acumulan: 250 puntos");
}