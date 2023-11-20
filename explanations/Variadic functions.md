# Variadic Functions

Les fonctions variadic sont des fonctions ayant un nombre varibale d'arguments.  
Le prototype d'une telle fonction peut ressembler à ceci : 
```c
int ft_printf(const char *str, ...);
```
Cette partie est appelé **ellipsis** :
```
...
```
Pour utiliser les arguments de la fonction ft_printf, il faut inclure la librairie :
```c
# include <stdarg.h>
```
Cette librairie nous permet d'utiliser une structure appelée `va_list` et plusieurs macro :
- `va_start` : permet d'initialiser une liste qui va commencer au niveau du premier argument
- `va_arg` : permet d'accéder à l'argument suivant d'une liste.
- `va_end` : permet de terminer la liste.
- `va_copy` : permet de copier une liste.  

Voici notre fonction `ft_printf` :
```c
#include <stdarg.h>

int	ft_printf(const char *s, ...)
{
	int printedlen;

    printedlen = 0;
    // doing some stuff
	return (printedlen);
}
```
Pour l'instant notre fonction ne fais pas grand chose mise à part retourner le nombre de caractère que l'on va afficher.  
On va commencer à utiliser le type `va_list` pour créer une variable permettant de contenir la liste des arguments de notre fonction.  
```c
#include <stdarg.h>

int	ft_printf(const char *s, ...)
{
	int     printedlen;
    va_list args;

    printedlen = 0;
    va_start(args, s);
    // doing some stuff
	return (printedlen);
}
```
On a également utilisé la macro `va_start(args, s)` pour initialiser la variable args. Pour initialiser la variable `args`, `va_start` a besoin de 