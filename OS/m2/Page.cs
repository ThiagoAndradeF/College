using System;
using System.Diagnostics;
using System.Runtime.InteropServices;

class Program
{
    static void Main(string[] args)
    {
        const int bufSize = 32 * 1024 * 1024; // 32 MB
        const int iterationCount = 100;

        MeasureAllocation(bufSize, iterationCount);
        MeasureWrite(bufSize, iterationCount);
        MeasureRead(bufSize, iterationCount);
        MeasureAllocateWriteFree(bufSize, iterationCount);
        MeasureAllocateReadFree(bufSize, iterationCount);
    }

    static void MeasureAllocation(int bufSize, int iterationCount)
    {
        Stopwatch stopwatch = Stopwatch.StartNew();
        for (int i = 0; i < iterationCount; i++)
        {
            int[] p = new int[bufSize / sizeof(int)];
        }
        stopwatch.Stop();
        Console.WriteLine($"{stopwatch.Elapsed.TotalSeconds:F4} s to allocate {bufSize / (1024 * 1024)} MB {iterationCount} times.");
    }

    static void MeasureWrite(int bufSize, int iterationCount)
    {
        int[] p = new int[bufSize / sizeof(int)];
        Stopwatch stopwatch = Stopwatch.StartNew();
        for (int i = 0; i < iterationCount; i++)
        {
            for (int j = 0; j < p.Length; j++)
            {
                p[j] = 1;
            }
        }
        stopwatch.Stop();
        Console.WriteLine($"{stopwatch.Elapsed.TotalSeconds:F4} s to write {bufSize / (1024 * 1024)} MB {iterationCount} times.");
    }

    static void MeasureRead(int bufSize, int iterationCount)
    {
        int[] p = new int[bufSize / sizeof(int)];
        for (int j = 0; j < p.Length; j++)
        {
            p[j] = 1; // Initialize
        }
        Stopwatch stopwatch = Stopwatch.StartNew();
        int sum = 0;
        for (int i = 0; i < iterationCount; i++)
        {
            for (int j = 0; j < p.Length; j++)
            {
                sum += p[j];
            }
        }
        stopwatch.Stop();
        Console.WriteLine($"{stopwatch.Elapsed.TotalSeconds:F4} s to read {bufSize / (1024 * 1024)} MB {iterationCount} times, sum = {sum}.");
    }

    static void MeasureAllocateWriteFree(int bufSize, int iterationCount)
    {
        Stopwatch stopwatch = Stopwatch.StartNew();
        for (int i = 0; i < iterationCount; i++)
        {
            int[] p = new int[bufSize / sizeof(int)];
            for (int j = 0; j < p.Length; j++)
            {
                p[j] = 1;
            }
        }
        stopwatch.Stop();
        Console.WriteLine($"{stopwatch.Elapsed.TotalSeconds:F4} s to allocate and write {bufSize / (1024 * 1024)} MB {iterationCount} times.");
    }

    static void MeasureAllocateReadFree(int bufSize, int iterationCount)
    {
        Stopwatch stopwatch = Stopwatch.StartNew();
        int sum = 0;
        for (int i = 0; i < iterationCount; i++)
        {
            int[] p = new int[bufSize / sizeof(int)];
            for (int j = 0; j < p.Length; j++)
            {
                sum += p[j]; // Read
            }
        }
        stopwatch.Stop();
        Console.WriteLine($"{stopwatch.Elapsed.TotalSeconds:F4} s to allocate and read {bufSize / (1024 * 1024)} MB {iterationCount} times, sum = {sum}.");
    }
}