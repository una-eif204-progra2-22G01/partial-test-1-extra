//
// Created by Maikol Guzman on 5/21/21.
//

#include <IRentPayment.h>
#include <CashPayment.h>
#include <OnlinePayment.h>
#include <PhonePayment.h>
#include "gtest/gtest.h"

/**
 * El siguiente test es para verificar la siguiente afirmación:
 * - Si se paga *online* se le tiene que cobrar un 1% para efectos de el envío.
 */
TEST(PaymentTestSuite, OnlinePayment) {
    IRentPayment *onlinePayment = new OnlinePayment();
    std::string result = onlinePayment->processPayment(100);

    EXPECT_EQ(result,
              "Se paga por el website. $100.00, se le cobra un envio de: $1.00, TOTAL A PAGAR: $101.00");
}

/**
 * El siguiente test es para verificar la siguiente afirmación:
 * - SAl pagar por teléfono se acumulan 25 puntos por cada $100.
 */
TEST(PaymentTestSuite, PhonePayment) {
    IRentPayment *phonePayment = new PhonePayment();
    std::string resultLower = phonePayment->processPayment(1049);
    std::string resultHigher = phonePayment->processPayment(1099);


    EXPECT_EQ(resultLower,
              "Se paga por el telefono un total de $1049.00 y se acumulan: 250 puntos");
    EXPECT_EQ(resultHigher,
              "Se paga por el telefono un total de $1099.00 y se acumulan: 275 puntos");
}

/**
 * El siguiente test es para verificar la siguiente afirmación:
 * - Cualquier vehículo que se alquile y se pague en efectivo. Tiene un descuento del 5%.
 */
TEST(PaymentTestSuite, CashPayment) {
    IRentPayment *cashPayment = new CashPayment();
    std::string result = cashPayment->processPayment(100);

    EXPECT_EQ(result,
              "Se paga con efectivo y tiene un descuento del 5%. $95.00");
}