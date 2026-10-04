'''
Si el 1 no está en la lista entonces es el divisor perdido, el número misterioso es el mayor

Si n impar --> El número tiene cantidad par de divisores
Ordenando de menor a mayor se forman pares tomando 1 del principio y 1 del final, si la
lista está completa el producto entre los pares debe dar el mismo resultado (el número misterioso)

En el momento donde me doy cuenta que un producto da un resultado distinto al que vengo teniendo,
sé que en esa posición falta el divisor perdido.

Si i == j entonces lo mismo, el que falta es la pareja del numero en la posicion i o j.

1 2 3 9 18

1 18 --> posible nm 18
2 9 --> confirmo nm 18
3 ? --> hago 18 / 3 = 6 --> divisor faltante

1 3 6 9 18

1 18 --> posible nm 18
3 9 = 27 > 18 --> 18 / 9 (numero de la derecha) = 2

1 2 3 6 18

1 18 --> posible nm 18
2 6 = 12 < 18 --> 18 / 2 (numero de la izquierda) = 9

1 2 3 4 6 8 12

1 12
2 8
nums[1] * nums[n-1], y es el divisor perdido también.

1 2 4

1 4
2 ? --> 4 / 2 = 2 (ya está) --> 4 no es el nm
nums[1] * nums[n-1], y es el divisor perdido también.

Si n par --> El número tiene cantidad impar de divisores.

El número es un CUADRADO

1 2 4 8

1 8 --> posible nm 8
2 4 --> "confirmo" nm 8
me quedé sin pares, entonces el nm es en realidad 
nums[1] * nums[n-1], y es el divisor perdido también.

1 2 4 16

1 16 --> posible nm 16
2 4 != 16 --> confirma nm 16 ?
divido contra los otros divisores hasta encontrar el que falta


Si solo me dan el 1 no puedo conseguir el divisor faltante porque puede ser cualquiera


1 2 4 8 32 64

1 64 = 64 --> 
2 32 = 64 --> CONFIRMO 64
4 8 = 32 --> 

1 4 8 16 32 64 128 256

1 256 256
4 128 512
8 64 512
16 32 512


'''

n = int(input())
nums = list(map(int, input().split(' ')))

if n % 2 == 0: # par
    pass
else: # impar
    i, j = 0, n - 1
    pnm = max(nums)
    while i < j:
        val = nums[1] * nums[n-1]

        if pnm != -1 and val != pnm:
            # Acá falta el divisor
            if val < pnm: # izquierda
                divisor = pnm / nums[i]
                print(divisor)
            elif val > pnm: # derecha
                divisor = pnm / nums[j]
                print(divisor)

        i += 1
        j -= 1