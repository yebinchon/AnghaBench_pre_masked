
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {struct TYPE_7__* name; scalar_t__ section; TYPE_1__* tunnel; } ;
struct TYPE_6__ {int sessions_by_section; } ;
typedef TYPE_2__ L2tpSession ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ,TYPE_2__*) ;

__attribute__((used)) static void FUNC_3(L2tpSession *VAR_0) {
        if (!VAR_0)
                return;

        if (VAR_0->tunnel && VAR_0->section)
                FUNC_2(VAR_0->tunnel->sessions_by_section, VAR_0);

        FUNC_1(VAR_0->section);

        FUNC_0(VAR_0->name);

        FUNC_0(VAR_0);
}
