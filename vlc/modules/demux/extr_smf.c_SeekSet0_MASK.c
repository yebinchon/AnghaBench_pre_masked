
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int stream_t ;
struct TYPE_7__ {int running_event; int start; scalar_t__ next; scalar_t__ offset; } ;
typedef TYPE_1__ mtrk_t ;
struct TYPE_8__ {TYPE_3__* p_sys; int * s; } ;
typedef TYPE_2__ demux_t ;
struct TYPE_9__ {int ppqn; unsigned int trackc; TYPE_1__* trackv; int tick; scalar_t__ pulse; int pts; } ;
typedef TYPE_3__ demux_sys_t ;


 scalar_t__ FUNC_0 (int *,TYPE_1__*) ;
 int VAR_0 ;
 int FUNC_1 (int *,int,int) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (TYPE_2__*,char*) ;
 scalar_t__ FUNC_4 (int *,int ) ;

__attribute__((used)) static int FUNC_5 (demux_t *VAR_1)
{
    stream_t *VAR_2 = VAR_1->s;
    demux_sys_t *VAR_3 = VAR_1->p_sys;


    FUNC_1 (&VAR_3->pts, VAR_3->ppqn * 2, 1);
    FUNC_2 (&VAR_3->pts, VAR_0);
    VAR_3->pulse = 0;
    VAR_3->tick = VAR_0;

    for (unsigned VAR_4 = 0; VAR_4 < VAR_3->trackc; VAR_4++)
    {
        mtrk_t *VAR_5 = VAR_3->trackv + VAR_4;

        VAR_5->offset = 0;
        VAR_5->next = 0;



        VAR_5->running_event = 0xF6;

        if (FUNC_4 (VAR_2, VAR_5->start)
         || FUNC_0 (VAR_2, VAR_5))
        {
            FUNC_3 (VAR_1, "fatal parsing error");
            return -1;
        }
    }

    return 0;
}
