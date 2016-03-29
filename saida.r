rm( list = ls())
###### Importando dados
########################################################################
# como importar/ler dados?
########################################################################
# importando dados
ex02<-read.csv("/home-local/aluno/Fernando/PROJETO1/saida.csv",header=T, sep=",")  #Separa??o decimal com ponto
par(col=1)
par(mar=c(5,5,4,5))
plot(ex02[,1], type="l", 
     xlab="tempo", ylab="nºindividuos", main="Rede Trófica", 
     ylim=c(1,2500), xlim=c(1,2000))
legend(x=-200, y=2550, legend="grama", lty=1, col=1, lwd=1, bty="n", x.intersp=0.1)
legend(x=250, y=2550, legend="H.1", lty=1, col=2, lwd=1, bty="n", x.intersp=0.1)
legend(x=700, y=2550, legend="H.2", lty=1, col=3, lwd=1, bty="n", x.intersp=0.1)
legend(x=1150, y=2550, legend="C.1", lty=1, col=4, lwd=1, bty="n", x.intersp=0.1)
legend(x=1500, y=2550, legend="C.2", lty=1, col=5, lwd=1, bty="n", x.intersp=0.1)
par(new=TRUE, col=2)
plot(ex02[,2], type="l",
     xlab="", ylab="", ylim=c(1,2500), xlim=c(1,2000))
par(new=TRUE, col=3)
plot(ex02[,3], type="l",
     xlab="", ylab="", ylim=c(1,2500), xlim=c(1,2000))
par(new=TRUE, col=4)
plot(ex02[,4], type="l",
     xlab="", ylab="", ylim=c(1,2500), xlim=c(1,2000))
par(new=TRUE, col=5)
plot(ex02[,5], type="l",
     xlab="", ylab="", ylim=c(1,2500), xlim=c(1,2000))

#pch=15, lwd=1.5,
