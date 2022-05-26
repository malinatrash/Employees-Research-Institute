object ActionChoose: TActionChoose
  Left = 0
  Top = 0
  Caption = 'Choose action'
  ClientHeight = 178
  ClientWidth = 453
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  PixelsPerInch = 96
  TextHeight = 13
  object Label1: TLabel
    Left = 155
    Top = 40
    Width = 135
    Height = 23
    Caption = 'Choose action'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -19
    Font.Name = 'Tahoma'
    Font.Style = [fsBold]
    ParentFont = False
  end
  object Button2: TButton
    Left = 21
    Top = 104
    Width = 170
    Height = 50
    Caption = 'Upload from file'
    TabOrder = 0
    OnClick = Button2Click
  end
  object Button3: TButton
    Left = 256
    Top = 104
    Width = 170
    Height = 50
    Caption = 'Save changes'
    TabOrder = 1
    OnClick = Button3Click
  end
end
