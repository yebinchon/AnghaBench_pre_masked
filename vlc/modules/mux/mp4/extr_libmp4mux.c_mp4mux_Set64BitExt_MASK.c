
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int options; } ;
typedef TYPE_1__ mp4mux_handle_t ;


 int VAR_0 ;
 int VAR_1 ;

void FUNC_0(mp4mux_handle_t *VAR_2)
{


    if(VAR_2->options & VAR_0)
        return;

    VAR_2->options |= VAR_1;
}
