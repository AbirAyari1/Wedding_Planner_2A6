#ifndef NOTIFICATION_H
#define NOTIFICATION_H
#include <QSystemTrayIcon>
#include<QString>
class Notification
{
public:
    Notification();
    void notification_ajoutFournisseur();
    void notification_ajoutMarchandise();
    void notification_ajoutCommande();
    void notification_supprimerFournisseur();
    void notification_supprimerMarchandise();
    void notification_supprimerCommande();
    void notification_modifierFournisseur();
    void notification_modifierMarchandise();
    void notification_modifierCommande();
    void mail_Fournisseur();






};

#endif // NOTIFICATION_H
