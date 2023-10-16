########### - Guia Inicial.
#
# - Objetivo: Aplicar Machine Leaning no R
# - Obs     : Sem Exaurimento.
#
# - Titulo  : Machine Leaning com R.
# - Tema    : uma breve visualização.
#
# - Autor   : Hernaldo Meneses 
# - Criação : Data de criação do script
# - Infrastrutura de compilação e informações ao final do Script.
#--------------------------------------------------------------------Thanks.

########### - Machine Learning
###
## -- Tratamento do dataset
path <- "E:\\Github\\Learning\\ABC-I\\R\\csv"
file <- "fipe_Jun2018.csv"

setwd(path)
df <- read.csv(file) 
df <- read.csv(file,header=TRUE,encoding="UTF-8")
#base de Dados

#Knowing data
View(df)
str(df)

seedf <- function (dataf) {
  View(dataf)
  str(dataf)
}

#Tratamento
#exclusão de colunas
df$X <- NULL
df$price_reference <- NULL
seedf(df)

#renomear campos
?names
names(df)
names(df) <- c("Marca", "Carro", "Ano_Modelo", "Combustivel", "Preço")
names(df)
seedf(df)

?summary
summary(df$Ano_Modelo)
df$Ano_Modelo[df$Ano_Modelo==320000] <- "Zero Km"
df$Ano_Modelo <- as.factor(df$Ano_Modelo)
summary(df$Ano_Modelo)

summary(df$Ano_Modelo)
str(df$Ano_Modelo)

summary(df$Preço)
df$Preço1 <- as.numeric(df$Preço)
summary(df$Preço1)
df$Preço1 <- NULL

?gsub
df$Preço1 <- gsub("R\\$|\\.| ", "",df$Preço)
df$Preço1 <- NULL
df$Preço <- gsub("R\\$|\\.| ", "",df$Preço)

summary(df$Preço)
df$Preço <- as.numeric(gsub("\\.",".",df$Preço))
summary(df$Preço)

str(df$Preço)


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