
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_58__ TYPE_9__ ;
typedef struct TYPE_57__ TYPE_8__ ;
typedef struct TYPE_56__ TYPE_7__ ;
typedef struct TYPE_55__ TYPE_6__ ;
typedef struct TYPE_54__ TYPE_5__ ;
typedef struct TYPE_53__ TYPE_4__ ;
typedef struct TYPE_52__ TYPE_3__ ;
typedef struct TYPE_51__ TYPE_32__ ;
typedef struct TYPE_50__ TYPE_2__ ;
typedef struct TYPE_49__ TYPE_22__ ;
typedef struct TYPE_48__ TYPE_1__ ;
typedef struct TYPE_47__ TYPE_19__ ;
typedef struct TYPE_46__ TYPE_11__ ;
typedef struct TYPE_45__ TYPE_10__ ;


typedef int sout_stream_t ;
struct TYPE_45__ {int i_chroma; int i_sar_den; int i_sar_num; } ;
struct TYPE_55__ {int b_error; int encoder; TYPE_22__* p_enccfg; int * p_final_conv_static; int * p_uf_chain; int * p_conv_static; int * p_conv_nonstatic; int * p_f_chain; scalar_t__ downstream_id; TYPE_32__* p_decoder; scalar_t__ (* pf_transcode_downstream_add ) (int *,int *,int ) ;int p_filterscfg; TYPE_10__ fmt_input_video; int * p_spu_blender; } ;
typedef TYPE_6__ sout_stream_id_sys_t ;
struct TYPE_46__ {int i_sar_den; int i_sar_num; } ;
struct TYPE_56__ {TYPE_11__ format; struct TYPE_56__* p_next; } ;
typedef TYPE_7__ picture_t ;
typedef int filter_chain_t ;
struct TYPE_57__ {TYPE_10__ video; } ;
typedef TYPE_8__ es_format_t ;
struct TYPE_58__ {int i_flags; } ;
typedef TYPE_9__ block_t ;
struct TYPE_54__ {int i_height; int i_width; } ;
struct TYPE_48__ {int i_count; } ;
struct TYPE_52__ {scalar_t__ num; } ;
struct TYPE_53__ {TYPE_1__ threads; TYPE_3__ fps; } ;
struct TYPE_50__ {int video; } ;
struct TYPE_51__ {int (* pf_decode ) (TYPE_32__*,TYPE_9__*) ;int fmt_in; TYPE_2__ fmt_out; } ;
struct TYPE_49__ {char* psz_name; TYPE_4__ video; int i_codec; } ;
struct TYPE_47__ {TYPE_5__ video; } ;


 size_t FUNC_0 (int **) ;
 int VAR_0 ;
 TYPE_7__* FUNC_1 (int *,TYPE_6__*,TYPE_7__*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int *) ;
 scalar_t__ VAR_4 ;
 int FUNC_3 (int) ;
 int FUNC_4 (TYPE_9__**,TYPE_9__*) ;
 int FUNC_5 (TYPE_8__*,int ,int ) ;
 int FUNC_6 (int *) ;
 TYPE_7__* FUNC_7 (int *,TYPE_7__*) ;
 int FUNC_8 (TYPE_6__*,TYPE_7__*) ;
 int FUNC_9 (int *,char*,...) ;
 int FUNC_10 (int *,char*,char*,...) ;
 int FUNC_11 (int *,char*,...) ;
 int FUNC_12 (int *,char*) ;
 int FUNC_13 (TYPE_7__*) ;
 int FUNC_14 (TYPE_32__*,TYPE_9__*) ;
 scalar_t__ FUNC_15 (int *,int *,int ) ;
 int FUNC_16 (TYPE_9__**,int) ;
 TYPE_7__* FUNC_17 (TYPE_6__*) ;
 int FUNC_18 (int ) ;
 scalar_t__ FUNC_19 (int ,TYPE_9__**) ;
 TYPE_9__* FUNC_20 (int ,TYPE_7__*) ;
 TYPE_19__* FUNC_21 (int ) ;
 int FUNC_22 (int ) ;
 TYPE_9__* FUNC_23 (int ) ;
 scalar_t__ FUNC_24 (int ,TYPE_22__*) ;
 scalar_t__ FUNC_25 (int ) ;
 int FUNC_26 (int ,int *,TYPE_22__*,int ,int ) ;
 int FUNC_27 (int **) ;
 int FUNC_28 (TYPE_6__*) ;
 scalar_t__ FUNC_29 (int *,int ,int,TYPE_8__*,TYPE_19__*,TYPE_6__*) ;
 scalar_t__ FUNC_30 (int) ;
 int FUNC_31 (TYPE_10__*) ;
 int FUNC_32 (TYPE_10__*,TYPE_11__*) ;
 int FUNC_33 (TYPE_10__*,TYPE_11__*) ;

int FUNC_34( sout_stream_t *VAR_5, sout_stream_id_sys_t *VAR_6,
                                    block_t *VAR_7, block_t **VAR_8 )
{
    *VAR_8 = ((void*)0);

    bool VAR_9 = VAR_7 && (VAR_7->i_flags & VAR_0);

    int VAR_10 = VAR_6->p_decoder->pf_decode( VAR_6->p_decoder, VAR_7 );
    if( VAR_10 != VAR_2 )
        return VAR_3;

    picture_t *VAR_11 = FUNC_17( VAR_6 );

    do
    {
        picture_t *VAR_12 = VAR_11;
        if( VAR_12 )
        {
            VAR_11 = VAR_12->p_next;
            VAR_12->p_next = ((void*)0);
        }

        if( VAR_6->b_error && VAR_12 )
        {
            FUNC_13( VAR_12 );
            continue;
        }

        if( VAR_12 && ( FUNC_30(!FUNC_25(VAR_6->encoder)) ||
              !FUNC_33( &VAR_6->fmt_input_video, &VAR_12->format ) ) )
        {
            if( !FUNC_25(VAR_6->encoder) )
            {
                FUNC_3( !VAR_6->p_f_chain && !VAR_6->p_uf_chain );
                FUNC_26( FUNC_2(VAR_5),
                                                   &VAR_6->p_decoder->fmt_out.video,
                                                   VAR_6->p_enccfg,
                                                   FUNC_8( VAR_6, VAR_12 ),
                                                   VAR_6->encoder );

            }
            else
            {
                FUNC_11( VAR_5, "aspect-ratio changed, reiniting. %i -> %i : %i -> %i.",
                            VAR_6->fmt_input_video.i_sar_num, VAR_12->format.i_sar_num,
                            VAR_6->fmt_input_video.i_sar_den, VAR_12->format.i_sar_den
                        );

                FUNC_27( &VAR_6->p_f_chain );
                FUNC_27( &VAR_6->p_conv_nonstatic );
                FUNC_27( &VAR_6->p_conv_static );
                FUNC_27( &VAR_6->p_uf_chain );
                FUNC_27( &VAR_6->p_final_conv_static );
                if( VAR_6->p_spu_blender )
                    FUNC_6( VAR_6->p_spu_blender );
                VAR_6->p_spu_blender = ((void*)0);

                FUNC_31( &VAR_6->fmt_input_video );
            }

            FUNC_32( &VAR_6->fmt_input_video, &VAR_12->format );

            if( !FUNC_28( VAR_6 ) )
            {
                es_format_t VAR_13;
                FUNC_5( &VAR_13, VAR_1, VAR_6->fmt_input_video.i_chroma );
                VAR_13.video = VAR_6->fmt_input_video;
                if( FUNC_29( VAR_5,
                                                  VAR_6->p_filterscfg,
                                                 (VAR_6->p_enccfg->video.fps.num > 0),
                                                 &VAR_13,
                                                 FUNC_21( VAR_6->encoder ),
                                                 VAR_6 ) != VAR_4 )
                    goto error;
            }


            if( !FUNC_25( VAR_6->encoder ) &&
                FUNC_24( VAR_6->encoder, VAR_6->p_enccfg ) != VAR_4 )
            {
                FUNC_10( VAR_5, "cannot find video encoder (module:%s fourcc:%4.4s). "
                                   "Take a look few lines earlier to see possible reason.",
                                   VAR_6->p_enccfg->psz_name ? VAR_6->p_enccfg->psz_name : "any",
                                   (char *)&VAR_6->p_enccfg->i_codec );
                goto error;
            }

            FUNC_9( VAR_5, "destination (after video filters) %ux%u",
                               FUNC_21( VAR_6->encoder )->video.i_width,
                               FUNC_21( VAR_6->encoder )->video.i_height );

            if( !VAR_6->downstream_id )
                VAR_6->downstream_id =
                    VAR_6->pf_transcode_downstream_add( VAR_5,
                                                     &VAR_6->p_decoder->fmt_in,
                                                     FUNC_22( VAR_6->encoder ) );
            if( !VAR_6->downstream_id )
            {
                FUNC_10( VAR_5, "cannot output transcoded stream %4.4s",
                                   (char *) &VAR_6->p_enccfg->i_codec );
                goto error;
            }
        }





        for ( picture_t *VAR_14 = VAR_12; ; VAR_14 = ((void*)0) )
        {

            filter_chain_t * VAR_15[] = { VAR_6->p_f_chain,
                                                  VAR_6->p_conv_nonstatic,
                                                  VAR_6->p_conv_static };
            for( size_t VAR_16=0; VAR_14 && VAR_16<FUNC_0(VAR_15); VAR_16++ )
            {
                if( !VAR_15[VAR_16] )
                    continue;
                VAR_14 = FUNC_7( VAR_15[VAR_16], VAR_14 );
            }

            if( !VAR_14 )
                break;

            for ( ;; VAR_14 = ((void*)0) )
            {

                filter_chain_t * VAR_17[] = { VAR_6->p_uf_chain,
                                                        VAR_6->p_final_conv_static };
                for( size_t VAR_18=0; VAR_14 && VAR_18<FUNC_0(VAR_17); VAR_18++ )
                {
                    if( !VAR_17[VAR_18] )
                        continue;
                    VAR_14 = FUNC_7( VAR_17[VAR_18], VAR_14 );
                }

                if( !VAR_14 )
                    break;


                VAR_14 = FUNC_1( VAR_5, VAR_6, VAR_14 );

                if( VAR_14 )
                {
                    block_t *VAR_19 = FUNC_20( VAR_6->encoder, VAR_14 );
                    if( VAR_19 )
                        FUNC_4( VAR_8, VAR_19 );
                    FUNC_13( VAR_14 );
                }
            }
        }

        if( VAR_9 )
        {
            FUNC_11( VAR_5, "Drain/restart on EOS" );
            if( FUNC_19( VAR_6->encoder, VAR_8 ) != VAR_4 )
                goto error;
            FUNC_18( VAR_6->encoder );

            FUNC_27( &VAR_6->p_f_chain );
            FUNC_27( &VAR_6->p_conv_nonstatic );
            FUNC_27( &VAR_6->p_conv_static );
            FUNC_27( &VAR_6->p_uf_chain );
            FUNC_27( &VAR_6->p_final_conv_static );
            FUNC_16( VAR_8, VAR_0 );
            VAR_9 = 0;
        }

        continue;
error:
        if( VAR_12 )
            FUNC_13( VAR_12 );
        VAR_6->b_error = 1;
    } while( VAR_11 );

    if( VAR_6->p_enccfg->video.threads.i_count >= 1 )
    {

        FUNC_4( VAR_8, FUNC_23( VAR_6->encoder ) );
    }


    if( FUNC_30( !VAR_6->b_error && VAR_7 == ((void*)0) ) && FUNC_25( VAR_6->encoder ) )
    {
        FUNC_9( VAR_5, "Flushing thread and waiting that");
        if( FUNC_19( VAR_6->encoder, VAR_8 ) == VAR_4 )
            FUNC_9( VAR_5, "Flushing done");
        else
            FUNC_12( VAR_5, "Flushing failed");
    }

    if( VAR_9 )
        FUNC_16( VAR_8, VAR_0 );

    return VAR_6->b_error ? VAR_3 : VAR_4;
}
