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

########### - Filtros.
###
## -- Filtros em DataFrames (slace)
workdir <- "C:/DedaticaTec"
dataframe_name.ext <- "Datafram.csv"

setwd(workdir)
df <- read.csv(dataframe_name.ext)

#df[lina,coluna]
df[1]
df[1,]
df[1:6]
df[-4] # não traz a 4 linha

df[1,1]
df[1,1:6]
df[1,-4]
df[1:3,1:6] #Linhas de 1-3 e coluns de 1-6
df[c(-3,-4,-5,-6)]



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