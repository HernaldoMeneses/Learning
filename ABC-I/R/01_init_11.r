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

########### - DataFrames
###
## -- DataFrames
# \\ - bug*
path <- "C:\\Users\\herna\\OneDrive\\Github\\Learning\\ABC-I\\R\\csv"
file <- "election_results_presidential.csv"

setwd(path)
df <- read.csv(file)

?View

View(df)
str(df)
summary(df)

df
df[14]
#o $ auxilia na seleção da coluna ao digitar
df$candidate_name
str(df$candidate_name)
summary(df$candidate_name)

class(df$candidate_name)
class(df[14])

fatia_df <- df
fatia_df <- df[1:3]
fatia_df
fatia_df[2] <- NULL
fatia_df
fatia_df$newColumns <- "a"
fatia_df
class(fatia_df$newColumns)
fatia_df$newColumns <- NULL
fatia_df$newColumns <- NA
fatia_df$newColumns[1:3] <- c(2,4,5)
fatia_df
class(fatia_df$newColumns)

Col1 <- df[1]
Col2 <- df$nomeColuna

class(df$nomeColuna)
class(Col2)

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