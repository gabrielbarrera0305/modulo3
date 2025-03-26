using System;

class Program
{
    static void Main()
    {
        Console.WriteLine("=== CALCULADORA DE ÁREA TRIANGULAR ===");

        Console.Write("Ingrese la base del triangulo: ");
        double baseTriangulo = Convert.ToDouble(Console.ReadLine());
        
        Console.Write("Ingrese la altura del triangulo: ");
        double altura = Convert.ToDouble(Console.ReadLine());

        double area = (baseTriangulo * altura) / 2;

        Console.WriteLine($"\nEl área del triangulo es: {area:F2}");
    }
}