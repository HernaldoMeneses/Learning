Option Explicit
Sub ByteConvert()
    Dim x, y, z
    Dim a, b, q
    Dim c(20)
    Dim sms As String
    
    x = 0
    y = 103
    z = 255 'Maximium
    a = "Este é um valor de text 1"
    b = Date

    sms = sms & "Tipo x: " & IsNumeric(x) & " - " & CByte(x) & " Valor : " & x & Chr(13)
    sms = sms & "Tipo y: " & IsNumeric(y) & " - " & CByte(y) & " Valor : " & y & Chr(13)
    sms = sms & "Tipo z: " & IsNumeric(z) & " - " & CByte(z) & " Valor : " & z & Chr(13)
    'sms = sms & "Tipo a: " & IsNumeric(a) & CBool(a) & " Valor : " & a & Chr(13)
    'sms = sms & "Tipo b: " & IsNumeric(b) & " - " & CByte(b) & " Valor : " & b & Chr(13)
    'sms = sms & "Tipo q: " & IsNumeric(q) & " - " & CByte(q) & " Valor : " & q & Chr(13)

    MsgBox sms
'
End Sub