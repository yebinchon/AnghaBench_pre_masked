
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* z_streamp ;
typedef int ZWRAP_DCtx ;
struct TYPE_4__ {char* msg; scalar_t__ state; } ;


 int FUNC_0 (int * const,TYPE_1__*,int ) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_1(z_streamp VAR_1, char* VAR_2)
{
    ZWRAP_DCtx* const VAR_3 = (ZWRAP_DCtx*) VAR_1->state;
    VAR_1->msg = VAR_2;
    if (VAR_3 == ((void*)0)) return VAR_0;

    return FUNC_0(VAR_3, VAR_1, 0);
}
