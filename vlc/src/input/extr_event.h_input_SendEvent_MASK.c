
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct vlc_input_event {int dummy; } ;
typedef int input_thread_t ;
struct TYPE_3__ {int events_data; int (* events_cb ) (int *,struct vlc_input_event const*,int ) ;} ;
typedef TYPE_1__ input_thread_private_t ;


 TYPE_1__* FUNC_0 (int *) ;
 int FUNC_1 (int *,struct vlc_input_event const*,int ) ;

__attribute__((used)) static inline void FUNC_2(input_thread_t *VAR_0,
                                   const struct vlc_input_event *VAR_1)
{
    input_thread_private_t *VAR_2 = FUNC_0(VAR_0);
    if(VAR_2->events_cb)
        VAR_2->events_cb(VAR_0, VAR_1, VAR_2->events_data);
}
