
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int vout_thread_t ;
struct TYPE_8__ {int * fmt; int clock; int * vout; } ;
typedef TYPE_2__ vout_configuration_t ;
typedef int video_format_t ;
struct TYPE_7__ {int sys; } ;
struct TYPE_9__ {TYPE_1__ owner; } ;
typedef TYPE_3__ filter_t ;


 int FUNC_0 (TYPE_3__*) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (TYPE_2__*,int *,int *) ;

vout_thread_t *FUNC_6(filter_t *VAR_0, const video_format_t *VAR_1)
{
    vout_thread_t *VAR_2 = FUNC_4(FUNC_0(VAR_0));
    if (FUNC_1(VAR_2 == ((void*)0)))
        return ((void*)0);

    video_format_t VAR_3 = *VAR_1;
    vout_configuration_t VAR_4 = {
        .vout = VAR_2, .clock = VAR_0->owner.sys, .fmt = &VAR_3,
    };

    FUNC_2(&VAR_3);

    if (FUNC_5(&VAR_4, ((void*)0), ((void*)0))) {
        FUNC_3(VAR_2);
        VAR_2 = ((void*)0);
    }
    return VAR_2;
}
