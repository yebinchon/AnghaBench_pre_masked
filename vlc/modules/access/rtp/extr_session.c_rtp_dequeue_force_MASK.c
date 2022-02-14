
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int * blocks; } ;
typedef TYPE_1__ rtp_source_t ;
struct TYPE_7__ {unsigned int srcc; TYPE_1__** srcv; } ;
typedef TYPE_2__ rtp_session_t ;
typedef int demux_t ;
typedef int block_t ;


 int FUNC_0 (int *,TYPE_2__ const*,TYPE_1__*) ;

void FUNC_1 (demux_t *VAR_0, const rtp_session_t *VAR_1)
{
    for (unsigned VAR_2 = 0, VAR_3 = VAR_1->srcc; VAR_2 < VAR_3; VAR_2++)
    {
        rtp_source_t *VAR_4 = VAR_1->srcv[VAR_2];
        block_t *VAR_5;

        while (((VAR_5 = VAR_4->blocks)) != ((void*)0))
            FUNC_0 (VAR_0, VAR_1, VAR_4);
    }
}
