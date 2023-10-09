########### - Guia Inicial.
#
# - Objetivo: Primeiro contato com a linguagem R e O RStudio
# - Obs     : Sem Exaurimento.
# -         Funções
# -             * Bult-in
# -             * Not Bult-in
# -         Listas
#
# - Infrastrutura de compilação e informações ao final do Script.
#--------------------------------------------------------------------Thanks.

########### - Parte II - Funções.
#
# - Funcoes
#       - function_name()
# - As funcoes Fazem parte de um pacote
# - Pacotes podem ser bult-in ou baixados posteriormente à intalação da linguagem.
# - Criando uma function 
# - variavel é diferente de funcao pro 
# - Funcao bult-in c - o que ela faz?
c <- c(a,b)
c
# help da funcao
?c
c <- c("logica", "programacao")
c

a <- c(23,32,12,56)
a
# - como a funcao c vetoriza, ou seja, armazena objetos em posiçoes especificas.
# - podemos acessá-los.
a[0]
c[0]

a[2]
# - outro exemplo de funcao bult-in
?summary
summary(a)
summary(c)

#_utilizando uma funcao não bult-in, ou seja, que não vem por padrao
?str_c

install.packages("stringr") # intala o pacote stringr que contem as funçoes abaixo.
?str_c
??str_c

#perceba que, por não ser um package bult-in, need import
library("stringr")
?str_c
a <- "first name"
b <- "Second"
d <- str_c(a,b)
f <- c(a,b)
#veja a diferença.
d
f
########### --------------------------------------------------------------------Reloaded.

########### - Compile_By.
#
# - SO:  Windows 10 Pro.22H2
# - IDE: RStudio.2023.09.0
# - Obs: no bugs.
# - Obs: 01/10/2023.
#
# - Hello... please if you find something wrong,  contact-me.
#--------------------------------------------------------------------Follow the white rabbit.