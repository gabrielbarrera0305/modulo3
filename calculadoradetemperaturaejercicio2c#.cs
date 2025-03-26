using System;

class Program
{
    static void Main()
    {
        Console.WriteLine("=== CONVERSOR CELSIUS A FAHRENHEIT ===");

        double celsius;
        while (true)
        {
            Console.Write("Ingrese la temperatura en C: ");
            if (double.TryParse(Console.ReadLine(), out celsius))
                break;
            Console.WriteLine("¡Error! Debe ingresar un número válido.");
        }

        double fahrenheit = (celsius * 9/5) + 32;

        Console.WriteLine($"\n{celsius}C equivalen a {fahrenheit:F1}F");
    }
}