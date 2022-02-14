
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int u; void* cos; void* sin; } ;
typedef TYPE_1__ sincos_t ;
struct TYPE_5__ {int sincos; } ;
typedef TYPE_2__ filter_sys_t ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 float FUNC_1 (float) ;
 void* FUNC_2 (float) ;
 float FUNC_3 (float) ;

__attribute__((used)) static void FUNC_4( filter_sys_t *VAR_1, float VAR_2 )
{
    sincos_t VAR_3;

    VAR_2 *= (float)(VAR_0 / 180.);

    VAR_3.sin = FUNC_2(FUNC_3(VAR_2) * 4096.f);
    VAR_3.cos = FUNC_2(FUNC_1(VAR_2) * 4096.f);
    FUNC_0(&VAR_1->sincos, VAR_3.u);
}
