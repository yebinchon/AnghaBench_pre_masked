
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ length; struct TYPE_4__* items_next; int data; } ;
typedef TYPE_1__ DnsTxtItem ;


 scalar_t__ FUNC_0 (int ,int ,scalar_t__) ;

bool FUNC_1(DnsTxtItem *VAR_0, DnsTxtItem *VAR_1) {

        if (VAR_0 == VAR_1)
                return 1;

        if (!VAR_0 != !VAR_1)
                return 0;

        if (!VAR_0)
                return 1;

        if (VAR_0->length != VAR_1->length)
                return 0;

        if (FUNC_0(VAR_0->data, VAR_1->data, VAR_0->length) != 0)
                return 0;

        return FUNC_1(VAR_0->items_next, VAR_1->items_next);
}
