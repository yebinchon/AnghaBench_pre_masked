
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_5__ ;
typedef struct TYPE_23__ TYPE_4__ ;
typedef struct TYPE_22__ TYPE_3__ ;
typedef struct TYPE_21__ TYPE_2__ ;
typedef struct TYPE_20__ TYPE_1__ ;
typedef struct TYPE_19__ TYPE_15__ ;
typedef struct TYPE_18__ TYPE_11__ ;


typedef scalar_t__ vlc_tick_t ;
struct TYPE_22__ {int i_start; scalar_t__ i_stop; struct TYPE_22__* p_next; } ;
typedef TYPE_3__ subpicture_t ;
typedef int sout_stream_t ;
struct TYPE_23__ {scalar_t__ (* pf_get_output_dimensions ) (int ,unsigned int*,unsigned int*) ;int encoder; TYPE_2__* p_enccfg; int callback_data; int (* pf_send_subpicture ) (int ,TYPE_3__*) ;scalar_t__ (* pf_get_master_drift ) (int ) ;TYPE_15__* p_decoder; } ;
typedef TYPE_4__ sout_stream_id_sys_t ;
struct TYPE_18__ {unsigned int i_sar_num; unsigned int i_visible_width; unsigned int i_width; unsigned int i_sar_den; unsigned int i_visible_height; unsigned int i_height; } ;
struct TYPE_24__ {TYPE_11__ video; } ;
typedef TYPE_5__ es_format_t ;
typedef int block_t ;
struct TYPE_20__ {unsigned int i_width; unsigned int i_height; } ;
struct TYPE_21__ {scalar_t__ i_codec; TYPE_1__ spu; } ;
struct TYPE_19__ {int (* pf_decode ) (TYPE_15__*,int *) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int **,int *) ;
 int FUNC_2 (TYPE_5__*) ;
 int FUNC_3 (TYPE_5__*,int ,int ) ;
 int FUNC_4 (TYPE_15__*,int *) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (int ,TYPE_3__*) ;
 scalar_t__ FUNC_7 (int ,unsigned int*,unsigned int*) ;
 int FUNC_8 (TYPE_3__*) ;
 int FUNC_9 (TYPE_3__*,TYPE_11__*,TYPE_11__*,int ) ;
 TYPE_3__* FUNC_10 (TYPE_4__*) ;
 int * FUNC_11 (int ,TYPE_3__*) ;

int FUNC_12( sout_stream_t *VAR_5,
                                  sout_stream_id_sys_t *VAR_6,
                                  block_t *VAR_7, block_t **VAR_8 )
{
    FUNC_0(VAR_5);
    *VAR_8 = ((void*)0);
    bool VAR_9 = 0;

    int VAR_10 = VAR_6->p_decoder->pf_decode( VAR_6->p_decoder, VAR_7 );
    if( VAR_10 != VAR_1 )
        return VAR_3;

    subpicture_t *VAR_11 = FUNC_10( VAR_6 );

    do
    {
        subpicture_t *VAR_12 = VAR_11;
        if( VAR_12 == ((void*)0) )
            break;
        VAR_11 = VAR_12->p_next;
        VAR_12->p_next = ((void*)0);

        if( VAR_9 )
        {
            FUNC_8( VAR_12 );
            continue;
        }

        vlc_tick_t VAR_13;
        if( VAR_6->pf_get_master_drift &&
            (VAR_13 = VAR_6->pf_get_master_drift( VAR_6->callback_data )) )
        {
            VAR_12->i_start -= VAR_13;
            if( VAR_12->i_stop )
                VAR_12->i_stop -= VAR_13;
        }

        if( VAR_6->p_enccfg->i_codec == 0 )
        {
            if( !VAR_6->pf_send_subpicture )
            {
                FUNC_8( VAR_12 );
                VAR_9 = 1;
            }
            else VAR_6->pf_send_subpicture( VAR_6->callback_data, VAR_12 );
        }
        else
        {
            block_t *VAR_14;

            es_format_t VAR_15;
            FUNC_3( &VAR_15, VAR_0, VAR_2 );

            unsigned VAR_16, VAR_17;
            if( VAR_6->pf_get_output_dimensions == ((void*)0) ||
                VAR_6->pf_get_output_dimensions( VAR_6->callback_data,
                                              &VAR_16, &VAR_17 ) != VAR_4 )
            {
                VAR_16 = VAR_6->p_enccfg->spu.i_width;
                VAR_17 = VAR_6->p_enccfg->spu.i_height;
            }

            VAR_15.video.i_sar_num =
            VAR_15.video.i_visible_width =
            VAR_15.video.i_width = VAR_16;

            VAR_15.video.i_sar_den =
            VAR_15.video.i_visible_height =
            VAR_15.video.i_height = VAR_17;

            FUNC_9( VAR_12, &VAR_15.video, &VAR_15.video, VAR_12->i_start );
            FUNC_2( &VAR_15 );

            VAR_14 = FUNC_11( VAR_6->encoder, VAR_12 );
            FUNC_8( VAR_12 );
            if( VAR_14 )
                FUNC_1( VAR_8, VAR_14 );
            else
                VAR_9 = 1;
        }
    } while( VAR_11 );

    return VAR_9 ? VAR_3 : VAR_4;
}
