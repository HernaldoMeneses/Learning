Attribute VB_Name = "Módulo1"
' set type Explicit
Option Explicit
Sub DoLoopWhile()
    Dim x, contador, soma
    x = 10: contador = 1: soma = 0
    Do
        soma = soma + contador
        contador = contador + 1
    Loop While contador <= x
    MsgBox "Valor da Soma = " & soma
End Sub
