using System;
using System.Collections.Generic;

class Program
{
    static void Main(string[] args)
    {
        string[] data = { "bing", "read", "fine", "hash", "test", "mute", "cord", "news", "down", "rank" };

        Dictionary<string, int> hashTable = new Dictionary<string, int>();

        for (int i = 0; i < data.Length; i++)
        {
            hashTable.Add(data[i], i);
        }

        Console.WriteLine("Key\tValue");

        foreach (KeyValuePair<string, int> item in hashTable)
        {
            Console.WriteLine(item.Key + "\t" + item.Value);
        }
    }
}
