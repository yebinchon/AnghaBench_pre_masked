
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_34__ TYPE_6__ ;
typedef struct TYPE_33__ TYPE_5__ ;
typedef struct TYPE_32__ TYPE_4__ ;
typedef struct TYPE_31__ TYPE_3__ ;
typedef struct TYPE_30__ TYPE_2__ ;
typedef struct TYPE_29__ TYPE_20__ ;
typedef struct TYPE_28__ TYPE_1__ ;
typedef struct TYPE_27__ TYPE_11__ ;


typedef scalar_t__ vlc_tick_t ;
typedef int sout_stream_t ;
struct TYPE_30__ {int lock; } ;
struct TYPE_27__ {int i_rate; } ;
struct TYPE_28__ {TYPE_11__ audio; } ;
struct TYPE_31__ {int b_error; scalar_t__ (* pf_drift_validate ) (int ,scalar_t__) ;scalar_t__ i_drift; int encoder; int * p_af_chain; int next_input_pts; TYPE_2__ fifo; int callback_data; TYPE_5__* p_enccfg; scalar_t__ downstream_id; TYPE_20__* p_decoder; scalar_t__ (* pf_transcode_downstream_add ) (int *,int *,int ) ;TYPE_1__ decoder_out; int p_filterscfg; TYPE_11__ fmt_input_audio; } ;
typedef TYPE_3__ sout_stream_id_sys_t ;
struct TYPE_32__ {scalar_t__ i_pts; scalar_t__ i_dts; int i_nb_samples; struct TYPE_32__* p_next; } ;
typedef TYPE_4__ block_t ;
struct TYPE_34__ {int audio; } ;
struct TYPE_33__ {int i_codec; } ;
struct TYPE_29__ {int (* pf_decode ) (TYPE_20__*,TYPE_4__*) ;int fmt_in; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int *,int *) ;
 TYPE_4__* FUNC_1 (int *,TYPE_4__*,float) ;
 int FUNC_2 (TYPE_4__**,TYPE_4__*) ;
 int FUNC_3 (TYPE_4__*) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int *,int ,int) ;
 int FUNC_7 (int *,scalar_t__) ;
 scalar_t__ FUNC_8 (int) ;
 int FUNC_9 (int *,char*,char*) ;
 int FUNC_10 (int *,char*) ;
 int FUNC_11 (TYPE_20__*,TYPE_4__*) ;
 scalar_t__ FUNC_12 (int *,int *,int ) ;
 scalar_t__ FUNC_13 (int ,scalar_t__) ;
 scalar_t__ FUNC_14 (int *,int ,TYPE_11__*,int *,int **) ;
 int FUNC_15 (TYPE_11__*,TYPE_11__*) ;
 TYPE_4__* FUNC_16 (TYPE_3__*) ;
 int FUNC_17 (TYPE_5__*,TYPE_11__*,int ,int) ;
 int FUNC_18 (int ,TYPE_4__**) ;
 TYPE_4__* FUNC_19 (int ,TYPE_4__*) ;
 TYPE_6__* FUNC_20 (int ) ;
 int FUNC_21 (int ) ;
 scalar_t__ FUNC_22 (int ,TYPE_5__*) ;
 scalar_t__ FUNC_23 (int ) ;
 scalar_t__ FUNC_24 (int) ;
 int FUNC_25 (int *) ;
 int FUNC_26 (int *) ;

int FUNC_27( sout_stream_t *VAR_4,
                                    sout_stream_id_sys_t *VAR_5,
                                    block_t *VAR_6, block_t **VAR_7 )
{
    *VAR_7 = ((void*)0);

    int VAR_8 = VAR_5->p_decoder->pf_decode( VAR_5->p_decoder, VAR_6 );
    if( VAR_8 != VAR_0 )
        return VAR_1;

    block_t *VAR_9 = FUNC_16( VAR_5 );

    do
    {
        block_t *VAR_10 = VAR_9;
        if( VAR_10 == ((void*)0) )
            break;
        VAR_9 = VAR_10->p_next;
        VAR_10->p_next = ((void*)0);

        if( VAR_5->b_error )
        {
            FUNC_3( VAR_10 );
            continue;
        }

        FUNC_25(&VAR_5->fifo.lock);

        if( VAR_10 && ( FUNC_24(!FUNC_23( VAR_5->encoder )) ||
            !FUNC_15( &VAR_5->fmt_input_audio, &VAR_5->decoder_out.audio ) ) )
        {
            if( !FUNC_23( VAR_5->encoder ) )
            {
                FUNC_17( VAR_5->p_enccfg,
                                                   &VAR_5->decoder_out.audio, VAR_5->encoder, 1 );
                VAR_5->fmt_input_audio = VAR_5->decoder_out.audio;
            }
            else
            {

                FUNC_10( VAR_4, "Audio changed, trying to reinitialize filters" );
                if( VAR_5->p_af_chain != ((void*)0) )
                {
                    FUNC_0( VAR_4, VAR_5->p_af_chain );
                    VAR_5->p_af_chain = ((void*)0);
                }
                VAR_5->fmt_input_audio = VAR_5->decoder_out.audio;
            }

            if( !VAR_5->p_af_chain &&
                FUNC_14( VAR_4,
                                              VAR_5->p_filterscfg,
                                              &VAR_5->decoder_out.audio,
                                              &FUNC_20( VAR_5->encoder )->audio,
                                              &VAR_5->p_af_chain ) )
            {
                FUNC_26(&VAR_5->fifo.lock);
                goto error;
            }

            FUNC_6( &VAR_5->next_input_pts, VAR_5->decoder_out.audio.i_rate, 1 );
            FUNC_7( &VAR_5->next_input_pts, VAR_10->i_pts );

            if( !FUNC_23( VAR_5->encoder ) &&
                FUNC_22( VAR_5->encoder, VAR_5->p_enccfg ) )
            {
                FUNC_26(&VAR_5->fifo.lock);
                goto error;
            }

            if( !VAR_5->downstream_id )
                VAR_5->downstream_id =
                    VAR_5->pf_transcode_downstream_add( VAR_4,
                                                     &VAR_5->p_decoder->fmt_in,
                                                     FUNC_21( VAR_5->encoder ) );
            if( !VAR_5->downstream_id )
            {
                FUNC_9( VAR_4, "cannot output transcoded stream %4.4s",
                                   (char *) &VAR_5->p_enccfg->i_codec );
                FUNC_26(&VAR_5->fifo.lock);
                goto error;
            }
        }

        FUNC_26(&VAR_5->fifo.lock);

        if( VAR_5->pf_drift_validate )
        {
            vlc_tick_t VAR_11 = FUNC_4( &VAR_5->next_input_pts );
            vlc_tick_t VAR_12 = 0;

            if( FUNC_8( VAR_10->i_pts != VAR_3 ) )
                VAR_12 = VAR_10->i_pts - VAR_11;
            if( VAR_5->pf_drift_validate( VAR_5->callback_data, VAR_12 ) != VAR_2 )
            {
                FUNC_7( &VAR_5->next_input_pts, VAR_10->i_pts );
                VAR_12 = 0;
            }

            FUNC_25(&VAR_5->fifo.lock);
            VAR_5->i_drift = VAR_12;
            FUNC_26(&VAR_5->fifo.lock);
            FUNC_5( &VAR_5->next_input_pts, VAR_10->i_nb_samples );
        }

        VAR_10->i_dts = VAR_10->i_pts;


        VAR_10 = FUNC_1( VAR_5->p_af_chain, VAR_10, 1.f );
        if( VAR_10 )
        {
            VAR_10->i_dts = VAR_10->i_pts;

            block_t *VAR_13 = FUNC_19( VAR_5->encoder, VAR_10 );
            FUNC_2( VAR_7, VAR_13 );
            FUNC_3( VAR_10 );
        }
        continue;
error:
        if( VAR_10 )
            FUNC_3( VAR_10 );
        VAR_5->b_error = 1;
    } while( VAR_9 );


    if( FUNC_24( !VAR_5->b_error && VAR_6 == ((void*)0) ) && FUNC_23( VAR_5->encoder ) )
    {
        FUNC_18( VAR_5->encoder, VAR_7 );
    }

    return VAR_5->b_error ? VAR_1 : VAR_2;
}
