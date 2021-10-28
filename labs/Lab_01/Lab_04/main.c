#include <stdio.h>


struct Node
{
    char name[20];      //им€ узла
    struct Node* left;  //лева€ ветвь
    struct Node* right; //права€ ветвь
};

/*
добавление нового узла в дерево(если у узла отсутствует лева€ ветвь,
то узел добавл€етс€ слева, иначе, если отсутствует права€ ветвь, то узел добавл€етс€ справа, иначе узел не добавл€етс€).
‘ункци€ должна возвращать указатель на добавленный узел или 0;
*/ 
struct Node* AddNode(struct Node* node, char* name) {
    struct Node* leaf = (struct Node*)malloc(sizeof(struct Node));
    strcpy(leaf->name, name);
    leaf->left = NULL;
    leaf->right = NULL;
    if (node->left == NULL) {
        node->left = leaf;
        return node->left;
    }
    else if (node->right == NULL) {
        node->right = leaf;
        return node->right;
    }
    else return 0;
}

// удаление левых и правых поддеревьев;
void DelLeftNode(struct Node* node) {
    node->left = NULL;
}
void DelRightNode(struct Node* node) {
    node->right = NULL;
}

// рекурсивна€ функци€ вывода бинарного дерева на экран.
/*
                        ( FirstNode )
                       /             \
        ( Left_Leaf_Of_First )     ( Right_Leaf_Of_First )
       /                 \          /                   \
( Left_Leaf_Of_Left )    NULL     NULL                  NULL
    /       \
 NULL       NULL



*/
void PrintTree(struct Node* node) {
    if (node != NULL) {
        printf("%s\n", node->name);
        if (node->left != NULL) {
            PrintTree(node->left);
        }
        if (node->right != NULL) {
            PrintTree(node->right);
        }
    }
} 

void main() {
    /* ¬ариант є3
    */
    struct Node node = {"FirstNode"};

    struct Node* leftNode = AddNode(&node, "Left_Leaf_Of_First");
    struct Node *rightNode = AddNode(&node, "Right_Leaf_Of_First");

    AddNode(leftNode, "Left_Leaf_Of_Left");

    PrintTree(&node);

    system("pause");
}
