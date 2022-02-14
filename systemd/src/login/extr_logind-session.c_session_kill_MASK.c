
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int scope; int manager; } ;
typedef TYPE_1__ Session ;
typedef int KillWho ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ,int ,int ,int,int *) ;

int FUNC_2(Session *VAR_1, KillWho VAR_2, int VAR_3) {
        FUNC_0(VAR_1);

        if (!VAR_1->scope)
                return -VAR_0;

        return FUNC_1(VAR_1->manager, VAR_1->scope, VAR_2, VAR_3, ((void*)0));
}
