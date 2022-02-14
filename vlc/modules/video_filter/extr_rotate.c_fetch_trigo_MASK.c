
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int sin; int cos; int u; } ;
typedef TYPE_1__ sincos_t ;
struct TYPE_5__ {int sincos; } ;
typedef TYPE_2__ filter_sys_t ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1( filter_sys_t *VAR_0, int *VAR_1, int *VAR_2 )
{
    sincos_t VAR_3 = { .u = FUNC_0(&VAR_0->sincos) };

    *VAR_1 = VAR_3.sin;
    *VAR_2 = VAR_3.cos;
}
