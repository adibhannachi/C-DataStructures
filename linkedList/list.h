/*******************************************************************************
 * \file list.h
 * \brief linked list api.
 * \author Adib HANNACHI
 * \version 0.1
 * \date 03 mars 2017
******************************************************************************/


#ifndef LIST_H
#define LIST_H

#include<stdio.h>
#include <stdlib.h>

#ifdef __cplusplus
extern "C" {
#endif


typedef struct Node
{
    void *data;
    struct Node *next;

}Node;


typedef struct List
{
    Node *head;
}List;


/*!
 * \brief listAdd
 * \param head
 * \param new_data
 */
void listAdd(Node* head, void *new_data);

/*!
 * \brief listDestroy
 * \param head
 */
void listDestroy(Node *head);

/*!
 * \brief getNode
 * \param head
 * \param index
 * \return
 */
Node* getNode( Node *head, int index);

/*!
 * \brief deleteNode
 * \param head
 * \param index
 */
void deleteNode(Node *head, int index);

/*!
 * \brief printList
 */
void printList();

/*!
 * \brief isEmty
 */
void isEmty();

/*!
 * \brief sort
 */
void sort();

/*!
 * \brief length
 * \return
 */
int length() ;



#ifdef __cplusplus
}
#endif

#endif // LIST_H
