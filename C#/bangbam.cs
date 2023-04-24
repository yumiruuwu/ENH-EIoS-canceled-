using System;

struct BangBam
{
    public int[] key;
    public int[] value;
    public int size;
}

class Program
{
    static void Main(string[] args)
    {
        BangBam bangBam;
        bangBam.key = new int[1000];
        bangBam.value = new int[1000];
        bangBam.size = 0;

        // nhập N số nguyên từ bàn phím và thêm vào bảng băm
        Console.Write("Nhap so luong phan tu N: ");
        int n = int.Parse(Console.ReadLine());

        for (int i = 0; i < n; i++)
        {
            Console.Write("Nhap gia tri phan tu thu {0}: ", i + 1);
            int x = int.Parse(Console.ReadLine());

            // tính hash code của phần tử
            int hash = x.GetHashCode();

            // thêm phần tử vào bảng băm
            bangBam.key[hash] = x;
            bangBam.value[hash] = i;
            bangBam.size++;
        }

        // hiển thị các phần tử trong bảng băm
        for (int i = 0; i < bangBam.size; i++)
        {
            Console.WriteLine("Key: {0}, Value: {1}", bangBam.key[i], bangBam.value[i]);
        }

        Console.ReadLine();
    }
}
