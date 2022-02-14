
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct TYPE_9__ {scalar_t__ next; } ;
typedef TYPE_1__ mtrk_t ;
typedef int es_out_t ;
struct TYPE_10__ {int s; TYPE_3__* p_sys; } ;
typedef TYPE_2__ demux_t ;
struct TYPE_11__ {unsigned int trackc; int pts; TYPE_1__* trackv; } ;
typedef TYPE_3__ demux_sys_t ;


 scalar_t__ FUNC_0 (TYPE_2__*,TYPE_1__*,int *) ;
 scalar_t__ FUNC_1 (int ,TYPE_1__*) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (int *,scalar_t__) ;
 int FUNC_3 (TYPE_2__*,char*) ;

__attribute__((used)) static int FUNC_4 (demux_t *VAR_1, uint64_t *restrict VAR_2,
                       es_out_t *VAR_3)
{
    uint64_t VAR_4 = *VAR_2, VAR_5 = VAR_0;
    demux_sys_t *VAR_6 = VAR_1->p_sys;

    for (unsigned VAR_7 = 0; VAR_7 < VAR_6->trackc; VAR_7++)
    {
        mtrk_t *VAR_8 = VAR_6->trackv + VAR_7;

        while (VAR_8->next <= VAR_4)
        {
            if (FUNC_0 (VAR_1, VAR_8, VAR_3)
             || FUNC_1 (VAR_1->s, VAR_8))
            {
                FUNC_3 (VAR_1, "fatal parsing error");
                return -1;
            }
        }

        if (VAR_5 > VAR_8->next)
            VAR_5 = VAR_8->next;
    }

    if (VAR_5 != VAR_0)
        FUNC_2 (&VAR_6->pts, VAR_5 - VAR_4);
    *VAR_2 = VAR_5;
    return 0;
}
