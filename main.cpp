#include <iostream>

template< class T >
T* merge(const T* a, size_t sa, const T* b, size_t sb, T* c)
{
  size_t i = 0, j = 0, k = 0;
  while (i < sa && j < sb)
  {
    if(a[i] <= b[j])
    {
      c[k++] = a[i++];
    }
    else
    {
      c[k++] = b[j++];
    }
  }
  while(i < sa) c[k++] = a[i++];
  while(j < sb) c[k++] = b[j++];
  return c + k;
}

int main()
{
    int a[] = {1, 3, 5, 7, 9};
    int b[] = {2, 4, 6, 8, 10};
    int c[10] = {};

    int* end = merge(a, 5, b, 5, c);

    for (int* p = c; p != end; ++p)
        std::cout << *p << " ";
    std::cout << "\n";

    return 0;
}
