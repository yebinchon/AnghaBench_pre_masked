
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int pos; } ;
typedef TYPE_1__ dictItem ;
typedef int U32 ;



__attribute__((used)) static void FUNC_0(dictItem* VAR_0, U32 VAR_1)
{

    U32 const VAR_2 = VAR_0[0].pos;
    U32 VAR_3;
    if (!VAR_1) return;
    for (VAR_3=VAR_1; VAR_3<VAR_2-1; VAR_3++)
        VAR_0[VAR_3] = VAR_0[VAR_3+1];
    VAR_0->pos--;
}
