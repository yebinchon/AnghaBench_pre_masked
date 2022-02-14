
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int stage; int zc; } ;
typedef TYPE_1__ ZBUFF_DCtx ;


 int VAR_0 ;
 int FUNC_0 () ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (TYPE_1__*,int ,int) ;

__attribute__((used)) static ZBUFF_DCtx* FUNC_3(void)
{
    ZBUFF_DCtx* VAR_1 = (ZBUFF_DCtx*)FUNC_1(sizeof(ZBUFF_DCtx));
    if (VAR_1==((void*)0)) return ((void*)0);
    FUNC_2(VAR_1, 0, sizeof(*VAR_1));
    VAR_1->zc = FUNC_0();
    VAR_1->stage = VAR_0;
    return VAR_1;
}
