def triangulo_letras(N):
    letras = ['A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J',
              'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T',
              'U', 'V', 'W', 'X', 'Y', 'Z']
    for i in range(1, N + 1):
        linea = ""
        for j in range(i):
            linea += letras[j % 26] + " "  #Para repetir letras después de la Z
        print(linea)
