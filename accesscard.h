#ifndef ACCESSCARD_H
#define ACCESSCARD_H
#include <QtSerialPort/QSerialPort> // classe rassemblant des fcts permettant l'échange des données
#include <QtSerialPort/QSerialPortInfo> // classe fournissants des infos sur les ports dispo
#include <QDebug>



class AccessCard
{

public:     //méthodes de la classe Arduino
     AccessCard();
    int connect_arduino(); // permet de connecter le PC à Arduino
    int close_arduino(); // permet de femer la connexion
    int write_to_arduino( QByteArray ); // envoyer des données vers arduino
    QByteArray read_from_arduino();  //recevoir des données de la carte Arduino
    QSerialPort* getserial();   // accesseur
    QString getarduino_port_name();

private:
QSerialPort * serial; //Cet objet rassemble des informations (vitesse, bits de données, etc.)
//et des fonctions (envoi, lecture de réception,…) sur ce qu’est une voie série pour Arduino.
static const quint16 arduino_uno_vendor_id=9025; // fixe et unique pour la recherche de notre carte
static const quint16 arduino_uno_product_id=67;
QString arduino_port_name; // pour la sauvegarde du numero du port ou la carte et co
bool arduino_is_available; // verification de lexistence de la carte
QByteArray data;  // contenant les données lues à partir de la carte Arduino



};

#endif // ACCESSCARD_H

