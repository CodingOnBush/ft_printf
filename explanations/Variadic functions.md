# Fonctions Variadiques

Les fonctions variadiques en C permettent de définir des fonctions avec un nombre variable d'arguments. Un exemple courant est la fonction `printf` qui accepte une chaîne de format et un nombre variable d'arguments à imprimer.

## Syntaxe

Le prototype d'une fonction variadique inclut une ellipsis (`...`) pour indiquer la variabilité des arguments :

```c
int ft_printf(const char *format, ...);
```

## Utilisation de la librairie `<stdarg.h>`

Pour manipuler les arguments d'une fonction variadique, il est nécessaire d'inclure la librairie `<stdarg.h>`. Cette librairie fournit des macros et des structures de données pour faciliter l'accès aux arguments.

```c
#include <stdarg.h>
```

## Macros `<stdarg.h>`

- **`va_list` :** Structure utilisée pour stocker la liste des arguments.
- **`va_start` :** Initialise la liste d'arguments, à appeler au début de la fonction variadique.
- **`va_arg` :** Accède à l'argument suivant de la liste.
- **`va_end` :** Termine l'utilisation de la liste.
- **`va_copy` :** Copie une liste pour permettre un accès multiple.

## Exemple de fonction variadique : `ft_printf`

Voici un exemple de fonction variadique simple, `ft_printf`, qui pour l'instant ne fait que retourner le nombre de caractères à imprimer.

```c
#include <stdarg.h>

int ft_printf(const char *format, ...)
{
    int printed_len;
    va_list args;

    printed_len = 0;
    va_start(args, format);
    // Code pour manipuler les arguments
    va_end(args);

    return printed_len;
}
```

Dans cette fonction, `va_start` est utilisé pour initialiser `args` en se basant sur le dernier argument fixe (`format`). Cela permet d'accéder à la liste d'arguments.  

Si on sait que le prochain argument de la liste est de type `int`, on peut faire ceci :
```c
#include <stdarg.h>

int ft_printf(const char *format, ...)
{
    int printed_len;
    va_list args;
    int next;

    printed_len = 0;
    va_start(args, format);
    // Code pour manipuler les arguments
    next = va_arg(args, int);
    // Utiliser la variable next
    va_end(args);

    return printed_len;
}
```

Ainsi la variable `next` aura la valeur du premier argument de la liste et la macro `va_arg` va mettre à jour la liste `args` pour que l'argument suivant devienne le premier.

Si j'appelle ma fonction ft_printf comme ceci :
```c
ft_printf("hello", 42, '0', "42");
```
On aura une liste args qui contiendra comme premier élément le nombre 42 puis en utilisant va_arg on va pouvoir stocker dans `next` le 42 et faire en sorte que notre liste soit mise à jour pour que le premier élément soit '0'.