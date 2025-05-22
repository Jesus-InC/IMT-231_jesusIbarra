from Funciones import divisores, fibonacci_inverso, primos, triangulo_letras
MSJ1 = "Ingrese un número entero positivo, por favor: "

def menu():
    while True:
        print("\n--- MENÚ ---")
        print("1. Calcular la suma de todos los divisores de un número N (excluyendo el propio número).")
        print("2. Generar un triángulo de caracteres con letras del alfabeto hasta una altura N.")
        print("3. Mostrar los primeros N números primos.")
        print("4. Generar la secuencia de los primeros N términos de la serie de Fibonacci inversa.")
        print("5. Salir del programa.")

        opcion = input("Seleccione una opción, por favor: ")

        if opcion == "1":
            n = int(input(MSJ1))
            divisores(n)
        elif opcion == "2":
            n = int(input(MSJ1))
            triangulo_letras(n)
        elif opcion == "3":
            n = int(input(MSJ1))
            primos(n)
        elif opcion == "4":
            n = int(input(MSJ1))
            fibonacci_inverso(n)
        elif opcion == "5":
            print("¡Hasta luego!")
            break
        else:
            print("El número no corresponde a ninguna de las opciones.")

menu()