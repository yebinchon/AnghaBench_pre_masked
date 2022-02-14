
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int pa_time_event ;
typedef int pa_threaded_mainloop ;
struct TYPE_3__ {int (* time_free ) (int *) ;} ;
typedef TYPE_1__ pa_mainloop_api ;


 TYPE_1__* FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

void FUNC_2 (pa_threaded_mainloop *VAR_0, pa_time_event *VAR_1)
{
    pa_mainloop_api *VAR_2 = FUNC_0 (VAR_0);

    VAR_2->time_free (VAR_1);
}
