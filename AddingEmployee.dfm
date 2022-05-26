object AddingEmployeeForm: TAddingEmployeeForm
  Left = 0
  Top = 0
  BorderStyle = bsDialog
  Caption = 'Adding new employee'
  ClientHeight = 309
  ClientWidth = 438
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  Position = poMainFormCenter
  PixelsPerInch = 96
  TextHeight = 13
  object Label1: TLabel
    Left = 32
    Top = 80
    Width = 129
    Height = 21
    Caption = 'Academic degree'
    Font.Charset = ANSI_CHARSET
    Font.Color = clWindowText
    Font.Height = -19
    Font.Name = 'Times New Roman'
    Font.Style = []
    ParentFont = False
  end
  object Label2: TLabel
    Left = 32
    Top = 40
    Width = 72
    Height = 21
    Caption = 'Full name'
    Font.Charset = ANSI_CHARSET
    Font.Color = clWindowText
    Font.Height = -19
    Font.Name = 'Times New Roman'
    Font.Style = []
    ParentFont = False
  end
  object Label3: TLabel
    Left = 32
    Top = 117
    Width = 34
    Height = 21
    Caption = 'Post'
    Font.Charset = ANSI_CHARSET
    Font.Color = clWindowText
    Font.Height = -19
    Font.Name = 'Times New Roman'
    Font.Style = []
    ParentFont = False
  end
  object Label4: TLabel
    Left = 32
    Top = 157
    Width = 30
    Height = 21
    Caption = 'Age'
    Font.Charset = ANSI_CHARSET
    Font.Color = clWindowText
    Font.Height = -19
    Font.Name = 'Times New Roman'
    Font.Style = []
    ParentFont = False
  end
  object Label5: TLabel
    Left = 32
    Top = 198
    Width = 178
    Height = 21
    Caption = 'Name of current project'
    Font.Charset = ANSI_CHARSET
    Font.Color = clWindowText
    Font.Height = -19
    Font.Name = 'Times New Roman'
    Font.Style = []
    ParentFont = False
  end
  object Panel1: TPanel
    Left = 0
    Top = 272
    Width = 438
    Height = 37
    Align = alBottom
    BevelOuter = bvNone
    TabOrder = 0
    DesignSize = (
      438
      37)
    object Button1: TButton
      Left = 32
      Top = 6
      Width = 97
      Height = 25
      Anchors = [akTop, akRight]
      Caption = 'Add Employee'
      Default = True
      ModalResult = 1
      TabOrder = 0
      OnClick = Button1Click
    end
    object Button2: TButton
      Left = 301
      Top = 6
      Width = 92
      Height = 25
      Anchors = [akTop, akRight]
      Cancel = True
      Caption = 'Cancel'
      ModalResult = 2
      TabOrder = 1
      OnClick = Button2Click
    end
  end
  object Name: TEdit
    Left = 237
    Top = 40
    Width = 121
    Height = 21
    TabOrder = 1
    Text = 'Name'
  end
  object Post: TEdit
    Left = 237
    Top = 119
    Width = 121
    Height = 21
    TabOrder = 2
    Text = 'Post'
  end
  object Project: TEdit
    Left = 237
    Top = 198
    Width = 121
    Height = 21
    TabOrder = 3
    Text = 'Project'
  end
  object age: TCSpinEdit
    Left = 237
    Top = 159
    Width = 121
    Height = 22
    MaxValue = 99
    MinValue = 18
    TabOrder = 4
    Value = 18
  end
  object degree: TCSpinEdit
    Left = 237
    Top = 82
    Width = 121
    Height = 22
    MaxValue = 4
    MinValue = 1
    TabOrder = 5
    Value = 1
  end
  object Button3: TButton
    Left = 160
    Top = 278
    Width = 99
    Height = 25
    Caption = 'Change Employee'
    TabOrder = 6
    OnClick = Button3Click
  end
end
