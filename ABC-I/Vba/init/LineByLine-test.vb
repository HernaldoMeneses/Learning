' set type Explicit
Option Explicit
Sub test()
' @-LineByLine_/
' test Macro
' testarScripts
'
' Atalho do teclado: Ctrl+t
'
Dim msg1, msg2, msg3, msg4 As String
Dim x, y As Integer
Dim result, salary As Double
Dim teste As Boolean

' : more than one comand by line
x = 3: y = 2: result = x * y
msg3 = "x = 3: y = 2: result = x * y"
msg1 = "Multiply Result: ": msg2 = " Hello World "
MsgBox msg1 & vbNewLine & result & vbNewLine & msg2 & vbNewLine & msg3

result = x / y
msg3 = "x = 3: y = 2: result = x / y"
msg1 = "Division Result: ": msg2 = " Hello World "
MsgBox msg1 & Chr(13) & result & Chr(13) & msg2 & Chr(13) & msg3

result = x ^ y
msg3 = "x = 3: y = 2: result = x ^ y"
msg1 = "Expo Result: ": msg2 = " Hello World "
MsgBox msg1 & vbNewLine & result & vbNewLine & msg2 & vbNewLine & msg3

result = x Mod y
msg3 = "x = 3: y = 2: result = x Mod y"
msg1 = "Resto division Result: ": msg2 = " Hello World "
MsgBox msg1 & vbNewLine & result & vbNewLine & msg2 & vbNewLine & msg3

End Sub