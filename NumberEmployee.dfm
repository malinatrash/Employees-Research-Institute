object EmployeeNumber: TEmployeeNumber
  Left = 0
  Top = 0
  Caption = 'Enter number empoyee'#39's'
  ClientHeight = 289
  ClientWidth = 554
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
    Left = 144
    Top = 88
    Width = 243
    Height = 23
    Caption = 'Enter number employee'#39's'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -19
    Font.Name = 'Tahoma'
    Font.Style = [fsBold]
    ParentFont = False
  end
  object CSpinEdit1: TCSpinEdit
    Left = 208
    Top = 136
    Width = 121
    Height = 22
    TabOrder = 0
  end
  object Button1: TButton
    Left = 72
    Top = 188
    Width = 97
    Height = 49
    Caption = 'Print Employee'
    TabOrder = 1
    OnClick = Button1Click
  end
  object Button2: TButton
    Left = 216
    Top = 188
    Width = 99
    Height = 49
    Caption = 'Change Employee '
    TabOrder = 2
    OnClick = Button2Click
  end
  object Button3: TButton
    Left = 360
    Top = 188
    Width = 97
    Height = 49
    Caption = 'Delete'
    TabOrder = 3
    OnClick = Button3Click
  end
end
