object Form1: TForm1
  Left = 696
  Top = 309
  BorderIcons = [biSystemMenu, biMinimize]
  BorderStyle = bsToolWindow
  Caption = 'K'#243#322'ko i Krzy'#380'yk v1.1'
  ClientHeight = 372
  ClientWidth = 622
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'MS Sans Serif'
  Font.Style = []
  OldCreateOrder = False
  OnClose = FormClose
  OnCreate = FormCreate
  PixelsPerInch = 96
  TextHeight = 13
  object pole1: TImage
    Left = 40
    Top = 40
    Width = 100
    Height = 100
    Cursor = crHandPoint
    OnClick = pole1Click
  end
  object pole3: TImage
    Left = 232
    Top = 40
    Width = 100
    Height = 100
    Cursor = crHandPoint
    OnClick = pole3Click
  end
  object pole2: TImage
    Left = 136
    Top = 40
    Width = 100
    Height = 100
    Cursor = crHandPoint
    OnClick = pole2Click
  end
  object pole4: TImage
    Left = 40
    Top = 136
    Width = 100
    Height = 100
    Cursor = crHandPoint
    OnClick = pole4Click
  end
  object pole6: TImage
    Left = 232
    Top = 136
    Width = 100
    Height = 100
    Cursor = crHandPoint
    OnClick = pole6Click
  end
  object pole5: TImage
    Left = 136
    Top = 136
    Width = 100
    Height = 100
    Cursor = crHandPoint
    OnClick = pole5Click
  end
  object pole7: TImage
    Left = 40
    Top = 232
    Width = 100
    Height = 100
    Cursor = crHandPoint
    OnClick = pole7Click
  end
  object pole9: TImage
    Left = 232
    Top = 232
    Width = 100
    Height = 100
    Cursor = crHandPoint
    OnClick = pole9Click
  end
  object pole8: TImage
    Left = 136
    Top = 232
    Width = 100
    Height = 100
    Cursor = crHandPoint
    OnClick = pole8Click
  end
  object Label1: TLabel
    Left = 368
    Top = 40
    Width = 195
    Height = 37
    Caption = 'Tura Gracza:'
    Font.Charset = EASTEUROPE_CHARSET
    Font.Color = clWindowText
    Font.Height = -32
    Font.Name = 'Arial'
    Font.Style = [fsBold]
    ParentFont = False
  end
  object tura: TImage
    Left = 568
    Top = 40
    Width = 40
    Height = 40
  end
  object Button1: TButton
    Left = 368
    Top = 200
    Width = 164
    Height = 66
    Cursor = crHandPoint
    Caption = 'Restart'
    Font.Charset = EASTEUROPE_CHARSET
    Font.Color = clWindowText
    Font.Height = -32
    Font.Name = 'Arial'
    Font.Style = [fsBold]
    ParentFont = False
    TabOrder = 0
    OnClick = FormCreate
  end
  object Button2: TButton
    Left = 368
    Top = 264
    Width = 164
    Height = 66
    Cursor = crHandPoint
    Caption = 'Zako'#324'cz'
    Font.Charset = EASTEUROPE_CHARSET
    Font.Color = clWindowText
    Font.Height = -32
    Font.Name = 'Arial'
    Font.Style = [fsBold]
    ParentFont = False
    TabOrder = 1
    OnClick = Button2Click
  end
end
