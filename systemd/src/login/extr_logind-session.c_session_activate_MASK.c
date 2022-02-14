
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {TYPE_1__* pending_switch; TYPE_1__* active; } ;
struct TYPE_7__ {scalar_t__ vtnr; TYPE_4__* seat; struct TYPE_7__* user; } ;
typedef TYPE_1__ Session ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (TYPE_4__*) ;
 scalar_t__ FUNC_3 (TYPE_4__*) ;
 unsigned int FUNC_4 (TYPE_1__*) ;

int FUNC_5(Session *VAR_1) {
        unsigned VAR_2;

        FUNC_0(VAR_1);
        FUNC_0(VAR_1->user);

        if (!VAR_1->seat)
                return -VAR_0;

        if (VAR_1->seat->active == VAR_1)
                return 0;


        if (FUNC_3(VAR_1->seat)) {
                if (VAR_1->vtnr == 0)
                        return -VAR_0;

                return FUNC_1(VAR_1->vtnr);
        }
        VAR_1->seat->pending_switch = VAR_1;


        VAR_2 = FUNC_4(VAR_1);
        if (!VAR_2)
                FUNC_2(VAR_1->seat);

        return 0;
}
