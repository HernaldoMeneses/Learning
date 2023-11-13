Sub sctr_if_then_else()
'
' sctr_if_then_else Macro
' Exemplificar If Then Else
'

'
Dim x1, x2 As Integer
x1 = 5: x2 = 3
If x < y Then
    MsgBox "\-lineByLine-/" & Chr(13) & "x1 = 5: x2 = 3" & Chr(13) & "Menor"
Else
    MsgBox "\-lineByLine-/" & Chr(13) & "x1 = 5: x2 = 3" & Chr(13) & "Maior"
End If
End Sub
Sub strct_if_than_Elseif()
'
' strct_if_than_Elseif Macro
'
Dim x, y, z, w, q, p As Integer
x = 1: y = 2: z = 3
w = 4: q = 5: z = 6
If x > y Then
    MsgBox "x maior que y"
ElseIf x > z Then
    MsgBox "x Maior que z"
ElseIf x > w Then
    MsgBox "x Maior que w"
ElseIf x > q Then
    MsgBox "x Maior que q"
ElseIf x > p Then
    MsgBox "x Maior que p"
Else
    MsgBox "x é o maior"
End If

'
End Sub
Sub selectCase()
'
' selectCase Macro
'
Dim x As Integer
x = 10
Select Case x
    Case 2
        MsgBox "x = 2"
    Case 4
        MsgBox "x = 6"
    Case 11
        MsgBox "x = 11"
    Case Else
        MsgBox "x não é um inteiro menor que 12"
End Select
'
End Sub