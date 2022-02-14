
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {unsigned int srcc; struct TYPE_6__* ptv; struct TYPE_6__* srcv; } ;
typedef TYPE_1__ rtp_session_t ;
typedef int demux_t ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int *,TYPE_1__*,TYPE_1__) ;

void FUNC_2 (demux_t *VAR_0, rtp_session_t *VAR_1)
{
    for (unsigned VAR_2 = 0; VAR_2 < VAR_1->srcc; VAR_2++)
        FUNC_1 (VAR_0, VAR_1, VAR_1->srcv[VAR_2]);

    FUNC_0 (VAR_1->srcv);
    FUNC_0 (VAR_1->ptv);
    FUNC_0 (VAR_1);
    (void)VAR_0;
}
