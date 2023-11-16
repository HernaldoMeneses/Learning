Option Explicit
Sub struct_for()
'
' struct_for Macro
'
Dim x, i, soma As Integer
x = 10
soma = 0
For i = 1 To x
    soma = soma + i
Next
MsgBox "Valor da Soma = " & soma
'
End Sub
