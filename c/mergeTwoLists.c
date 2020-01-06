#include <stdio.h>
#include <stdlib.h>

struct ListNode {
    int val;
    struct ListNode* next;
}

//创建全局链表头尾指针，方便调用
struct ListNode* head = NULL;
struct ListNode* tail = NULL;

//创建结构体变量
struct ListNode* createList(){
    struct ListNode* headNode = (struct ListNode*)malloc(struct ListNode);
    headNode->next = NULL;
    return headNode
}
//创建结构体节点
struct ListNode* createNode(int data){
    struct ListNode* headNode = (struct ListNode*)malloc(struct ListNode);
    headNode->val = data;
    headNode->next = NULL;
}
//打印链表
void printList(struct ListNode* headNode){
    //因为传进来的是链表的头，所以从第二个开始打印
    struct ListNode* pMove = headNode->next;
    while (pMove) {
        printf("%d", pMove->val);
        pMove = pMove->next;
    }
    printf("\n");
}
//头插法
//插入结点，参数：插入哪个链表，插入结点的数据是多少
void insertNodeByHead(struct ListNode* headNode, int data){
    struct ListNode* newNode = createNode(data);
    newNode->next = headNode->next;
    headNode->next = newNode;
}
//删除结点
void deleteNodeByAppoin(struct Node* headNode, int posData){
    struct ListNode* pre = headNode;
    struct ListNode* posNode = headNode->next;
    if(posNode==NULL) {
        printf("链表为空，无法删除");
        return;
    }
    else {
        while (posNode->data!=posData) {
            pre = posNode;
            posNode = posNode->next;
            if(posNode==NULL) {
                printf("未找到相关信息，请重新选择数据");
                return;
            }
        }
        pre->next = posNode->next;
        free(posNode);
        return;
    }
}


struct ListNode* mergeTwoLists(struct ListNode* l1, 
                                struct ListNode* l2){
    
}
