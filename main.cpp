// main.cpp


#include "fenprincipale.h"
#include "fenadmin.h"


int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    FenAdmin fenetre;
    fenetre.setWindowTitle("Interface Administrateur");
    fenetre.show();
    return app.exec();
}
