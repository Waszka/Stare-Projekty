//---------------------------------------------------------------------------

#ifndef graH
#define graH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <ExtCtrls.hpp>
#include <jpeg.hpp>
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// IDE-managed Components
        TImage *pole1;
        TImage *pole3;
        TImage *pole2;
        TImage *pole4;
        TImage *pole6;
        TImage *pole5;
        TImage *pole7;
        TImage *pole9;
        TImage *pole8;
        TLabel *Label1;
        TImage *tura;
        TButton *Button1;
        TButton *Button2;
        void __fastcall Button2Click(TObject *Sender);
        void __fastcall FormCreate(TObject *Sender);
        void __fastcall pole1Click(TObject *Sender);
        void __fastcall pole2Click(TObject *Sender);
        void __fastcall pole3Click(TObject *Sender);
        void __fastcall pole4Click(TObject *Sender);
        void __fastcall pole5Click(TObject *Sender);
        void __fastcall pole6Click(TObject *Sender);
        void __fastcall pole7Click(TObject *Sender);
        void __fastcall pole8Click(TObject *Sender);
        void __fastcall pole9Click(TObject *Sender);
        void __fastcall FormClose(TObject *Sender, TCloseAction &Action);
private:	// User declarations
public:		// User declarations
        __fastcall TForm1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
