
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_9__ ;
typedef struct TYPE_22__ TYPE_8__ ;
typedef struct TYPE_21__ TYPE_7__ ;
typedef struct TYPE_20__ TYPE_6__ ;
typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;
typedef struct TYPE_14__ TYPE_11__ ;
typedef struct TYPE_13__ TYPE_10__ ;


struct TYPE_22__ {int* program_map; } ;
typedef TYPE_8__ pgc_t ;
struct TYPE_23__ {TYPE_10__* p_sys; } ;
typedef TYPE_9__ demux_t ;
struct TYPE_13__ {size_t i_cur_cell; int i_angle; int i_next_cell; int i_chapter; int i_chapters; int i_ttn; int cur_chapter; int updates; TYPE_7__* p_vts_file; TYPE_1__* p_cur_pgc; } ;
typedef TYPE_10__ demux_sys_t ;
struct TYPE_14__ {scalar_t__ block_type; scalar_t__ block_mode; } ;
typedef TYPE_11__ cell_playback_t ;
struct TYPE_21__ {TYPE_6__* vts_pgcit; TYPE_4__* vts_ptt_srpt; } ;
struct TYPE_20__ {TYPE_5__* pgci_srp; } ;
struct TYPE_19__ {TYPE_8__* pgc; } ;
struct TYPE_18__ {TYPE_3__* title; } ;
struct TYPE_17__ {TYPE_2__* ptt; } ;
struct TYPE_16__ {int pgcn; int pgn; } ;
struct TYPE_15__ {TYPE_11__* cell_playback; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_0( demux_t *VAR_3 )
{
    demux_sys_t *VAR_4 = VAR_3->p_sys;

    const pgc_t *VAR_5;
    int VAR_6, VAR_7;
    int VAR_8 = 0;

    const cell_playback_t *VAR_9 = VAR_4->p_cur_pgc->cell_playback;
    if( VAR_9[VAR_4->i_cur_cell].block_type == VAR_1 )
    {
        VAR_4->i_cur_cell += VAR_4->i_angle - 1;

        while( VAR_9[VAR_4->i_cur_cell+VAR_8].block_mode != VAR_0 )
        {
            VAR_8++;
        }
        VAR_4->i_next_cell = VAR_4->i_cur_cell + VAR_8 + 1;
    }
    else
    {
        VAR_4->i_next_cell = VAR_4->i_cur_cell + 1;
    }

    if( VAR_4->i_chapter + 1 >= VAR_4->i_chapters ) return;

    VAR_6 = VAR_4->p_vts_file->vts_ptt_srpt->title[
                VAR_4->i_ttn - 1].ptt[VAR_4->i_chapter + 1].pgcn;
    VAR_7 = VAR_4->p_vts_file->vts_ptt_srpt->title[
              VAR_4->i_ttn - 1].ptt[VAR_4->i_chapter + 1].pgn;
    VAR_5 = VAR_4->p_vts_file->vts_pgcit->pgci_srp[VAR_6 - 1].pgc;

    if( VAR_4->i_cur_cell >= VAR_5->program_map[VAR_7 - 1] - 1 )
    {
        VAR_4->i_chapter++;

        if( VAR_4->i_chapter < VAR_4->i_chapters &&
            VAR_4->cur_chapter != VAR_4->i_chapter )
        {
            VAR_4->updates |= VAR_2;
            VAR_4->cur_chapter = VAR_4->i_chapter;
        }
    }
}
