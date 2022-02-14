
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* z_streamp ;
struct TYPE_5__ {unsigned long long pledgedSrcSize; int comprState; } ;
typedef TYPE_2__ ZWRAP_CCtx ;
struct TYPE_4__ {scalar_t__ state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

int FUNC_0(z_streamp VAR_3, unsigned long long VAR_4)
{
    ZWRAP_CCtx* VAR_5 = (ZWRAP_CCtx*) VAR_3->state;
    if (VAR_5 == ((void*)0)) return VAR_2;

    VAR_5->pledgedSrcSize = VAR_4;
    VAR_5->comprState = VAR_0;
    return VAR_1;
}
