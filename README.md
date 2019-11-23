1. Что такое графы
2. Ориентированные и неориентированные графы
3. Пути и циклы
4. Кратные рёбра и петли
5. Связные графы
6. Дерево - это связный граф без циклов, петель и кратных рёбер
    Количество рёбер связано с количеством вершин формулой E=V−1.
    Между любой парой вершин существует ровно один путь.
7. матрица смежности
    В качестве примера решим простую задачу: для каждой вершины графа выведем количество рёбер, смежных с ней.
    
    Преимущества матрицы смежности:
    Сложность проверки наличия ребра между двумя вершинами: O(1)
    
    Недостатки матрицы смежности:
    Занимает N^2 памяти, что неприемлемо для достаточно больших графов.
    Сложность перебора всех вершин, смежных с данной: O(N)
8. Список смежности
    Преимущества списка смежности:

    Использует O(M) памяти, что оптимально.
    Позволяет быстро перебирать соседей вершины.
    Позволяет за O(logN) проверять наличие ребра и удалять его (при использовании std::set).

9. BFS
    * минимальное расстояние
10. DFS
    * 

Lecture 7 Notes:
1. Префикс-функция. Определение
2. Пример префикс функции
3. Тривиальный алгоритм
vector<int> prefix_function (string s) {
int n = (int) s.length();
vector<int> pi (n);
for (int i=0; i<n; ++i)
    for (int k=0; k<=i; ++k)
        if (s.substr(0,k) == s.substr(i-k+1,k))
            pi[i] = k;
return pi;
}

4. Алгоритм 
Считать значения префикс-функции pi[i] будем по очереди: от i=1 к i=n-1 (значение pi[0] просто присвоим равным нулю).

Для подсчёта текущего значения pi[i] мы заводим переменную j, обозначающую длину текущего рассматриваемого образца. Изначально j = pi[i-1].

Тестируем образец длины j, для чего сравниваем символы s[j] и s[i]. Если они совпадают — то полагаем pi[i] = j+1 и переходим к следующему индексу i+1. Если же символы отличаются, то уменьшаем длину j, полагая её равной pi[j-1], и повторяем этот шаг алгоритма с начала.

Если мы дошли до длины j=0 и так и не нашли совпадения, то останавливаем процесс перебора образцов и полагаем pi[i] = 0 и переходим к следующему индексу i+1.

vector<int> prefix_function(string s) {
    int n = s.size();
    vector<int> pi(n);
    for (int i = 1; i < n; i++) {
        j = pi[i - 1];
        while (j > 0 && s[j] != s[i])
            j = pi[j - 1];
        if (s[i] == s[j]) ++j;
        pi[i] = j;
    }
    return pi;
}

5. Поиск подстроки в строке
6. Даны две строки, определить является ли первая строка циклическим сдвигом второй строки

7. Хэш строки
hash(s) = s[0] + s[1] * p + s[2] * p^2 + ... + s[n - 1] * p^(n - 1) 
p -> prime number greater than amount of letters in alphabet

p = 31;
hash = 0;
for (int i = 0; i < s.size(); i++) {

}


Lecture 6 Notes:
1. Heap (MaxHeap, MinHeap)
2. parent and child nodes
3. Heap sort, priority queue, shortest path algorithms (Deijkstra, spanning tree)
4. getMin()
5. extractMin()
6. decreaseKey()
7. insert()
8. delete()
9. MinHeap
    parent(int i)
    left(int i), right(int i)
    extractMin()
    decreaseKey(int i, int new_val)
    delete(int i)
    insert(int key)


Lecture 3 Notes:
0. Решето Эротосфена, НОД, быстрое возведение
1. Linear search (find element in array)
2. mid = (left + right) / 2; if (a[mid] < k) left = mid + 1; else right = mid;
3. Кубический корень из числа x (y^3 = x) Найти кубический корень с точностью не менее 5 знаков после точки
4. Binary search tree: 
Binary tree example 
Binary Search Tree Traversal 
Tree search min, max 
Insertation and Deletion

Lecture 1, 2 Notes
1. Syllabus, topics to be covered doring the semester

2. Time complexity
    * Asymptotic notations: 
        Big (Oh), Omega, Theta
3. Stack (push, pop, back, size, empty)
    * Bracket problem
    * Advanced bracket problem
4. Queue (push, pop, front, size, empty)
    * Queue problems 
        - from a to b (operations a + c, a - c1, a * c2)
        - currency problem (minimum operations)
        - chess problem

5. Linked list
    * single linked list, double linked list
    * add operation
    * delete operation




