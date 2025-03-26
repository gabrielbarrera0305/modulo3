using System;

class Program
{
    static void Main()
    {
        Console.WriteLine("=== RESTADORA BASICA ===");

        double num1 = ObtenerNumero("Ingrese el numero a restar: ");
        double num2 = ObtenerNumero("Ingrese el numero que resta: ");

        double resultado = num1 - num2;
        Console.WriteLine($"\nla resta de {num1} y {num2} = {resultado}");
    }

    static double ObtenerNumero(string mensaje)
    {
        double numero;
        while (true)
        {
            Console.Write(mensaje);
            if (double.TryParse(Console.ReadLine(), out numero))
                return numero;
            Console.WriteLine("¡Error! Ingrese un número válido.");
        }
    }
}