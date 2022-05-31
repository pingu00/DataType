////
////  Linearlist.cpp
////  DataType
////
////  Created by Phil on 2022/03/30.
////
//
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//typedef int element;
//typedef struct ListNode{
//    element data;
//    struct ListNode* link;
//}ListNode;
//ListNode* insert_first(ListNode *head, element value ){
//    ListNode *p = (ListNode *)malloc(sizeof(ListNode));
//    p->data =value;
//    p->link = head;
//    head = p;
//    return head;
//}
//void print_list(ListNode * head){
//    for ( ListNode *p=head ; p!=NULL; p=p->link)
//        printf("%d->",p->data);
//    printf("NULL \n");
//}
//
//ListNode* search_list (ListNode *head, int x){
//    ListNode* p= head;
//    while (p !=NULL){
//        if (p->data == x) return p;
//        p = p->link;
//    }
//    return NULL;
//}
//ListNode* delete_node (ListNode* head , int value){
//    ListNode * pre = NULL;
//    for (ListNode * p= head; p != NULL ;pre = p, p= p->link ){
//        if (p->data== value ){
//            if (p == head){
//             ListNode* removed = head;
//                head = head->link;
//                free(removed);
//            }
//            else {
//                pre->link = p->link;
//                free(p);
//            }
//        }
//    }
//    return head;
//}
//
//
//
//int main (){
//    ListNode *head =NULL;
//    
//    head = insert_first(head, 10);
//    print_list(head);
//    
//
//    head = insert_first(head, 20);
//    print_list(head);
//    
//
//    head = insert_first(head, 30);
//    print_list(head);
//    
//    head = insert_first(head, 20);
//    print_list(head);
//    
//    head = delete_node(head, 20);
//
//    print_list(head);
//    
//    return 0;
//}
