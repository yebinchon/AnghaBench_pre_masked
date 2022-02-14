
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int size; int data; } ;
typedef TYPE_1__ frame ;
struct TYPE_5__ {int arb_mutex; int arb; } ;
typedef TYPE_2__ CallControl ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int ) ;
 int VAR_0 ;
 int FUNC_2 (int) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ,void**) ;

void *FUNC_7 (void *VAR_1)
{



    CallControl *VAR_2 = VAR_1;

    while (FUNC_0(VAR_0)) {
        frame *VAR_3;
        FUNC_4(VAR_2->arb_mutex);

        if (FUNC_6(VAR_2->arb, (void **)&VAR_3)) {
            FUNC_5(VAR_2->arb_mutex);
            FUNC_1(VAR_0, VAR_3->data, VAR_3->size);
            FUNC_3(VAR_3);
        } else {
            FUNC_5(VAR_2->arb_mutex);
            FUNC_2(10);
        }
    }
}
