
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_32__ TYPE_7__ ;
typedef struct TYPE_31__ TYPE_6__ ;
typedef struct TYPE_30__ TYPE_5__ ;
typedef struct TYPE_29__ TYPE_4__ ;
typedef struct TYPE_28__ TYPE_3__ ;
typedef struct TYPE_27__ TYPE_2__ ;
typedef struct TYPE_26__ TYPE_1__ ;
typedef struct TYPE_25__ TYPE_15__ ;


typedef scalar_t__ vlc_tick_t ;
typedef int vlc_dialog_id ;
typedef scalar_t__ uint32_t ;
struct TYPE_27__ {int s; TYPE_3__* p_sys; } ;
typedef TYPE_2__ demux_t ;
struct TYPE_32__ {scalar_t__ i_chunk_pos; scalar_t__ i_chunk_size; } ;
struct TYPE_28__ {unsigned int i_track; TYPE_4__** track; scalar_t__ b_odml; TYPE_7__ ck_root; int i_movi_lastchunk_pos; } ;
typedef TYPE_3__ demux_sys_t ;
struct TYPE_25__ {int i_size; } ;
struct TYPE_26__ {scalar_t__ i_cat; int i_codec; } ;
struct TYPE_29__ {TYPE_15__ idx; TYPE_1__ fmt; } ;
typedef TYPE_4__ avi_track_t ;
struct TYPE_30__ {size_t i_stream; scalar_t__ i_cat; int i_fourcc; scalar_t__ i_pos; scalar_t__ i_size; int i_peek; } ;
typedef TYPE_5__ avi_packet_t ;
struct TYPE_31__ {int i_id; scalar_t__ i_pos; scalar_t__ i_length; scalar_t__ i_lengthtotal; int i_flags; } ;
typedef TYPE_6__ avi_entry_t ;
typedef TYPE_7__ avi_chunk_list_t ;





 int VAR_0 ;

 TYPE_7__* FUNC_0 (TYPE_7__*,int,int,int) ;
 int FUNC_1 (int ,int ) ;
 scalar_t__ FUNC_2 (TYPE_2__*,TYPE_5__*) ;
 scalar_t__ FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*) ;
 scalar_t__ FUNC_5 (int) ;
 int FUNC_6 (char*) ;
 scalar_t__ FUNC_7 (scalar_t__,int) ;
 int FUNC_8 (TYPE_15__*,int *,TYPE_6__*) ;
 int FUNC_9 (TYPE_15__*) ;
 int FUNC_10 (TYPE_2__*,char*,...) ;
 int FUNC_11 (TYPE_2__*,char*) ;
 int FUNC_12 (TYPE_2__*,char*) ;
 int FUNC_13 (int ) ;
 int * FUNC_14 (TYPE_2__*,int,double,int ,int ,int ) ;
 scalar_t__ FUNC_15 (TYPE_2__*,int *) ;
 int FUNC_16 (TYPE_2__*,int *) ;
 int FUNC_17 (TYPE_2__*,int *,double) ;
 int FUNC_18 (int ,scalar_t__) ;
 double FUNC_19 (int ) ;
 scalar_t__ FUNC_20 () ;

__attribute__((used)) static void FUNC_21( demux_t *VAR_1 )
{
    demux_sys_t *VAR_2 = VAR_1->p_sys;

    avi_chunk_list_t *VAR_3;
    avi_chunk_list_t *VAR_4;

    unsigned int VAR_5;
    uint32_t VAR_6;

    vlc_tick_t VAR_7;
    vlc_dialog_id *VAR_8 = ((void*)0);

    VAR_3 = FUNC_0( &VAR_2->ck_root, 130, 0, 1 );
    VAR_4 = FUNC_0( VAR_3, VAR_0, 0, 1 );

    if( !VAR_4 )
    {
        FUNC_11( VAR_1, "cannot find p_movi" );
        return;
    }

    for( VAR_5 = 0; VAR_5 < VAR_2->i_track; VAR_5++ )
        FUNC_9( &VAR_2->track[VAR_5]->idx );

    VAR_6 = FUNC_7( (uint32_t)(VAR_4->i_chunk_pos + VAR_4->i_chunk_size),
                        FUNC_13( VAR_1->s ) );

    FUNC_18( VAR_1->s, VAR_4->i_chunk_pos + 12 );
    FUNC_12( VAR_1, "creating index from LIST-movi, will take time !" );



    VAR_7 = FUNC_20();
    if( FUNC_13( VAR_1->s ) > 10000000 )
    {
        VAR_8 =
            FUNC_14( VAR_1, 0, 0.0, FUNC_6("Cancel"),
                                         FUNC_6("Broken or missing AVI Index"),
                                         FUNC_6("Fixing AVI Index...") );
    }

    for( ;; )
    {
        avi_packet_t VAR_9;


        if( VAR_8 != ((void*)0) && FUNC_20() - VAR_7 > FUNC_5(100) )
        {
            if( FUNC_15( VAR_1, VAR_8 ) )
                break;

            double VAR_10 = FUNC_19( VAR_1->s );
            double VAR_11 = FUNC_13( VAR_1->s );
            double VAR_12 = VAR_10 / VAR_11;
            FUNC_17( VAR_1, VAR_8, VAR_12 );

            VAR_7 = FUNC_20();
        }

        if( FUNC_2( VAR_1, &VAR_9 ) )
            break;

        if( VAR_9.i_stream < VAR_2->i_track &&
            VAR_9.i_cat == VAR_2->track[VAR_9.i_stream]->fmt.i_cat )
        {
            avi_track_t *VAR_13 = VAR_2->track[VAR_9.i_stream];

            avi_entry_t VAR_14;
            VAR_14.i_id = VAR_9.i_fourcc;
            VAR_14.i_flags = FUNC_1(VAR_13->fmt.i_codec, VAR_9.i_peek);
            VAR_14.i_pos = VAR_9.i_pos;
            VAR_14.i_length = VAR_9.i_size;
            VAR_14.i_lengthtotal = VAR_9.i_size;
            FUNC_8( &VAR_13->idx, &VAR_2->i_movi_lastchunk_pos, &VAR_14 );
        }
        else
        {
            switch( VAR_9.i_fourcc )
            {
            case 129:
                if( VAR_2->b_odml )
                {
                    avi_chunk_list_t *VAR_15;
                    VAR_15 = FUNC_0( &VAR_2->ck_root,
                                            130, 1, 1 );

                    FUNC_10( VAR_1, "looking for new RIFF chunk" );
                    if( !VAR_15 || FUNC_18( VAR_1->s,
                                         VAR_15->i_chunk_pos + 24 ) )
                        goto print_stat;
                    break;
                }
                goto print_stat;

            case 130:
                    FUNC_10( VAR_1, "new RIFF chunk found" );
                    break;

            case 128:
            case 131:
                break;

            default:
                FUNC_12( VAR_1, "need resync, probably broken avi" );
                if( FUNC_4( VAR_1 ) )
                {
                    FUNC_12( VAR_1, "lost sync, abord index creation" );
                    goto print_stat;
                }
            }
        }

        if( ( !VAR_2->b_odml && VAR_9.i_pos + VAR_9.i_size >= VAR_6 ) ||
            FUNC_3( VAR_1 ) )
        {
            break;
        }
    }

print_stat:
    if( VAR_8 != ((void*)0) )
        FUNC_16( VAR_1, VAR_8 );

    for( VAR_5 = 0; VAR_5 < VAR_2->i_track; VAR_5++ )
    {
        FUNC_10( VAR_1, "stream[%d] creating %d index entries",
                VAR_5, VAR_2->track[VAR_5]->idx.i_size );
    }
}
