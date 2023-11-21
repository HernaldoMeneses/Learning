' set type Explicit
Option Explicit
Sub TypeData()
    Dim x, y, z
    Dim a, b 
    Dim c(20)
    Dim sms As String
    
    x = 12
    y = 23.456
    z = 123456789
    a = "Este é um valor de text 1"
    b = Date

    sms = sms & "Tipo x: " & VarType(x) & "Valor : " & x & Chr(13)
    sms = sms & "Tipo x: " & VarType(y) & "Valor : " & y & Chr(13)
    sms = sms & "Tipo x: " & VarType(z) & "Valor : " & z & Chr(13)
    sms = sms & "Tipo x: " & VarType(a) & "Valor : " & a & Chr(13)
    sms = sms & "Tipo x: " & VarType(b) & "Valor : " & b & Chr(13)

    MsgBox sms
End Sub