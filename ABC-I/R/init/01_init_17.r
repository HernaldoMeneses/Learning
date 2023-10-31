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

# while
x <- 0
while (x < 10 ) {
    print(x)
    x <- x+1
}

x <- 0
cont <- 0
idades100 <- 0

while (x < 100){
    cont <- cont+1
    idades100[cont] <- idades[cont]
    x <- x+idades[cont]
}

idades
idades100
sum(idades100)

###
x <- 0
cont <- 0
idades100 <- 0

while (x < 100){
    cont <- cont+1
    idades100[cont] <- idades[cont]
    x <- x+idades[cont]
    y <- x+idades[cont+1]
}

idades
idades100
sum(idades100)

###
x <- 0
cont <- 0
idades100 <- 0

while (y < 100){
    cont <- cont+1
    idades100[cont] <- idades[cont]
    x <- x+idades[cont]
    y <- x+idades[cont+1]
}

idades
idades100
sum(idades100)

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