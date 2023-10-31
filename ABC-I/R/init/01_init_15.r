########### - Guia Inicial.
#
# - Objetivo: Primeiro contato com a linguagem R e O RStudio
# - Obs     : Sem Exaurimento.
#
# - Titulo  : Organizacao dos dados pela linguagem.
# - Tema    : Organizacao dos dados pela linguagem.
#
# - Autor   : Hernaldo Meneses 
# - Criação : Data de criação do script
# - Infrastrutura de compilação e informações ao final do Script.
#--------------------------------------------------------------------Thanks.

########### - Fluxo control
###
## -- if, for, while

# if TRUE do
if (5==5) "iqual"
if (5!=5) "not iqual"
if (5!=5) "empyt"
if (5==5) 1+1
# GoodCood
if (5==5) {
    "igual"
    }
# Try
if (5==5) {
    "igual"
    if (6==6) {
        "igual too"
        }
    
    }
# Supouse
ages <- c(25,30)
names <- c("Jo","Nho")
df <- data.frame(names,ages)

true_value = "True"
false_value = "False"

if (df$ages[df$names=="Nho"] > df$ages[df$names=="Jo"]) {
    true_value  
} else {
    false_value      
}

##
###
########### --------------------------------------------------------------------Reloaded.


########### - Compile_By.
#
# - coding: utf-8
# - Última Atualização: Data da última atualização
# - R Version: Versão do Python usada para desenvolver o script (por exemplo, Python 3.7)
# - IDE: RStudio.2023.09.0
# - SO:  Windows 10 Pro.22H2
#
# - Obs: no bugs.
# - Obs: 01/10/2023.
#
# - Hello... please if you find something wrong,  contact-me.
#--------------------------------------------------------------------Follow the white rabbit.