rm( list = ls())
###### Importando dados
########################################################################
# como importar/ler dados?
########################################################################
# importando dados
ex02<-read.csv("D:/Google Drive/UNIFESP/7 SEMESTRE/MODELAGEM/NetLogo/saida.csv",header=T, sep=",")  #Separa??o decimal com ponto
par(col=1)
par(mar=c(5,5,4,5))
plot(ex02[,1], type="l", 
     xlab="tempo", ylab="nºindividuos", main="Rede Trófica", 
     ylim=c(1,2000), xlim=c(1,2000))
par(new=TRUE, col=2)
plot(ex02[,2], type="l",
     xlab="", ylab="", ylim=c(1,2000), xlim=c(1,2000))
par(new=TRUE, col=3)
plot(ex02[,3], type="l",
     xlab="", ylab="", ylim=c(1,2000), xlim=c(1,2000))
par(new=TRUE, col=4)
plot(ex02[,4], type="l",
     xlab="", ylab="", ylim=c(1,2000), xlim=c(1,2000))
par(new=TRUE, col=5)
plot(ex02[,5], type="l",
     xlab="", ylab="", ylim=c(1,2000), xlim=c(1,2000))

#pch=15, lwd=1.5,