
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int * gme_err_t ;
struct TYPE_10__ {int out; TYPE_2__* p_sys; } ;
typedef TYPE_1__ demux_t ;
struct TYPE_11__ {unsigned int track_id; int title_changed; int pts; int es; int emu; } ;
typedef TYPE_2__ demux_sys_t ;
struct TYPE_12__ {int i_pts; int i_dts; scalar_t__ p_buffer; } ;
typedef TYPE_3__ block_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_3__* FUNC_0 (int) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int ,int ,TYPE_3__*) ;
 int FUNC_5 (int ,int ) ;
 int * FUNC_6 (int ,int,void*) ;
 int FUNC_7 (int ,unsigned int) ;
 scalar_t__ FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (int ) ;
 int FUNC_10 (TYPE_1__*,char*,unsigned int) ;
 int FUNC_11 (TYPE_1__*,char*,int *) ;
 scalar_t__ FUNC_12 (int ) ;

__attribute__((used)) static int FUNC_13 (demux_t *VAR_3)
{
    demux_sys_t *VAR_4 = VAR_3->p_sys;


    if (FUNC_9 (VAR_4->emu))
    {
        FUNC_10 (VAR_3, "track %u ended", VAR_4->track_id);
        if (++VAR_4->track_id >= (unsigned)FUNC_8 (VAR_4->emu))
            return VAR_1;

        VAR_4->title_changed = 1;
        FUNC_7 (VAR_4->emu, VAR_4->track_id);
    }


    block_t *VAR_5 = FUNC_0 (2 * 2 * VAR_0);
    if (FUNC_12(VAR_5 == ((void*)0)))
        return VAR_1;

    gme_err_t VAR_6 = FUNC_6 (VAR_4->emu, 2 * VAR_0, (void *)VAR_5->p_buffer);
    if (VAR_6 != ((void*)0))
    {
        FUNC_1 (VAR_5);
        FUNC_11 (VAR_3, "%s", VAR_6);
        return VAR_1;
    }

    VAR_5->i_pts = VAR_5->i_dts = FUNC_2 (&VAR_4->pts);
    FUNC_5 (VAR_3->out, VAR_5->i_pts);
    FUNC_4 (VAR_3->out, VAR_4->es, VAR_5);
    FUNC_3 (&VAR_4->pts, VAR_0);
    return VAR_2;
}
