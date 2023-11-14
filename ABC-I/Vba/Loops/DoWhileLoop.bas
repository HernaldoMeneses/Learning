Attribute VB_Name = "Módulo1"
' set type Explicit
Option Explicit
Sub DoWhileLoop()
    Dim x, contador, soma
    x = 10: contador = 1: soma = 0
    Do While contador <= x
        soma = soma + contador
        contador = contador + 1
    Loop
    MsgBox "Valor da Soma = " & soma
End Sub
