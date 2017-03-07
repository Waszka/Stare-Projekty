object Form1: TForm1
  Left = 192
  Top = 124
  Width = 636
  Height = 271
  BorderIcons = [biSystemMenu, biMinimize]
  Caption = 'Stoper v2.0'
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'MS Sans Serif'
  Font.Style = []
  OldCreateOrder = False
  PixelsPerInch = 96
  TextHeight = 13
  object Label1: TLabel
    Left = 48
    Top = 72
    Width = 537
    Height = 44
    Alignment = taCenter
    AutoSize = False
    Caption = '00:00:00'
    Font.Charset = EASTEUROPE_CHARSET
    Font.Color = clWindowText
    Font.Height = -37
    Font.Name = 'Arial'
    Font.Style = [fsBold]
    ParentFont = False
  end
  object Button1: TButton
    Left = 144
    Top = 128
    Width = 140
    Height = 49
    Caption = 'Start'
    Font.Charset = EASTEUROPE_CHARSET
    Font.Color = clWindowText
    Font.Height = -37
    Font.Name = 'Arial'
    Font.Style = [fsBold]
    ParentFont = False
    TabOrder = 0
    OnClick = Button1Click
  end
  object Button2: TButton
    Left = 352
    Top = 128
    Width = 140
    Height = 49
    Caption = 'Stop'
    Font.Charset = EASTEUROPE_CHARSET
    Font.Color = clWindowText
    Font.Height = -37
    Font.Name = 'Arial'
    Font.Style = [fsBold]
    ParentFont = False
    TabOrder = 1
    OnClick = Button2Click
  end
  object Timer1: TTimer
    Enabled = False
    OnTimer = Timer1Timer
    Left = 56
    Top = 24
  end
end
