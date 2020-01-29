### Creditos:
Pedro Serrano (2018013491) - `Samega 7Cattac#5961`


## 1.a) 
```

---1---
perimetro : 0
     area : 0
---2---
perimetro : 12
     area : 8
---3---
perimetro : 0
     area : 0
---4---
```
## 1.b)
Na linha `Rectangulo * p2 = new Figura;` espera uma tipo `Rectangulo` e não `Figura`, mesmo que seja classe pai, so aceita `Rectangulo` para baixo na hierarquia.

## 2)
`atribuiEscalao()` na classe `RelogioLuxo` esta a ser usada como `virtual` embora não esteja a ser decralado como tal na classe pai `ItemLuxo`.

## 3)
Adicionar na classe em publico:
```cpp
void operator=(const struct Resgisto &b)
{
    DonoBi = b.DonoBi;
    NomeItem = b.NomeItem;
    copias = b.copias + 1;
}
```

## 4)
```cpp
class escola
{
    struct Aluno * alunos;
    int n_alunos;
    struct Prof * profs;
    int n_profs;
    
    void comp()
    {
        for (int i = 0; i < n_alunos; ++i) alunos[i].comp();
        for (int i = 0; i < n_profs; ++i) profs[i].comp();
    }
};
```

## 5)
linha 5, a função `ReceberN()` esta defenida como constante.

## 6) 
```cpp
class fato : public Roupa
{
    string marca;
    struct Gravata * grav;
public:
    fato(string m, struct Gravata * gra) : marca(m), grav(gra) {}
};
```
