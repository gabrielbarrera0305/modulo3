using System;

class Program
{
    static void Main()
    {
        Console.WriteLine("=== CALCULADORA DE PROMEDIO ===");

        double[] numeros = new double[3];
        string[] ordinales = { "primer", "segundo", "tercer" };

        for (int i = 0; i < 3; i++)
        {
            while (true)
            {
                Console.Write($"Ingrese el {ordinales[i]} numero: ");
                if (double.TryParse(Console.ReadLine(), out numeros[i]))
                    break;
                Console.WriteLine("¡Error! Debe ingresar un numero válido.");
            }
        }

        double promedio = (numeros[0] + numeros[1] + numeros[2]) / 3;

        Console.WriteLine($"\nEl promedio de {numeros[0]}, {numeros[1]} y {numeros[2]} es: {promedio:F2}");
    }
}