# Задачки за преди изпита

1. Дадена е матрица от символи 8х8, изобразяваща шахматна дъска. Първият ред пред белия играч е с индекс 0, а пред черния - 7. Отсъствието на фигура се бележи с нулевия символ; всеки вид фигура се бележи с една буква - малка или голяма - белите фигури се бележат с малки, а черните - с големи букви. Пешките означаваме с 'p' и 'P'.
Напишете функция, която връща динамично заделен масив с координатите на пешките, които могат да направят ход, използвайки правилата на шаха.
Дефинирайте за целта подходяща структура Location.

2. Дадена е матрица от низове с фиксирана дължина. Напишете функция, връщаща динамично заделен масив с указатели към тези елементи от матрицата, които са начало на редица сортирани низове от поне 3 елемента, броейки в положителна посока по първата координата.

3. Даден е масив от числа, представляващи позиции в този масив (т.е. числата са не по-големи от неговата дължина - 1). Двама играчи започват от две не непременно различни позиции и на всеки ход се преместват на позицията, указана от елемента, върху който са стъпили в момента.
Напишете рекурсивна функция, която приема:
	 - такъв масив, позициите на двамата играчи + брой ходове и отпечатва позициите на играчите след толкова ходове
	 - такъв масив + позициите на двамата играчи и отпечатва след колко хода ще стъпят на една и съща позиция.
