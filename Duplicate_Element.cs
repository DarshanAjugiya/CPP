using System;

class Duplicate2DArray
{
    static void Main()
    {
        int[,] arr = {
            {1, 2, 3},
            {4, 2, 5},
            {6, 1, 3}
        };

        int rows = arr.GetLength(0);
        int cols = arr.GetLength(1);

        Console.WriteLine("Duplicate elements are:");

        for (int i = 0; i < rows; i++)
        {
            for (int j = 0; j < cols; j++)
            {
                for (int x = i; x < rows; x++)
                {
                    for (int y = 0; y < cols; y++)
                    {
                        // skip same element position
                        if (i == x && j == y)
                            continue;

                        // avoid re-checking previous elements
                        if (x == i && y < j)
                            continue;

                        if (arr[i, j] == arr[x, y])
                        {
                            Console.WriteLine(arr[i, j]);
                        }
                    }
                }
            }
        }
    }
}
