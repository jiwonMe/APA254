## 1.

```cpp
#include <iostream>

class LinkedListNode {
public:
    LinkedListNode* next = NULL;
    int data;

    LinkedListNode(int d) {
        data = d;
    }

    void appendToTail(int d) {
        LinkedListNode* end = new LinkedListNode(d);
        LinkedListNode* n = this;
        while (n->next != NULL) {
            n = n->next;
        }
        n->next = end;
    }
};

LinkedListNode* nthToLast(LinkedListNode* head, int n) {
    if (head->next == NULL) return NULL;
    if (head->data == n) return head;
    return nthToLast(head->next, n);
}

int main() {
    LinkedListNode* linkedList = new LinkedListNode(1);
    linkedList->appendToTail(8);
    linkedList->next->appendToTail(3);
    linkedList->next->next->appendToTail(13);

    std::cout << nthToLast(linkedList, 5)->data << std::endl;
}
```

## 2.

> Theorem 1.
> Let $p(n)$ and $q(n)$ be two nonnegative functions. $p(n)$ is asymptotically bigger than the $q(n)$, if only if 
> $$ \lim_{n\to\infty}\dfrac{q(n)}{p(n)}=0.\\~ $$

> Using the above, show the following $p(n)$ is asymptotically bigger than $q(n)$.
> $$\begin{aligned}
>   p(n)&=6n^{1.5}+12 \\
>   q(n)&=100n \end{aligned}
> $$

### proof.
Let $r(n)\coloneqq\dfrac{q(n)}{p(n)}=\dfrac{100n}{6n^{1.5}+12} < \dfrac{50}{3}\dfrac{1}{\sqrt{n}}$,

$
\displaystyle\lim_{n\to\infty}r(n) \le \lim_{n\to\infty}\dfrac{50}{3}\dfrac{1}{\sqrt{n}} = \dfrac{50}{3}\lim_{n\to\infty}\dfrac{1}{\sqrt{n}} = 0
$

Note that $r(n)\ge 0$ in $n\ge0$,

$$
0\le\lim_{n\to\infty}r(n)\le\lim_{n\to\infty}\dfrac{50}{3}\dfrac{1}{\sqrt{n}}
~$$

Since $\lim_{n\to\infty}\dfrac{50}{3}\dfrac{1}{\sqrt{n}}$ is zero,

$\displaystyle\lim_{n\to\infty}r(n) =0,$ $~p(n)$ is asymptotically bigger than $q(n).\ \square$


