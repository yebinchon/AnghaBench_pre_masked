
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_9__ ;
typedef struct TYPE_18__ TYPE_8__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;
typedef struct TYPE_15__ TYPE_11__ ;


struct TYPE_17__ {int type; TYPE_8__* unit; TYPE_9__* object_list; TYPE_9__* subject_list; TYPE_11__* transaction_next; TYPE_1__* transaction_prev; int jobs; } ;
typedef TYPE_2__ Transaction ;
struct TYPE_19__ {TYPE_2__* subject; scalar_t__ matters; } ;
struct TYPE_18__ {int id; } ;
struct TYPE_16__ {TYPE_11__* transaction_next; } ;
struct TYPE_15__ {TYPE_1__* transaction_prev; } ;
typedef TYPE_2__ Job ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int ,TYPE_8__*,TYPE_2__*) ;
 int FUNC_2 (int ,TYPE_8__*,TYPE_11__*) ;
 int FUNC_3 (TYPE_9__*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (TYPE_8__*,char*,int ,int ,int ,int ) ;
 int FUNC_6 (TYPE_2__*,TYPE_2__*,int) ;

__attribute__((used)) static void FUNC_7(Transaction *VAR_0, Job *VAR_1, bool VAR_2) {
        FUNC_0(VAR_0);
        FUNC_0(VAR_1);

        if (VAR_1->transaction_prev)
                VAR_1->transaction_prev->transaction_next = VAR_1->transaction_next;
        else if (VAR_1->transaction_next)
                FUNC_2(VAR_0->jobs, VAR_1->unit, VAR_1->transaction_next);
        else
                FUNC_1(VAR_0->jobs, VAR_1->unit, VAR_1);

        if (VAR_1->transaction_next)
                VAR_1->transaction_next->transaction_prev = VAR_1->transaction_prev;

        VAR_1->transaction_prev = VAR_1->transaction_next = ((void*)0);

        while (VAR_1->subject_list)
                FUNC_3(VAR_1->subject_list);

        while (VAR_1->object_list) {
                Job *VAR_3 = VAR_1->object_list->matters ? VAR_1->object_list->subject : ((void*)0);

                FUNC_3(VAR_1->object_list);

                if (VAR_3 && VAR_2) {
                        FUNC_5(VAR_3->unit,
                                       "Deleting job %s/%s as dependency of job %s/%s",
                                       VAR_3->unit->id, FUNC_4(VAR_3->type),
                                       VAR_1->unit->id, FUNC_4(VAR_1->type));
                        FUNC_6(VAR_0, VAR_3, VAR_2);
                }
        }
}
