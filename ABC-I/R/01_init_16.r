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

# For
idades <- c(25,30,24,29,31,12)
nomes <- c("Joao","caina","Maria","Leo","Lia","Enzo")
df <- data.frame(nomes,idades)

# para cada posição faça isso
for (i in idades) {
    print(i)
}

for (i in df$idades) {
    print(i)
}

v <- 0
for (i in df$idades) {
    if (i > v) {
        v <- i
    }
}
df$nome[df$idades == v] #to show de must age

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