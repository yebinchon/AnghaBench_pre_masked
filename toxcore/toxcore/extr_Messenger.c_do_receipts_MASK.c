
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct Receipts {int msg_id; int packet_num; struct Receipts* next; } ;
typedef size_t int32_t ;
struct TYPE_8__ {TYPE_1__* friendlist; int read_receipt_userdata; int (* read_receipt ) (TYPE_2__*,size_t,int ,int ) ;} ;
struct TYPE_7__ {int * receipts_end; struct Receipts* receipts_start; } ;
typedef TYPE_2__ Messenger ;


 int FUNC_0 (struct Receipts*) ;
 scalar_t__ FUNC_1 (TYPE_2__*,size_t) ;
 int FUNC_2 (TYPE_2__*,size_t,int ) ;
 int FUNC_3 (TYPE_2__*,size_t,int ,int ) ;

__attribute__((used)) static int FUNC_4(Messenger *VAR_0, int32_t VAR_1)
{
    if (FUNC_1(VAR_0, VAR_1))
        return -1;

    struct Receipts *VAR_2 = VAR_0->friendlist[VAR_1].receipts_start;

    while (VAR_2) {
        struct Receipts *VAR_3 = VAR_2->next;

        if (FUNC_2(VAR_0, VAR_1, VAR_2->packet_num) == -1)
            break;

        if (VAR_0->read_receipt)
            (*VAR_0->read_receipt)(VAR_0, VAR_1, VAR_2->msg_id, VAR_0->read_receipt_userdata);

        FUNC_0(VAR_2);
        VAR_0->friendlist[VAR_1].receipts_start = VAR_3;
        VAR_2 = VAR_3;
    }

    if (!VAR_0->friendlist[VAR_1].receipts_start)
        VAR_0->friendlist[VAR_1].receipts_end = ((void*)0);

    return 0;
}
