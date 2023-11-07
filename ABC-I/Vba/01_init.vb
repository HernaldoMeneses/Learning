Sub Macro1()
'
' Macro1 Macro
' Edita green
'
' Atalho do teclado: Ctrl+Shift+L
'
    With Selection.Interior
        .Pattern = xlSolid
        .PatternColorIndex = xlAutomatic
        .ThemeColor = xlThemeColorAccent3
        .TintAndShade = -0.499984740745262
        .PatternTintAndShade = 0
    End With
    With Selection.Font
        .ThemeColor = xlThemeColorAccent3
        .TintAndShade = 0.599993896298105
    End With


End Sub