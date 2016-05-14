#include "ttaiko_start.h"
#include "ui_ttaiko_start.h"
#include "mainwindow.h"

ttaiko_start::ttaiko_start(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ttaiko_start)
{
    ui->setupUi(this);
ui->label_5->setGeometry(QRect(600,120,61,50));//red
ui->label_36->setGeometry(QRect(700,120,61,50));//blue
ui->label_60->setGeometry(QRect(800,120,61,50));//r
ui->label_61->setGeometry(QRect(900,120,61,50));//r
ui->label_62->setGeometry(QRect(1000,120,61,50));//b
ui->label_63->setGeometry(QRect(850,120,61,50));//b

ui->label_4->setGeometry(QRect(-10,-10,161,111));
ui->label_64->setGeometry(QRect(-10,-10,161,111));
ui->label_65->setGeometry(QRect(-10,-10,161,111));
ui->label_66->setGeometry(QRect(-10,-10,161,111));
ui->label_67->setGeometry(QRect(-10,-10,161,111));
    ui->label_6->hide();//1
    ui->label_7->hide();//2
    ui->label_8->hide();//3
    ui->label_9->hide();//4
    ui->label_10->hide();//5
    ui->label_11->hide();//6
    ui->label_12->hide();//7
    ui->label_13->hide();//8
    ui->label_14->hide();//9
    ui->label_15->hide();//10
    ui->label_16->hide();//11
    ui->label_17->hide();//12
    ui->label_18->hide();//13
    ui->label_19->hide();//14
    ui->label_20->hide();//15
    ui->label_21->hide();//16
    ui->label_22->hide();//17
    ui->label_23->hide();//18
    ui->label_24->hide();//19
    ui->label_25->hide();//20
    ui->label_26->hide();//21
    ui->label_27->hide();//22
    ui->label_28->hide();//23
    ui->label_29->hide();//24
    ui->label_30->hide();//25
    ui->label_31->hide();//26
    ui->label_32->hide();//27
    ui->label_33->hide();//28
    ui->label_34->hide();//29
    ui->label_35->hide();//30
    ui->label_38->hide();//                   end
    ///////////////////////////////
    /// animate04 64 67 66 65
    ui->label_64->hide();
    ui->label_65->hide();
    ui->label_66->hide();
    ui->label_67->hide();
    ////////////////////////////////
    ui->pushButton->hide();//replay
    ui->pushButton_2->hide();//quit
    score=0;
    ui->label_39->show();
    ui->label_40->hide();
    ui->label_41->hide();
    ui->label_42->hide();
    ui->label_43->hide();
    ui->label_44->hide();
    ui->label_45->hide();
    ui->label_46->hide();
    ui->label_47->hide();
    ui->label_48->hide();//score 0~9


    ui->label_49->show();
    ui->label_50->hide();
    ui->label_51->hide();
    ui->label_52->hide();
    ui->label_53->hide();
    ui->label_54->hide();
    ui->label_55->hide();
    ui->label_56->hide();
    ui->label_57->hide();
    ui->label_58->hide();//score0x~9x

    timer = new QTimer();
    this->connect(timer,SIGNAL(timeout()),this,SLOT(counttime()));//
    timer->start( 1000 );

    timer2 = new QTimer();
    timer2->connect(timer2,SIGNAL(timeout()),this,SLOT(mmove()));
    timer2->start(100);

    timer3 = new QTimer();
    timer3->connect(timer3,SIGNAL(timeout()),this,SLOT(animate()));
    timer3->start(1000);


}

ttaiko_start::~ttaiko_start()
{
    delete ui;
}

void ttaiko_start::keyPressEvent(QKeyEvent *event)
{

    srand( (int)time(NULL));
    int x1=ui->label_5->x();
    int y1=ui->label_5->y();//r
    int x2=ui->label_36->x();
    int y2=ui->label_36->y();//b
    int x3=ui->label_60->x();
    int y3=ui->label_60->y();//r
    int x4=ui->label_61->x();
    int y4=ui->label_61->y();//r
    int x5=ui->label_62->x();
    int y5=ui->label_62->y();//b
    int x6=ui->label_63->x();
    int y6=ui->label_63->y();//b

    if(event->key()==Qt::Key_S||event->key()==Qt::Key_K)
    {


    if(x1>=0&&x1<=31){
            ui->label_5->hide();
            ui->label_5->move(QPoint(rand()%300+490,y1));
            ui->label_5->show();
            score++;
     }
    else if(x3>=0&&x3<=31)
    {

        ui->label_60->hide();
        ui->label_60->move(QPoint(rand()%400+750,y4));
        ui->label_60->show();
        score++;


    }

    else if(x4>=0&&x4<=31)
    {

        ui->label_61->hide();
        ui->label_61->move(QPoint(rand()%300+620,y3));
        ui->label_61->show();
        score++;


    }

    }

   else if(event->key()==Qt::Key_L||event->key()==Qt::Key_A)
    {

if(x2>=0&&x2<=31){
            ui->label_36->hide();
            ui->label_36->move(QPoint(rand()%200+490,y2));
            ui->label_36->show();
            score++;
}

else if(x5>=0&&x5<=31)
{

    ui->label_62->hide();
    ui->label_62->move(QPoint(rand()%300+690,y5));
    ui->label_62->show();
    score++;


}

else if(x6>=0&&x6<=31)
{

    ui->label_63->hide();
    ui->label_63->move(QPoint(rand()%200+520,y6));
    ui->label_63->show();
    score++;


}



    }

    if(score==1){
        ui->label_39->hide();
        ui->label_40->show();

    }
    else if(score==2)
    {
        ui->label_40->hide();
        ui->label_41->show();
    }
    else if(score==3)
    {
        ui->label_41->hide();
        ui->label_42->show();
    }
    else if(score==4)
    {
        ui->label_42->hide();
        ui->label_43->show();
    }
    else if(score==5)
    {
        ui->label_43->hide();
        ui->label_44->show();
    }
    else if(score==6)
    {
        ui->label_44->hide();
        ui->label_45->show();
    }
    else if(score==7)
    {
        ui->label_45->hide();
        ui->label_46->show();
    }
    else if(score==8)
    {
        ui->label_46->hide();
        ui->label_47->show();
    }
    else if(score==9)
    {
        ui->label_47->hide();
        ui->label_48->show();
    }
    ////////////////////
    else if(score==10)
    {   ui->label_49->hide();
        ui->label_50->show();

        ui->label_48->hide();
        ui->label_39->show();

    }
    else if(score==11)
    {
        ui->label_39->hide();
        ui->label_40->show();


    }
    else if(score==12)
    {   ui->label_40->hide();
        ui->label_41->show();

    }
    else if(score==13)
    {   ui->label_41->hide();
        ui->label_42->show();

    }
    else if(score==14)
    {   ui->label_42->hide();
        ui->label_43->show();

    }
    else if(score==15)
    {   ui->label_43->hide();
        ui->label_44->show();

    }
    else if(score==16)
    {    ui->label_44->hide();
         ui->label_45->show();

    }
    else if(score==17)
    {    ui->label_45->hide();
        ui->label_46->show();

    }
    else if(score==18)
    {   ui->label_46->hide();
        ui->label_47->show();
    }
    else if(score==19)
    {   ui->label_47->hide();
        ui->label_48->show();

    }

    ///////////

    else if(score==20)
    {   ui->label_50->hide();
        ui->label_51->show();

        ui->label_48->hide();
        ui->label_39->show();

    }
    else if(score==21)
    {
        ui->label_39->hide();
        ui->label_40->show();


    }
    else if(score==22)
    {   ui->label_40->hide();
        ui->label_41->show();

    }
    else if(score==23)
    {   ui->label_41->hide();
        ui->label_42->show();

    }
    else if(score==24)
    {   ui->label_42->hide();
        ui->label_43->show();

    }
    else if(score==25)
    {   ui->label_43->hide();
        ui->label_44->show();

    }
    else if(score==26)
    {    ui->label_44->hide();
         ui->label_45->show();

    }
    else if(score==27)
    {    ui->label_45->hide();
        ui->label_46->show();

    }
    else if(score==28)
    {   ui->label_46->hide();
        ui->label_47->show();
    }
    else if(score==29)
    {   ui->label_47->hide();
        ui->label_48->show();

    }
    //////////////
    else if(score==30)
    {   ui->label_51->hide();
        ui->label_52->show();

        ui->label_48->hide();
        ui->label_39->show();

    }
    else if(score==31)
    {
        ui->label_39->hide();
        ui->label_40->show();


    }
    else if(score==32)
    {   ui->label_40->hide();
        ui->label_41->show();

    }
    else if(score==33)
    {   ui->label_41->hide();
        ui->label_42->show();

    }
    else if(score==34)
    {   ui->label_42->hide();
        ui->label_43->show();

    }
    else if(score==35)
    {   ui->label_43->hide();
        ui->label_44->show();

    }
    else if(score==36)
    {    ui->label_44->hide();
         ui->label_45->show();

    }
    else if(score==37)
    {    ui->label_45->hide();
        ui->label_46->show();

    }
    else if(score==38)
    {   ui->label_46->hide();
        ui->label_47->show();
    }
    else if(score==39)
    {   ui->label_47->hide();
        ui->label_48->show();

    }
    /////////////////
    else if(score==40)
    {   ui->label_52->hide();
        ui->label_53->show();

        ui->label_48->hide();
        ui->label_39->show();

    }
    else if(score==41)
    {
        ui->label_39->hide();
        ui->label_40->show();


    }
    else if(score==42)
    {   ui->label_40->hide();
        ui->label_41->show();

    }
    else if(score==43)
    {   ui->label_41->hide();
        ui->label_42->show();

    }
    else if(score==44)
    {   ui->label_42->hide();
        ui->label_43->show();

    }
    else if(score==45)
    {   ui->label_43->hide();
        ui->label_44->show();

    }
    else if(score==46)
    {    ui->label_44->hide();
         ui->label_45->show();

    }
    else if(score==47)
    {    ui->label_45->hide();
        ui->label_46->show();

    }
    else if(score==48)
    {   ui->label_46->hide();
        ui->label_47->show();
    }
    else if(score==49)
    {   ui->label_47->hide();
        ui->label_48->show();

    }


}





void ttaiko_start::counttime(){



       if(i*1000==1000){
           ui->label_35->show();}
       else if(i*1000==2000)
       {
         ui->label_35->hide();
         ui->label_34->show();
       }

       else if(i*1000==3000)
       {
           ui->label_34->hide();
           ui->label_33->show();
       }
       else if(i*1000==4000)
       {
           ui->label_33->hide();
           ui->label_32->show();
       }
       else if(i*1000==5000)
       {
           ui->label_32->hide();
           ui->label_31->show();
       }
       else if(i*1000==6000)
       {
           ui->label_31->hide();
           ui->label_30->show();
       }
       else if(i*1000==7000)
       {
           ui->label_30->hide();
           ui->label_29->show();
       }
       else if(i*1000==8000)
       {
           ui->label_29->hide();
           ui->label_28->show();
       }
       else if(i*1000==9000)
       {
           ui->label_28->hide();
           ui->label_27->show();
       }
       else if(i*1000==10000)
       {
           ui->label_27->hide();
           ui->label_26->show();
       }
       else if(i*1000==11000)
       {
           ui->label_26->hide();
           ui->label_25->show();
       }
       else if(i*1000==12000)
       {
           ui->label_25->hide();
           ui->label_24->show();
       }
       else if(i*1000==13000)
       {
           ui->label_24->hide();
           ui->label_23->show();
       }
       else if(i*1000==14000)
       {
           ui->label_23->hide();
           ui->label_22->show();
       }
       else if(i*1000==15000)
       {
           ui->label_22->hide();
           ui->label_21->show();
       }
       else if(i*1000==16000)
       {
           ui->label_21->hide();
           ui->label_20->show();
       }
       else if(i*1000==17000)
       {
           ui->label_20->hide();
           ui->label_19->show();
       }
       else if(i*1000==18000)
       {
           ui->label_19->hide();
           ui->label_18->show();
       }
       else if(i*1000==19000)
       {
           ui->label_18->hide();
           ui->label_17->show();
       }
       else if(i*1000==20000)
       {
           ui->label_17->hide();
           ui->label_16->show();
       }
       else if(i*1000==21000)
       {
           ui->label_16->hide();
           ui->label_15->show();
       }
       else if(i*1000==22000)
       {
           ui->label_15->hide();
           ui->label_14->show();
       }
       else if(i*1000==23000)
       {
           ui->label_14->hide();
           ui->label_13->show();
       }
       else if(i*1000==24000)
       {
           ui->label_13->hide();
           ui->label_12->show();
       }
       else if(i*1000==25000)
       {
           ui->label_12->hide();
           ui->label_11->show();
       }
       else if(i*1000==26000)
       {
           ui->label_11->hide();
           ui->label_10->show();
       }
       else if(i*1000==27000)
       {
           ui->label_10->hide();
           ui->label_9->show();
       }
       else if(i*1000==28000)
       {
           ui->label_9->hide();
           ui->label_8->show();
       }
       else if(i*1000==29000)
       {
           ui->label_8->hide();
           ui->label_7->show();
       }
       else if(i*1000==30000)
       {
           ui->label_7->hide();
           ui->label_6->show();
       }
       else if(i*1000==31000)
       {
          //end
          ui->label_6->hide();
          ui->label_38->show();
          ui->pushButton->show();
          ui->pushButton_2->show();
          ui->label_5->hide();
          ui->label_36->hide();
          ui->label_60->hide();
          ui->label_61->hide();
          ui->label_62->hide();
          ui->label_63->hide();
        }


i=i+1;

}

void ttaiko_start::mmove(){

 srand( (int)time(NULL));

int x1= ui->label_5->x();
    ui->label_5->setGeometry(QRect(x1-speed,120,61,50));

    int x2= ui->label_36->x();
     ui->label_36->setGeometry(QRect(x2-speed,120,61,50));

     int x3= ui->label_60->x();
      ui->label_60->setGeometry(QRect(x3-speed,120,61,50));

      int x4= ui->label_61->x();
       ui->label_61->setGeometry(QRect(x4-speed,120,61,50));

       int x5= ui->label_62->x();
        ui->label_62->setGeometry(QRect(x5-speed,120,61,50));

        int x6= ui->label_63->x();
         ui->label_63->setGeometry(QRect(x6-speed,120,61,50));

if(x1<-20)
{
    x1=490+rand()%600;
     ui->label_5->setGeometry(QRect(x1-speed,120,61,50));

}
else if (x2<-20)
{
     x2=490+rand()%200;
     ui->label_36->setGeometry(QRect(x2-speed,120,61,50));

}
else if (x3<-20)
{
     x3=490+rand()%400;
     ui->label_60->setGeometry(QRect(x3-speed,120,61,50));

}

else if (x4<-20)
{
     x4=490+rand()%400;
     ui->label_61->setGeometry(QRect(x4-speed,120,61,50));

}

else if (x5<-20)
{
     x5=490+rand()%500;
     ui->label_62->setGeometry(QRect(x5-speed,120,61,50));

}

else if (x6<-20)
{
     x6=490+rand()%600;
     ui->label_63->setGeometry(QRect(x6-speed,120,61,50));

}






}

void ttaiko_start::animate()
{

        //04 64 67 66 65 66 64



    if(ansec*1000==1000){
        ui->label_4->hide();
        ui->label_64->show();
    }
    else if(ansec*1000==2000)
    {
      ui->label_64->hide();
      ui->label_67->show();
    }

    else if(ansec*1000==3000)
    {
        ui->label_67->hide();
        ui->label_66->show();
    }
    else if(ansec*1000==4000)
    {
        ui->label_66->hide();
        ui->label_65->show();
    }
    else if(ansec*1000==5000)
    {
        ui->label_65->hide();
        ui->label_66->show();
    }
    else if(ansec*1000==6000)
    {
        ui->label_66->hide();
        ui->label_64->show();
    }
    else if(ansec*1000==7000)
    {
        ui->label_64->hide();
        ui->label_67->show();
    }
    else if(ansec*1000==8000)
    {
        ui->label_67->hide();
        ui->label_66->show();
    }
    else if(ansec*1000==9000)
    {
        ui->label_66->hide();
        ui->label_65->show();
    }
    else if(ansec*1000==10000)
    {
        ui->label_65->hide();
        ui->label_66->show();
    }
    else if(ansec*1000==11000)
    {
        ui->label_66->hide();
        ui->label_64->show();
    }
    else if(ansec*1000==12000)
    {
        ui->label_64->hide();
        ui->label_67->show();
    }
    else if(ansec*1000==13000)
    {
        ui->label_67->hide();
        ui->label_66->show();
    }
    else if(ansec*1000==14000)
    {
        ui->label_66->hide();
        ui->label_65->show();
    }
    else if(ansec*1000==15000)
    {
        ui->label_65->hide();
        ui->label_66->show();
    }
    else if(ansec*1000==16000)
    {
        ui->label_66->hide();
        ui->label_64->show();
    }
    else if(ansec*1000==17000)
    {
        ui->label_64->hide();
        ui->label_67->show();
    }
    else if(ansec*1000==18000)
    {
        ui->label_67->hide();
        ui->label_66->show();
    }
    else if(ansec*1000==19000)
    {
        ui->label_66->hide();
        ui->label_65->show();
    }
    else if(ansec*1000==20000)
    {
        ui->label_65->hide();
        ui->label_66->show();
    }
    else if(ansec*1000==21000)
    {
        ui->label_66->hide();
        ui->label_64->show();
    }
    else if(ansec*1000==22000)
    {
        ui->label_64->hide();
        ui->label_67->show();
    }
    else if(ansec*1000==23000)
    {
        ui->label_67->hide();
        ui->label_66->show();
    }
    else if(ansec*1000==24000)
    {
        ui->label_66->hide();
        ui->label_65->show();
    }
    else if(ansec*1000==25000)
    {
        ui->label_65->hide();
        ui->label_66->show();
    }
    else if(ansec*1000==26000)
    {
        ui->label_66->hide();
        ui->label_64->show();
    }
    else if(ansec*1000==27000)
    {
        ui->label_64->hide();
        ui->label_67->show();
    }
    else if(ansec*1000==28000)
    {
        ui->label_67->hide();
        ui->label_66->show();
    }
    else if(ansec*1000==29000)
    {
        ui->label_66->hide();
        ui->label_65->show();
    }
    else if(ansec*1000==30000)
    {
        ui->label_65->hide();
        ui->label_66->show();
    }
ansec++;

}


void ttaiko_start::on_pushButton_2_clicked()
{
    close();
}

void ttaiko_start::on_pushButton_clicked()
{
    this->hide();
    ttaiko_start startwindow;
    startwindow.setModal(true);
    startwindow.exec();
}
