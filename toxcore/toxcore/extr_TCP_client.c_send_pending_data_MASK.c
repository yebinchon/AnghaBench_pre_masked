
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_7__ {int * priority_queue_end; TYPE_1__* priority_queue_start; int sock; } ;
struct TYPE_6__ {int size; int sent; int data; struct TYPE_6__* next; } ;
typedef TYPE_1__ TCP_Priority_List ;
typedef TYPE_2__ TCP_Client_Connection ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ,int,int,int ) ;
 int FUNC_2 (TYPE_2__*) ;

__attribute__((used)) static int FUNC_3(TCP_Client_Connection *VAR_1)
{

    if (FUNC_2(VAR_1) == -1) {
        return -1;
    }

    TCP_Priority_List *VAR_2 = VAR_1->priority_queue_start;

    while (VAR_2) {
        uint16_t VAR_3 = VAR_2->size - VAR_2->sent;
        int VAR_4 = FUNC_1(VAR_1->sock, VAR_2->data + VAR_2->sent, VAR_3, VAR_0);

        if (VAR_4 != VAR_3) {
            if (VAR_4 > 0) {
                VAR_2->sent += VAR_4;
            }

            break;
        }

        TCP_Priority_List *VAR_5 = VAR_2;
        VAR_2 = VAR_2->next;
        FUNC_0(VAR_5);
    }

    VAR_1->priority_queue_start = VAR_2;

    if (!VAR_2) {
        VAR_1->priority_queue_end = ((void*)0);
        return 0;
    }

    return -1;
}
