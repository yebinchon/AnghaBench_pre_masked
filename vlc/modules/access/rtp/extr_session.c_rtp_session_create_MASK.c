
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * ptv; scalar_t__ ptc; scalar_t__ srcc; int * srcv; } ;
typedef TYPE_1__ rtp_session_t ;
typedef int demux_t ;


 TYPE_1__* FUNC_0 (int) ;

rtp_session_t *
FUNC_1 (demux_t *VAR_0)
{
    rtp_session_t *VAR_1 = FUNC_0 (sizeof (*VAR_1));
    if (VAR_1 == ((void*)0))
        return ((void*)0);

    VAR_1->srcv = ((void*)0);
    VAR_1->srcc = 0;
    VAR_1->ptc = 0;
    VAR_1->ptv = ((void*)0);

    (void)VAR_0;
    return VAR_1;
}
