using System;

class Program
{
    static void Main()
    {
        Console.WriteLine("=== SUMADORA BASICA ===");

        double num1;
        while (true)
        {
            Console.Write("Ingrese el primer numero: ");
            if (double.TryParse(Console.ReadLine(), out num1))
                break;
            Console.WriteLine("¡Error! Debe ingresar un numero valido.");
        }

        double num2;
        while (true)
        {
            Console.Write("Ingrese el segundo numero: ");
            if (double.TryParse(Console.ReadLine(), out num2))
                break;
            Console.WriteLine("¡Error! Debe ingresar un numero valido.");
        }

        double resultado = num1 + num2;
        Console.WriteLine($"\nEl resultado de {num1} y {num2} = {resultado}");
    }
}