rm( list = ls())
###### Importando dados
########################################################################
# como importar/ler dados?
########################################################################
# importando dados
ex02<-read.csv("D:/Google Drive/UNIFESP/7 SEMESTRE/MODELAGEM/NetLogo/saida.csv",header=T, sep=",")  #Separa??o decimal com ponto

plot(ex02[,1],type="l")
par(new="true")
plot(ex02[,2],type="l", axes=FALSE, ann=FALSE, pch=16)
axis(4)
help(plot)

par(mar=c(5,5,4,5))
plot(ex02[,1], type="l", 
     xlab="tempo", ylab="nºindividuos", main="Rede Trófica", 
     ylim=c(1,3500), xlim=c(1,3000))
par(new=TRUE, col=2)
plot(ex02[,2], type="l",
     xlab="", ylab="", ylim=c(1,3500), xlim=c(1,3000))

#pch=15, lwd=1.5,