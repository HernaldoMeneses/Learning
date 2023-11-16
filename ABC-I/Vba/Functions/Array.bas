Option Explicit
Sub Arrays()
'
' struct_for Macro
'
Dim Dias(6) As String
Dim sms As String
Dim i As Integer

Dias(0) = "Domingo"
Dias(1) = "Segunda-Feira"
Dias(2) = "Terça-Feira"
Dias(3) = "Quarta-Feira"
Dias(4) = "Quinta-Feira"
Dias(5) = "Sexta-Feira"
Dias(6) = "Sábado"

For i = 0 To 6
''    sms = sms & "Dia: " & i + 1 & " " Dias(i)
    sms = sms & "Dia: " & i + 1 & " " & Dias(i) & " " & vbNewLine
    
Next
MsgBox sms

IsArray(Dias)
IsArray(sms)
'
End Sub