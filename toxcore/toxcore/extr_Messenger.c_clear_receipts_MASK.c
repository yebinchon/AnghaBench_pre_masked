
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct Receipts {struct Receipts* next; } ;
typedef size_t int32_t ;
struct TYPE_6__ {TYPE_1__* friendlist; } ;
struct TYPE_5__ {int * receipts_end; struct Receipts* receipts_start; } ;
typedef TYPE_2__ Messenger ;


 int FUNC_0 (struct Receipts*) ;
 scalar_t__ FUNC_1 (TYPE_2__*,size_t) ;

__attribute__((used)) static int FUNC_2(Messenger *VAR_0, int32_t VAR_1)
{
    if (FUNC_1(VAR_0, VAR_1))
        return -1;

    struct Receipts *VAR_2 = VAR_0->friendlist[VAR_1].receipts_start;

    while (VAR_2) {
        struct Receipts *VAR_3 = VAR_2->next;
        FUNC_0(VAR_2);
        VAR_2 = VAR_3;
    }

    VAR_0->friendlist[VAR_1].receipts_start = ((void*)0);
    VAR_0->friendlist[VAR_1].receipts_end = ((void*)0);
    return 0;
}
