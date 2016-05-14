#ifndef END_H
#define END_H

#include <QDialog>

namespace Ui {
class end;
}

class end : public QDialog
{
    Q_OBJECT

public:
    explicit end(QWidget *parent = 0);
    ~end();

private:
    Ui::end *ui;
};

#endif // END_H
