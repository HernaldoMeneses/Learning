Option Explicit
Sub CDblConvert()
'Convert to Bolean or large float
    Dim x, y, z
    Dim a, b, q
    Dim c(20)
    Dim sms As String
    
    x = 12
    y = 23.456
    z = 123456789
    a = "Este é um valor de text 1"
    b = Date

    sms = sms & "Tipo x: " & IsNumeric(x) & " - " & CDbl(x) & " Valor : " & x & Chr(13)
    sms = sms & "Tipo y: " & IsNumeric(y) & " - " & CDbl(y) & " Valor : " & y & Chr(13)
    sms = sms & "Tipo z: " & IsNumeric(z) & " - " & CDbl(z) & " Valor : " & z & Chr(13)
    'sms = sms & "Tipo a: " & IsNumeric(a) & CBool(a) & " Valor : " & a & Chr(13)
    'sms = sms & "Tipo b: " & IsNumeric(b) & " - " & CBool(b) & " Valor : " & b & Chr(13)
    'sms = sms & "Tipo q: " & IsNumeric(q) & " - " & CBool(q) & " Valor : " & q & Chr(13)

    MsgBox sms
'
End Sub