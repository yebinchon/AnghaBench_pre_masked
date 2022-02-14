
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ mode; int manager; } ;
typedef TYPE_1__ Inhibitor ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ,char const*,int *) ;

__attribute__((used)) static int FUNC_2(Inhibitor *VAR_1) {
        const char *VAR_2;

        FUNC_0(VAR_1);

        VAR_2 = VAR_1->mode == VAR_0 ? "BlockInhibited" : "DelayInhibited";

        return FUNC_1(VAR_1->manager, VAR_2, ((void*)0));
}
