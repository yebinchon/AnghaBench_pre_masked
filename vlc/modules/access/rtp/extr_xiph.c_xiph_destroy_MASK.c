
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int id; TYPE_3__* block; } ;
typedef TYPE_1__ rtp_xiph_t ;
typedef int demux_t ;
struct TYPE_5__ {int i_flags; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,TYPE_3__*) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (TYPE_1__*) ;

void FUNC_3 (demux_t *VAR_1, void *VAR_2)
{
    rtp_xiph_t *VAR_3 = VAR_2;

    if (!VAR_2)
        return;
    if (VAR_3->block)
    {
        VAR_3->block->i_flags |= VAR_0;
        FUNC_0 (VAR_1, VAR_3->id, VAR_3->block);
    }
    FUNC_1 (VAR_1, VAR_3->id);
    FUNC_2 (VAR_3);
}
