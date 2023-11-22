' set type Explicit
Option Explicit
Sub FunctionIsEmpty()
    Dim x, y, z
    Dim a, b, q
    Dim c(20)
    Dim sms As String
    
    x = 12
    y = 23.456
    z = 123456789
    a = "Este é um valor de text 1"
    b = Date

    sms = sms & "Tipo x: " & IsEmpty(x) & " Valor : " & x & Chr(13)
    sms = sms & "Tipo y: " & IsEmpty(y) & " Valor : " & y & Chr(13)
    sms = sms & "Tipo z: " & IsEmpty(z) & " Valor : " & z & Chr(13)
    sms = sms & "Tipo a: " & IsEmpty(a) & " Valor : " & a & Chr(13)
    sms = sms & "Tipo b: " & IsEmpty(b) & " Valor : " & b & Chr(13)
    sms = sms & "Tipo q: " & IsEmpty(q) & " Valor : " & q & Chr(13)

    MsgBox sms
End Sub