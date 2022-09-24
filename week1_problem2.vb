Imports System

Module Program
    Sub Main()
        Dim numberArray(100) As Integer
        Dim number, count, smallest, largest As Integer
        Dim stopLoop As Boolean = False
        smallest = 100000000
        largest = -10
        count = 0
        While stopLoop = False
            Console.WriteLine("Enter a positive number")
            number = Console.ReadLine
            If number > 0 Then
                numberArray(count) = number
                count = count + 1
            Else
                If number = -1 Then
                    stopLoop = True
                Else
                    Console.WriteLine("Invalid number")
                End If
            End If
        End While
        For x = 0 To count
            If numberArray(x) > largest And numberArray(x) > 0 Then
                largest = numberArray(x)
            End If
            If numberArray(x) < smallest And numberArray(x) > 0 Then
                smallest = numberArray(x)
            End If
        Next
        Console.WriteLine("Largest number is " & largest)
        Console.WriteLine("Smallest number is " & smallest)
        Console.WriteLine("Total count of positive numbers entered " & count)
        Console.ReadKey()

    End Sub
End Module

