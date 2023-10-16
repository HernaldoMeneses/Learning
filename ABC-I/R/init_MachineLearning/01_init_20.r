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

set.seed(100)

# Separar dados de treino e teste de maneira randômica
linhas <- sample(1:length(df$brand),length(df$brand)*0.7)
# Dados de Treino - 70%
treino = df[linhas,]
# Dados de teste - 30%
teste = df[-linhas,]
# Criar o Modelo
library(rpart)
#View(df)
modelo <- rpart(price ~ .,data = treino,control = rpart.control(cp = 0))
# realizar previsões
teste$Previsão <- predict(modelo,teste)
View(teste)
# analizar resultados

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