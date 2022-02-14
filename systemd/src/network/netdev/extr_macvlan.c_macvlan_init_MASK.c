
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ kind; int mode; } ;
typedef TYPE_1__ NetDev ;
typedef TYPE_1__ MacVlan ;


 TYPE_1__* FUNC_0 (TYPE_1__*) ;
 TYPE_1__* FUNC_1 (TYPE_1__*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_3(NetDev *VAR_2) {
        MacVlan *VAR_3;

        FUNC_2(VAR_2);

        if (VAR_2->kind == VAR_0)
                VAR_3 = FUNC_0(VAR_2);
        else
                VAR_3 = FUNC_1(VAR_2);

        FUNC_2(VAR_3);

        VAR_3->mode = VAR_1;
}
