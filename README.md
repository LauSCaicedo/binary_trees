#  Binary trees
## General

- What is a binary tree
- What is the difference between a binary tree and a Binary Search Tree
- What is the possible gain in terms of time complexity compared to linked lists
- What are the depth, the height, the size of a binary tree
- What are the different traversal methods to go through a binary tree
- What is a complete, a full, a perfect, a balanced binary tree

## Requirements

- Allowed editors: `vi`, `vim`, `emacs`
- All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89
- All your files should end with a new line
- A `README.md` file, at the root of the folder of the project, is mandatory
- Your code should use the `Betty` style. It will be checked using betty-style.pl and betty-doc.pl
- You are not allowed to use global variables
- No more than 5 functions per file
- You are allowed to use the standard library
- In the following examples, the `main.c` files are shown as examples. You can use them to test your functions, but you don’t have to push them to your repo (if you do we won’t take them into account). We will use our own `main.c` files at compilation. Our `main.c` files might be different from the one shown in the examples
- The prototypes of all your functions should be included in your header file called `binary_trees.h`
- Don’t forget to push your header file
- All your header files should be include guarded

### Data structures

```
/**
 * struct binary_tree_s - Binary tree node
 *
 * @n: Integer stored in the node
 * @parent: Pointer to the parent node
 * @left: Pointer to the left child node
 * @right: Pointer to the right child node
 */
struct binary_tree_s
{
    int n;
    struct binary_tree_s *parent;
    struct binary_tree_s *left;
    struct binary_tree_s *right;
};

typedef struct binary_tree_s binary_tree_t;
```

### Binary Search Tree

```
typedef struct binary_tree_s bst_t;
```

### AVL Tree

```
typedef struct binary_tree_s avl_t;
```

### Max Binary Heap

```
typedef struct binary_tree_s heap_t;
```
---

# Contributors <img src='https://raw.githubusercontent.com/ShahriarShafin/ShahriarShafin/main/Assets/handshake.gif' width="100px">

[Isabela Gomez](https://github.com/IsabelaGomez101) <a href = 'https://twitter.com/IsaGome66256458'> <img width = '32px' align = 'center' src="https://cliply.co/wp-content/uploads/2019/07/371907030_TWITTER_ICON_TRANSPARENT_400.gif"/></a> <br>
[Mayii Cadavid](https://github.com/mayii527) <a href = 'https://twitter.com/MayiiCadavid'> <img width = '32px' align = 'center' src="https://cliply.co/wp-content/uploads/2019/07/371907030_TWITTER_ICON_TRANSPARENT_400.gif"/></a> <br>
[Laura Caicedo](https://github.com/LauSCaicedo) <a href = 'https://www.twitter.com/@LauSCaicedo'> <img width = '32px' align = 'center' src="https://cliply.co/wp-content/uploads/2019/07/371907030_TWITTER_ICON_TRANSPARENT_400.gif"/></a>
