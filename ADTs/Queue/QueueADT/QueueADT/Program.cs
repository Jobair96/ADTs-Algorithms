﻿using System;

namespace Data_Structures
{
    class Program
    {
        static void Main(string[] args)
        {
            Queue<int> list = new Queue<int>();
            Console.WriteLine(list.isEmpty());
            list.enqueue(0);
            list.enqueue(5);
            list.enqueue(7);
            list.enqueue(-4);
            list.enqueue(0);

            Console.WriteLine(list.dequeue());
            Console.WriteLine(list.dequeue());
            Console.WriteLine(list.dequeue());
            list.enqueue(9);
            Console.WriteLine(list.dequeue());
            Console.WriteLine(list.isEmpty());
            Console.WriteLine(list.isEmpty());
            list.nuke();
            Console.WriteLine(list.isEmpty());
            Console.ReadKey();
        }
    }
}
