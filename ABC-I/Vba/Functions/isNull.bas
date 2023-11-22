' set type Explicit
Option Explicit
Sub FunctionIsNull()
    Dim x, y, z
    Dim a, b, q
    Dim c(20)
    Dim sms As String
    
    x = 12
    y = 23.456
    z = 123456789
    a = "Este é um valor de text 1"
    b = Date

    sms = sms & "Tipo x: " & IsNull(x) & " Valor : " & x & Chr(13)
    sms = sms & "Tipo y: " & IsNull(y) & " Valor : " & y & Chr(13)
    sms = sms & "Tipo z: " & IsNull(z) & " Valor : " & z & Chr(13)
    sms = sms & "Tipo a: " & IsNull(a) & " Valor : " & a & Chr(13)
    sms = sms & "Tipo b: " & IsNull(b) & " Valor : " & b & Chr(13)
    sms = sms & "Tipo q: " & IsNull(q) & " Valor : " & q & Chr(13)

    MsgBox sms
End Sub