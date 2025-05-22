def divisores(N):
    suma = 0
    for i in range(1, N):
        if N % i == 0:
            suma += i
    print("La suma de todos los divisores de", N, "(excluyendo el propio número) es:", suma)
