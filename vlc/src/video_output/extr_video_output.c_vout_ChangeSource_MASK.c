
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {TYPE_2__* p; } ;
typedef TYPE_1__ vout_thread_t ;
struct TYPE_5__ {int original; } ;
typedef TYPE_2__ vout_thread_sys_t ;
typedef int video_format_t ;


 scalar_t__ FUNC_0 (int const*,int *) ;

int FUNC_1( vout_thread_t *VAR_0, const video_format_t *VAR_1 )
{
    vout_thread_sys_t *VAR_2 = VAR_0->p;




    if (FUNC_0(VAR_1, &VAR_2->original)) {

        return 0;
    }

    return -1;
}
