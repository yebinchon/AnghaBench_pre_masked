
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ kind; int flags; int mode; } ;
typedef TYPE_1__ NetDev ;
typedef TYPE_1__ IPVlan ;


 TYPE_1__* FUNC_0 (TYPE_1__*) ;
 TYPE_1__* FUNC_1 (TYPE_1__*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_3(NetDev *VAR_3) {
        IPVlan *VAR_4;

        FUNC_2(VAR_3);

        if (VAR_3->kind == VAR_0)
                VAR_4 = FUNC_0(VAR_3);
        else
                VAR_4 = FUNC_1(VAR_3);

        FUNC_2(VAR_4);

        VAR_4->mode = VAR_2;
        VAR_4->flags = VAR_1;
}
