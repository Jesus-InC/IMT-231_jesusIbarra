def primos(N):
    contador = 0
    numeroPrimo = 2
    
    while contador < N:
        contadorPrimo = 0
        for i in range(1, numeroPrimo + 1):
            if numeroPrimo % i == 0:
                contadorPrimo = contadorPrimo + 1
        
        if contadorPrimo == 2:
            print(numeroPrimo)
            contador = contador + 1
        
        numeroPrimo = numeroPrimo + 1
