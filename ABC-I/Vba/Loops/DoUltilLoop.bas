Attribute VB_Name = "M�dulo1"
' set type Explicit
Option Explicit
Sub DoUntil()
    Dim x, contador, soma
    x = 10: contador = 1: soma = 0
    Do 
        soma = soma + contador
        contador = contador + 1
    Loop Until contador > x
    MsgBox "Valor da Soma = " & soma
End Sub
