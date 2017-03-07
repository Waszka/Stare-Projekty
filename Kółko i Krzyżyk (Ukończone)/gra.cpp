//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "gra.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
        char p1,p2,p3,p4,p5,p6,p7,p8,p9;
        //p1...p9 to pola w grze (zawartoœæ p1='n'; nic lub 'x' lub 'o')
        char kto;
        void sprawdz()
        {
             if((p1==p2 && p2==p3 && p1!='n') ||
                (p4==p5 && p5==p6 && p4!='n') ||
                (p7==p8 && p8==p9 && p7!='n') ||
                (p1==p4 && p4==p7 && p1!='n') ||
                (p2==p5 && p5==p8 && p2!='n') ||
                (p3==p6 && p6==p9 && p3!='n') ||
                (p1==p5 && p5==p9 && p1!='n') ||
                (p3==p5 && p5==p7 && p3!='n'))
             {
                 char * w;
                 if(kto=='x') w="Wygrywa kó³ko!";
                 else w="Wygrywa krzy¿yk!";
                 Application->MessageBox(w, "Koniec gry", MB_OK);
                 Form1->FormCreate(Form1);
             }
        }

//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button2Click(TObject *Sender)
{
        if(Application->MessageBox(
        "Czy napewno zakoñczyæ program?","PotwierdŸ",
        MB_YESNO | MB_ICONQUESTION) == IDYES )
        {
                Application->Terminate();
        }
}
//---------------------------------------------------------------------------

void __fastcall TForm1::FormCreate(TObject *Sender)
{
        pole1->Picture->LoadFromFile("img/nic.jpg");
        pole2->Picture->LoadFromFile("img/nic.jpg");
        pole3->Picture->LoadFromFile("img/nic.jpg");
        pole4->Picture->LoadFromFile("img/nic.jpg");
        pole5->Picture->LoadFromFile("img/nic.jpg");
        pole6->Picture->LoadFromFile("img/nic.jpg");
        pole7->Picture->LoadFromFile("img/nic.jpg");
        pole8->Picture->LoadFromFile("img/nic.jpg");
        pole9->Picture->LoadFromFile("img/nic.jpg");
        tura->Picture->LoadFromFile("img/xsmall.jpg");

        p1='n'; p2='n'; p3='n';
        p4='n'; p5='n'; p6='n';
        p7='n'; p8='n'; p9='n';
        kto='x';
        pole1->Enabled = true;
        pole2->Enabled = true;
        pole3->Enabled = true;
        pole4->Enabled = true;
        pole5->Enabled = true;
        pole6->Enabled = true;
        pole7->Enabled = true;
        pole8->Enabled = true;
        pole9->Enabled = true;


}
//---------------------------------------------------------------------------

void __fastcall TForm1::pole1Click(TObject *Sender)
{
        if(p1=='n')
        {
            if(kto=='x')
            {
                 pole1->Picture->LoadFromFile("img/x.jpg");
                 p1='x';
                 kto='o';
                 tura->Picture->LoadFromFile("img/osmall.jpg");
            }
            else
            {
                 pole1->Picture->LoadFromFile("img/o.jpg");
                 p1='o';
                 kto='x';
                 tura->Picture->LoadFromFile("img/xsmall.jpg");
            }
            pole1->Enabled=false;
            sprawdz();
        }
}
//---------------------------------------------------------------------------

void __fastcall TForm1::pole2Click(TObject *Sender)
{
        if(p2=='n')
        {
            if(kto=='x')
            {
                 pole2->Picture->LoadFromFile("img/x.jpg");
                 p2='x';
                 kto='o';
                 tura->Picture->LoadFromFile("img/osmall.jpg");
            }
            else
            {
                 pole2->Picture->LoadFromFile("img/o.jpg");
                 p2='o';
                 kto='x';
                 tura->Picture->LoadFromFile("img/xsmall.jpg");
            }
            pole2->Enabled=false;
            sprawdz();
        }
}
//---------------------------------------------------------------------------

void __fastcall TForm1::pole3Click(TObject *Sender)
{
        if(p3=='n')
        {
            if(kto=='x')
            {
                 pole3->Picture->LoadFromFile("img/x.jpg");
                 p3='x';
                 kto='o';
                 tura->Picture->LoadFromFile("img/osmall.jpg");
            }
            else
            {
                 pole3->Picture->LoadFromFile("img/o.jpg");
                 p3='o';
                 kto='x';
                 tura->Picture->LoadFromFile("img/xsmall.jpg");
            }
            pole3->Enabled=false;
            sprawdz();
        }
}
//---------------------------------------------------------------------------

void __fastcall TForm1::pole4Click(TObject *Sender)
{
        if(p4=='n')
        {
            if(kto=='x')
            {
                 pole4->Picture->LoadFromFile("img/x.jpg");
                 p4='x';
                 kto='o';
                 tura->Picture->LoadFromFile("img/osmall.jpg");
            }
            else
            {
                 pole4->Picture->LoadFromFile("img/o.jpg");
                 p4='o';
                 kto='x';
                 tura->Picture->LoadFromFile("img/xsmall.jpg");
            }
            pole4->Enabled=false;
            sprawdz();
        }
}
//---------------------------------------------------------------------------

void __fastcall TForm1::pole5Click(TObject *Sender)
{
        if(p5=='n')
        {
            if(kto=='x')
            {
                 pole5->Picture->LoadFromFile("img/x.jpg");
                 p5='x';
                 kto='o';
                 tura->Picture->LoadFromFile("img/osmall.jpg");
            }
            else
            {
                 pole5->Picture->LoadFromFile("img/o.jpg");
                 p5='o';
                 kto='x';
                 tura->Picture->LoadFromFile("img/xsmall.jpg");
            }
            pole5->Enabled=false;
            sprawdz();
        }
}
//---------------------------------------------------------------------------

void __fastcall TForm1::pole6Click(TObject *Sender)
{
        if(p6=='n')
        {
            if(kto=='x')
            {
                 pole6->Picture->LoadFromFile("img/x.jpg");
                 p6='x';
                 kto='o';
                 tura->Picture->LoadFromFile("img/osmall.jpg");
            }
            else
            {
                 pole6->Picture->LoadFromFile("img/o.jpg");
                 p6='o';
                 kto='x';
                 tura->Picture->LoadFromFile("img/xsmall.jpg");
            }
            pole6->Enabled=false;
            sprawdz();
        }
}
//---------------------------------------------------------------------------

void __fastcall TForm1::pole7Click(TObject *Sender)
{
        if(p7=='n')
        {
            if(kto=='x')
            {
                 pole7->Picture->LoadFromFile("img/x.jpg");
                 p7='x';
                 kto='o';
                 tura->Picture->LoadFromFile("img/osmall.jpg");
            }
            else
            {
                 pole7->Picture->LoadFromFile("img/o.jpg");
                 p7='o';
                 kto='x';
                 tura->Picture->LoadFromFile("img/xsmall.jpg");
            }
            pole7->Enabled=false;
            sprawdz();
        }
}
//---------------------------------------------------------------------------

void __fastcall TForm1::pole8Click(TObject *Sender)
{
        if(p8=='n')
        {
            if(kto=='x')
            {
                 pole8->Picture->LoadFromFile("img/x.jpg");
                 p8='x';
                 kto='o';
                 tura->Picture->LoadFromFile("img/osmall.jpg");
            }
            else
            {
                 pole8->Picture->LoadFromFile("img/o.jpg");
                 p8='o';
                 kto='x';
                 tura->Picture->LoadFromFile("img/xsmall.jpg");
            }
            pole8->Enabled=false;
            sprawdz();
        }
}
//---------------------------------------------------------------------------

void __fastcall TForm1::pole9Click(TObject *Sender)
{
        if(p9=='n')
        {
            if(kto=='x')
            {
                 pole9->Picture->LoadFromFile("img/x.jpg");
                 p9='x';
                 kto='o';
                 tura->Picture->LoadFromFile("img/osmall.jpg");
            }
            else
            {
                 pole9->Picture->LoadFromFile("img/o.jpg");
                 p9='o';
                 kto='x';
                 tura->Picture->LoadFromFile("img/xsmall.jpg");
            }
            pole9->Enabled=false;
            sprawdz();
        }
}
//---------------------------------------------------------------------------

void __fastcall TForm1::FormClose(TObject *Sender, TCloseAction &Action)
{
        if(Application->MessageBox(
        "Czy napewno zakoñczyæ program?","PotwierdŸ",
        MB_YESNO | MB_ICONQUESTION) == IDNO )
        {
                Action=caNone;
        }
}
//---------------------------------------------------------------------------

