
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {TYPE_2__* sys; } ;
typedef TYPE_1__ aout_stream_t ;
struct TYPE_5__ {int * hTimer; } ;
typedef TYPE_2__ aout_stream_sys_t ;


 int FUNC_0 (int *,int *,int ) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_1(aout_stream_t *VAR_1)
{
    aout_stream_sys_t *VAR_2 = VAR_1->sys;
    if (VAR_2->hTimer != ((void*)0))
    {
        FUNC_0(((void*)0), VAR_2->hTimer, VAR_0);
        VAR_2->hTimer = ((void*)0);
    }
}
