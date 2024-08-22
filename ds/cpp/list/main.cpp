#include "list.h"

int main(void) {

    List list;
    initList(&list);

    insertFirstNode(&list, 4);  
    pirntList(&list);           // [4]
    insertFirstNode(&list, 3);
    pirntList(&list);           // [3, 4]
    insertFirstNode(&list, 1);
    pirntList(&list);           // [1, 3, 4]

    insertNode(&list, 1, 2);   
    pirntList(&list);           // [1, 2, 3, 4]

    deleteNode(&list, 3);
    pirntList(&list);           // [1, 2, 4]

    cleanupList(&list);

    return 0;
}