//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "kalku.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
double x;
double y;
char znak;
bool przecinek;
char dodawanie;
char odejmowanie;
char mnozenie;
char dzielenie;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button11Click(TObject *Sender)
{     
        Edit1->Text=Edit1->Text+0;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button3Click(TObject *Sender)
{
        Edit1->Text=Edit1->Text+1;        
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button6Click(TObject *Sender)
{
        Edit1->Text=Edit1->Text+2;        
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button9Click(TObject *Sender)
{
        Edit1->Text=Edit1->Text+3;        
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button2Click(TObject *Sender)
{
        Edit1->Text=Edit1->Text+4;        
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button5Click(TObject *Sender)
{
        Edit1->Text=Edit1->Text+5;        
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button8Click(TObject *Sender)
{
        Edit1->Text=Edit1->Text+6;        
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button1Click(TObject *Sender)
{
        Edit1->Text=Edit1->Text+7;        
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button4Click(TObject *Sender)
{
        Edit1->Text=Edit1->Text+8;        
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button7Click(TObject *Sender)
{
        Edit1->Text=Edit1->Text+9;        
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button15Click(TObject *Sender)
{
        if (dodawanie==true)
        {
            y=Edit1->Text.ToDouble();
            x=x+y;
            Edit1->Text="";
        }
        else
        x=Edit1->Text.ToDouble();
        dodawanie=true;
        Edit1->Clear();
        przecinek=false;
        mnozenie=false;
        dzielenie=false;
        odejmowanie=false;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button16Click(TObject *Sender)
{
        x=0;
        y=0;
        Edit1->Text="";
        dodawanie=false;

}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button17Click(TObject *Sender)
{
        if (dodawanie==true)
        {
            y=Edit1->Text.ToDouble();
            x=x+y;
            Edit1->Text=x;
            y=0;
            x=0;
            przecinek=false;

        }
        if (odejmowanie==true)
        {
            y=Edit1->Text.ToDouble();
            x=x-y;
            Edit1->Text=x;
            y=0;
            x=0;
            przecinek=false;
        }
        if (mnozenie==true)
        {
            y=Edit1->Text.ToDouble();
            x=x*y;
            Edit1->Text=x;
            y=0;
            x=0;
            przecinek=false;
        }
        if (dzielenie==true)
        {
            y=Edit1->Text.ToDouble();
            x=x/y;
            Edit1->Text=x;
            y=0;
            x=0;
            przecinek=false;
        }
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button12Click(TObject *Sender)
{
        if (!przecinek)
        {
            AnsiString cyfra=Edit1->Text;
            cyfra+=',';
            Edit1->Text=',';
            Edit1->Text=cyfra;
            przecinek=true;
        }
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button13Click(TObject *Sender)
{
          if (odejmowanie==true)
          {
            y=Edit1->Text.ToDouble();
            x=x-y;
            Edit1->Text="";
          }
          else
          x=Edit1->Text.ToDouble();
          odejmowanie=true;
          Edit1->Clear();
          przecinek=false;
          dodawanie=false;
          mnozenie=false;
          dzielenie=false;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button14Click(TObject *Sender)
{
          if (mnozenie==true)
          {
            y=Edit1->Text.ToDouble();
            x=x*y;
            Edit1->Text="";
          }
          else
          x=Edit1->Text.ToDouble();
          mnozenie=true;
          Edit1->Clear();
          przecinek=false;
          dodawanie=false;
          odejmowanie=false;
          dzielenie=false;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button10Click(TObject *Sender)
{
          if (dzielenie==true)
          {
            y=Edit1->Text.ToDouble();
            x=x/y;
            Edit1->Text="";
          }
          else
          x=Edit1->Text.ToDouble();
          dzielenie=true;
          Edit1->Clear();
          przecinek=false;
          dodawanie=false;
          mnozenie=false;
          odejmowanie=false;
}
//---------------------------------------------------------------------------

