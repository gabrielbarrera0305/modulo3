using System;

class Program
{
    static void Main()
    {
        Console.WriteLine("=== CALCULO DEL RESTO DE DIVISION ===");

        int dividendo;
        while (true)
        {
            Console.Write("Ingrese el dividendo (entero): ");
            if (int.TryParse(Console.ReadLine(), out dividendo))
                break;
            Console.WriteLine("¡Error! Debe ingresar un número entero válido.");
        }

        int divisor;
        while (true)
        {
            Console.Write("Ingrese el divisor (entero diferente de cero): ");
            if (int.TryParse(Console.ReadLine(), out divisor) && divisor != 0)
                break;
            Console.WriteLine("¡Error! El divisor debe ser un entero diferente de cero.");
        }

        int resto = dividendo % divisor;

        Console.WriteLine($"\nEl resto de {dividendo} y {divisor} es: {resto}");
    }
}