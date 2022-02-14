
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {struct TYPE_5__* items_next; } ;
typedef TYPE_1__ DnsTxtItem ;


 int FUNC_0 (TYPE_1__*) ;

DnsTxtItem *FUNC_1(DnsTxtItem *VAR_0) {
        DnsTxtItem *VAR_1;

        if (!VAR_0)
                return ((void*)0);

        VAR_1 = VAR_0->items_next;

        FUNC_0(VAR_0);
        return FUNC_1(VAR_1);
}
