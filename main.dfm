object MainMenuForm: TMainMenuForm
  Left = 2
  Top = 2
  BorderStyle = bsDialog
  Caption = 'Employees of the Research Institute'
  ClientHeight = 610
  ClientWidth = 810
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  Position = poMainFormCenter
  OnClose = FormClose
  PixelsPerInch = 96
  TextHeight = 13
  object Label1: TLabel
    Left = 368
    Top = 128
    Width = 47
    Height = 22
    Caption = 'Menu'
    Font.Charset = ANSI_CHARSET
    Font.Color = clWindowText
    Font.Height = -19
    Font.Name = 'Times New Roman'
    Font.Style = [fsBold]
    ParentFont = False
  end
  object Label2: TLabel
    Left = 240
    Top = 88
    Width = 318
    Height = 24
    Caption = 'Employees of the Research Institute'
    Font.Charset = ANSI_CHARSET
    Font.Color = clWindowText
    Font.Height = -21
    Font.Name = 'Times New Roman'
    Font.Style = [fsBold]
    ParentFont = False
  end
  object Button1: TButton
    Left = 272
    Top = 168
    Width = 249
    Height = 41
    Caption = 'Add employee'
    TabOrder = 0
    OnClick = Button1Click
  end
  object Button3: TButton
    Left = 272
    Top = 215
    Width = 249
    Height = 41
    Caption = 'Print Employee list'
    TabOrder = 1
    OnClick = Button3Click
  end
  object Button5: TButton
    Left = 272
    Top = 309
    Width = 249
    Height = 41
    Caption = 'Working with a file'
    TabOrder = 2
    OnClick = Button5Click
  end
  object Button6: TButton
    Left = 272
    Top = 450
    Width = 249
    Height = 41
    Caption = 'About application'
    TabOrder = 3
    OnClick = Button6Click
  end
  object Button7: TButton
    Left = 272
    Top = 262
    Width = 249
    Height = 41
    Caption = 'Choose employee by number'
    TabOrder = 4
    OnClick = Button7Click
  end
  object ToolBar1: TToolBar
    Left = 0
    Top = 0
    Width = 810
    Height = 29
    Caption = 'ToolBar1'
    TabOrder = 5
  end
  object Button9: TButton
    Left = 272
    Top = 356
    Width = 249
    Height = 41
    Caption = 'Task'
    TabOrder = 6
    OnClick = Button9Click
  end
  object Button2: TButton
    Left = 272
    Top = 403
    Width = 249
    Height = 41
    Caption = 'User guide'
    TabOrder = 7
    OnClick = Button2Click
  end
  object SaveDialog1: TSaveDialog
    Filter = '*.txt|*.txt'
    Left = 696
    Top = 552
  end
  object OpenDialog1: TOpenDialog
    Filter = '|*.txt'
    Left = 752
    Top = 552
  end
end
