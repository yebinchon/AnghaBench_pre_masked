
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_32__ TYPE_9__ ;
typedef struct TYPE_31__ TYPE_8__ ;
typedef struct TYPE_30__ TYPE_7__ ;
typedef struct TYPE_29__ TYPE_6__ ;
typedef struct TYPE_28__ TYPE_5__ ;
typedef struct TYPE_27__ TYPE_4__ ;
typedef struct TYPE_26__ TYPE_3__ ;
typedef struct TYPE_25__ TYPE_2__ ;
typedef struct TYPE_24__ TYPE_1__ ;
typedef struct TYPE_23__ TYPE_14__ ;
typedef struct TYPE_22__ TYPE_13__ ;
typedef struct TYPE_21__ TYPE_12__ ;
typedef struct TYPE_20__ TYPE_11__ ;
typedef struct TYPE_19__ TYPE_10__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_19__ {TYPE_7__* cell_playback; } ;
typedef TYPE_10__ pgc_t ;
struct TYPE_20__ {TYPE_9__* vts_vobu_admap; TYPE_8__* vts_c_adt; TYPE_6__* vts_pgcit; TYPE_3__* vts_ptt_srpt; } ;
typedef TYPE_11__ ifo_handle_t ;
struct TYPE_21__ {TYPE_13__* p_sys; } ;
typedef TYPE_12__ demux_t ;
struct TYPE_22__ {int i_title_start_cell; int i_title_end_cell; int i_title_offset; int i_chapters; int i_ttn; int cur_chapter; int i_cur_block; int i_next_vobu; int i_pack_len; int i_cur_cell; int i_chapter; TYPE_10__* p_cur_pgc; int updates; TYPE_11__* p_vts_file; } ;
typedef TYPE_13__ demux_sys_t ;
struct TYPE_23__ {scalar_t__ const start_sector; } ;
typedef TYPE_14__ cell_adr_t ;
struct TYPE_32__ {int last_byte; scalar_t__* vobu_start_sectors; } ;
struct TYPE_31__ {int nr_of_vobs; TYPE_14__* cell_adr_table; } ;
struct TYPE_30__ {scalar_t__ first_sector; scalar_t__ last_sector; } ;
struct TYPE_29__ {TYPE_5__* pgci_srp; } ;
struct TYPE_28__ {TYPE_4__* pgc; } ;
struct TYPE_27__ {int* program_map; } ;
struct TYPE_26__ {TYPE_2__* title; } ;
struct TYPE_25__ {TYPE_1__* ptt; } ;
struct TYPE_24__ {int pgcn; int pgn; } ;


 int FUNC_0 (TYPE_12__*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (TYPE_12__*,char*,int,int,int,int,scalar_t__,scalar_t__,scalar_t__ const) ;
 int FUNC_3 (TYPE_12__*,char*,int) ;

__attribute__((used)) static void FUNC_4( demux_t *VAR_2, int VAR_3 )
{
    demux_sys_t *VAR_4 = VAR_2->p_sys;
    int VAR_5 = 0;
    int VAR_6 = 0;
    int VAR_7;
    const pgc_t *VAR_8 = VAR_4->p_cur_pgc;
    const ifo_handle_t *VAR_9 = VAR_4->p_vts_file;


    VAR_7 = VAR_3;
    for( VAR_6 = VAR_4->i_title_start_cell;
         VAR_6 <= VAR_4->i_title_end_cell; VAR_6++ )
    {
        if( VAR_7 < (int)VAR_8->cell_playback[VAR_6].last_sector -
            (int)VAR_8->cell_playback[VAR_6].first_sector + 1 ) break;

        VAR_7 -= (VAR_8->cell_playback[VAR_6].last_sector -
            VAR_8->cell_playback[VAR_6].first_sector + 1);
    }
    if( VAR_6 > VAR_4->i_title_end_cell )
    {
        FUNC_3( VAR_2, "couldn't find cell for block %i", VAR_3 );
        return;
    }
    VAR_7 += VAR_8->cell_playback[VAR_6].first_sector;
    VAR_4->i_title_offset = VAR_3;


    for( VAR_5 = 0; VAR_5 < VAR_4->i_chapters; VAR_5++ )
    {
        int VAR_10, VAR_11, VAR_12;

        VAR_10 = VAR_9->vts_ptt_srpt->title[
                    VAR_4->i_ttn - 1].ptt[VAR_5].pgcn;
        VAR_11 = VAR_9->vts_ptt_srpt->title[
                    VAR_4->i_ttn - 1].ptt[VAR_5].pgn;

        VAR_12 = VAR_9->vts_pgcit->pgci_srp[VAR_10 - 1].pgc->program_map[VAR_11-1];

        if( VAR_12 > VAR_6 ) break;
    }

    if( VAR_5 < VAR_4->i_chapters &&
        VAR_4->cur_chapter != VAR_5 )
    {
        VAR_4->updates |= VAR_0;
        VAR_4->cur_chapter = VAR_5;
    }



    int VAR_13 = 1;
    const size_t VAR_14 =
            (VAR_9->vts_vobu_admap->last_byte + 1 - VAR_1) / sizeof(uint32_t);
    for( size_t VAR_15=0; VAR_15<VAR_14; VAR_15++ )
    {
        if( VAR_9->vts_vobu_admap->vobu_start_sectors[VAR_15] > (uint32_t) VAR_7 )
            break;
        VAR_13 = VAR_15 + 1;
    }


    int VAR_16 = 1;



    const uint32_t VAR_17 = VAR_9->vts_vobu_admap->vobu_start_sectors[VAR_13-1];
    for( int VAR_18 = 0; VAR_18 + 1<VAR_9->vts_c_adt->nr_of_vobs; VAR_18++ )
    {
        const cell_adr_t *VAR_19 = &VAR_9->vts_c_adt->cell_adr_table[VAR_18];
        if(VAR_19->start_sector <= VAR_17)
           VAR_16 = VAR_18 + 1;
    }

    FUNC_2( VAR_2, "cell %d i_sub_cell %d chapter %d vobu %d "
             "cell_sector %d vobu_sector %d sub_cell_sector %d",
             VAR_6, VAR_16, VAR_5, VAR_13,
             VAR_4->p_cur_pgc->cell_playback[VAR_6].first_sector,
             VAR_9->vts_vobu_admap->vobu_start_sectors[VAR_13],
             VAR_9->vts_c_adt->cell_adr_table[VAR_16 - 1].start_sector);


    VAR_4->i_cur_block = VAR_7;
    if(FUNC_1( (size_t)VAR_13 < VAR_14 ))
        VAR_4->i_next_vobu = VAR_9->vts_vobu_admap->vobu_start_sectors[VAR_13];
    else
        VAR_4->i_next_vobu = VAR_7;
    VAR_4->i_pack_len = VAR_4->i_next_vobu - VAR_7;
    VAR_4->i_cur_cell = VAR_6;
    VAR_4->i_chapter = VAR_5;
    FUNC_0( VAR_2 );

    return;
}
