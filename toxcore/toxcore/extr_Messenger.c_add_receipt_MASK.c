
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef void* uint32_t ;
struct Receipts {struct Receipts* next; void* msg_id; void* packet_num; } ;
typedef size_t int32_t ;
struct TYPE_6__ {TYPE_1__* friendlist; } ;
struct TYPE_5__ {struct Receipts* receipts_end; struct Receipts* receipts_start; } ;
typedef TYPE_2__ Messenger ;


 struct Receipts* FUNC_0 (int,int) ;
 scalar_t__ FUNC_1 (TYPE_2__*,size_t) ;

__attribute__((used)) static int FUNC_2(Messenger *VAR_0, int32_t VAR_1, uint32_t VAR_2, uint32_t VAR_3)
{
    if (FUNC_1(VAR_0, VAR_1))
        return -1;

    struct Receipts *VAR_4 = FUNC_0(1, sizeof(struct Receipts));

    if (!VAR_4)
        return -1;

    VAR_4->packet_num = VAR_2;
    VAR_4->msg_id = VAR_3;

    if (!VAR_0->friendlist[VAR_1].receipts_start) {
        VAR_0->friendlist[VAR_1].receipts_start = VAR_4;
    } else {
        VAR_0->friendlist[VAR_1].receipts_end->next = VAR_4;
    }

    VAR_0->friendlist[VAR_1].receipts_end = VAR_4;
    VAR_4->next = ((void*)0);
    return 0;
}
