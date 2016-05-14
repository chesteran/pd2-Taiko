#include "end.h"
#include "ui_end.h"
#include "ttaiko_start.h"

end::end(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::end)
{
    ui->setupUi(this);
}

end::~end()
{
    delete ui;
}
