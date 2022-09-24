Imports System

Module Program
    Sub Main()
        Dim stopLoop As Boolean
        Dim smallest, largest, number, count As Integer
        stopLoop = False
        smallest = 10000000
        largest = 0
        count = 0
        While stopLoop = False
            Console.WriteLine("Enter a positive number")
            number = Console.ReadLine
            If number > 0 Then
                If number <> -1 Then
                    count = count + 1
                    If number > largest Then
                        largest = number
                    End If
                    If number < smallest Then
                        smallest = number
                    End If
                End If
            ElseIf number = -1 Then
                stopLoop = True
            Else
                Console.WriteLine("invalid number")
            End If
        End While
        Console.WriteLine("Largest number is " & largest)
        Console.WriteLine("Smallest number is " & smallest)
        Console.WriteLine("Total count of positive numbers entered " & count)
        Console.ReadKey()
    End Sub
End Module
