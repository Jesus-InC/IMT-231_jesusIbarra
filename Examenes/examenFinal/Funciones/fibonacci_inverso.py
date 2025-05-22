def fibonacci_inverso(N):
    a = 0 # Primer término de la serie Fibonacci
    b = 1 # Segundo término de la serie Fibonacci
    
    #Lista con N elementos
    fib = [0] * N 
    
    i = 0
    
    while i < N:
        fib[i] = a     
        c = a + b      
        #Actualizamos valores
        a = b          
        b = c    

        i = i + 1   
    
    #Orden inverso
    j = N - 1          
    while j >= 0:
        print(fib[j])
        j = j - 1      
