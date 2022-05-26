object ListEmployee: TListEmployee
  Left = 0
  Top = 0
  Caption = 'Employees list'
  ClientHeight = 526
  ClientWidth = 899
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  PixelsPerInch = 96
  TextHeight = 13
  object StringGrid1: TStringGrid
    AlignWithMargins = True
    Left = 3
    Top = 3
    Width = 893
    Height = 520
    Align = alClient
    DefaultColWidth = 119
    TabOrder = 0
  end
  object Button1: TButton
    Left = 736
    Top = 8
    Width = 155
    Height = 41
    Caption = 'Sort by name'
    TabOrder = 1
    OnClick = Button1Click
  end
  object Button2: TButton
    Left = 736
    Top = 55
    Width = 155
    Height = 41
    Caption = 'Sort by academic degree'
    TabOrder = 2
    OnClick = Button2Click
  end
  object Button3: TButton
    Left = 736
    Top = 102
    Width = 155
    Height = 41
    Caption = 'Sort by post'
    TabOrder = 3
    OnClick = Button3Click
  end
  object Button4: TButton
    Left = 736
    Top = 149
    Width = 155
    Height = 41
    Caption = 'Sort by age'
    TabOrder = 4
    OnClick = Button4Click
  end
  object Button5: TButton
    Left = 736
    Top = 196
    Width = 155
    Height = 41
    Caption = 'Sort by name of project'
    TabOrder = 5
    OnClick = Button5Click
  end
  object Button6: TButton
    Left = 736
    Top = 243
    Width = 155
    Height = 41
    Caption = 'Print list of young employees'
    TabOrder = 6
    OnClick = Button6Click
  end
  object Button7: TButton
    Left = 736
    Top = 290
    Width = 155
    Height = 41
    Caption = 'Print list with one projet'
    TabOrder = 7
    OnClick = Button7Click
  end
  object Button8: TButton
    Left = 736
    Top = 337
    Width = 155
    Height = 41
    Caption = 'Calculate percentage degree'
    TabOrder = 8
    OnClick = Button8Click
  end
end
