' set type Explicit
Option Explicit
Sub FunctionIsNumeric()
    Dim x, y, z
    Dim a, b, q
    Dim c(20)
    Dim sms As String
    
    x = 12
    y = 23.456
    z = 123456789
    a = "Este é um valor de text 1"
    b = Date

    sms = sms & "Tipo x: " & IsNumeric(x) & " Valor : " & x & Chr(13)
    sms = sms & "Tipo y: " & IsNumeric(y) & " Valor : " & y & Chr(13)
    sms = sms & "Tipo z: " & IsNumeric(z) & " Valor : " & z & Chr(13)
    sms = sms & "Tipo a: " & IsNumeric(a) & " Valor : " & a & Chr(13)
    sms = sms & "Tipo b: " & IsNumeric(b) & " Valor : " & b & Chr(13)
    sms = sms & "Tipo q: " & IsNumeric(q) & " Valor : " & q & Chr(13)

    MsgBox sms
End Sub