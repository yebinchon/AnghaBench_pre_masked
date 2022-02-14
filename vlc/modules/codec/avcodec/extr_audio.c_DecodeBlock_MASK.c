
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_39__ TYPE_8__ ;
typedef struct TYPE_38__ TYPE_7__ ;
typedef struct TYPE_37__ TYPE_6__ ;
typedef struct TYPE_36__ TYPE_5__ ;
typedef struct TYPE_35__ TYPE_4__ ;
typedef struct TYPE_34__ TYPE_3__ ;
typedef struct TYPE_33__ TYPE_2__ ;
typedef struct TYPE_32__ TYPE_1__ ;


struct TYPE_33__ {unsigned int i_rate; int i_bytes_per_frame; } ;
struct TYPE_34__ {TYPE_2__ audio; } ;
struct TYPE_32__ {scalar_t__ i_extra; } ;
struct TYPE_35__ {TYPE_3__ fmt_out; TYPE_1__ fmt_in; TYPE_5__* p_sys; } ;
typedef TYPE_4__ decoder_t ;
struct TYPE_36__ {scalar_t__ i_reject_count; TYPE_8__* p_context; int end_date; } ;
typedef TYPE_5__ decoder_sys_t ;
struct TYPE_37__ {int i_flags; scalar_t__ i_pts; size_t i_buffer; int i_nb_samples; scalar_t__ i_length; int * p_buffer; } ;
typedef TYPE_6__ block_t ;
struct TYPE_39__ {scalar_t__ channels; scalar_t__ sample_rate; int extradata_size; } ;
struct TYPE_38__ {size_t size; int * data; } ;
typedef TYPE_7__ AVPacket ;
typedef int AVFrame ;
typedef TYPE_8__ AVCodecContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_6__* FUNC_1 (TYPE_4__*,int *) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 size_t VAR_8 ;
 int FUNC_2 (TYPE_4__*) ;
 scalar_t__ VAR_9 ;
 int FUNC_3 (TYPE_4__*,TYPE_8__*) ;
 int FUNC_4 (TYPE_4__*) ;
 int FUNC_5 (TYPE_4__*,int) ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 int FUNC_6 (int) ;
 int * FUNC_7 () ;
 int FUNC_8 (int **) ;
 int FUNC_9 (TYPE_7__*) ;
 int FUNC_10 (int,char*,int) ;
 int FUNC_11 (TYPE_8__*) ;
 int FUNC_12 (TYPE_8__*) ;
 int FUNC_13 (TYPE_8__*,int *) ;
 int FUNC_14 (TYPE_8__*,TYPE_7__*) ;
 TYPE_6__* FUNC_15 (TYPE_6__*,int ,size_t) ;
 int FUNC_16 (TYPE_6__*) ;
 scalar_t__ FUNC_17 (int *) ;
 scalar_t__ FUNC_18 (int *,int) ;
 int FUNC_19 (int *,scalar_t__,int) ;
 int FUNC_20 (int *,scalar_t__) ;
 int FUNC_21 (TYPE_4__*,TYPE_6__*) ;
 scalar_t__ FUNC_22 (TYPE_4__*) ;
 int FUNC_23 (int *,int ,size_t) ;
 int FUNC_24 (TYPE_4__*,char*,char*) ;
 int FUNC_25 (TYPE_4__*,char*,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_26 (int ) ;

__attribute__((used)) static int FUNC_27( decoder_t *VAR_13, block_t **VAR_14 )
{
    decoder_sys_t *VAR_15 = VAR_13->p_sys;
    AVCodecContext *VAR_16 = VAR_15->p_context;
    AVFrame *VAR_17 = ((void*)0);
    block_t *VAR_18 = ((void*)0);
    bool VAR_19 = 0;

    if( !VAR_16->extradata_size && VAR_13->fmt_in.i_extra
     && !FUNC_12( VAR_16 ) )
    {
        FUNC_3( VAR_13, VAR_16 );
        FUNC_4( VAR_13 );
    }

    if( !FUNC_12( VAR_16 ) )
    {
        if( VAR_14 )
            VAR_18 = *VAR_14;
        goto drop;
    }

    if( VAR_14 == ((void*)0) )
    {

        (void) FUNC_14( VAR_16, ((void*)0) );
    }
    else
    {
        VAR_18 = *VAR_14;
    }

    if( VAR_18 )
    {
        if( VAR_18->i_flags & VAR_2 )
        {
            FUNC_2( VAR_13 );
            goto drop;
        }

        if( VAR_18->i_flags & VAR_3 )
        {
            FUNC_20( &VAR_15->end_date, VAR_12 );
        }


        if( VAR_18->i_pts == VAR_12 &&
            FUNC_17( &VAR_15->end_date ) == VAR_12 )
            goto drop;

        if( VAR_18->i_buffer <= 0 )
            goto drop;

        if( (VAR_18->i_flags & VAR_4) == 0 )
        {
            *VAR_14 = VAR_18 = FUNC_15( VAR_18, 0, VAR_18->i_buffer + VAR_8 );
            if( !VAR_18 )
                goto end;
            VAR_18->i_buffer -= VAR_8;
            FUNC_23( &VAR_18->p_buffer[VAR_18->i_buffer], 0, VAR_8 );

            VAR_18->i_flags |= VAR_4;
        }
    }

    VAR_17 = FUNC_7();
    if (FUNC_26(VAR_17 == ((void*)0)))
        goto end;

    for( int VAR_20 = 0; VAR_20 == 0; )
    {

        if( VAR_18 )
        {
            AVPacket VAR_21;
            FUNC_9( &VAR_21 );
            VAR_21.data = VAR_18->p_buffer;
            VAR_21.size = VAR_18->i_buffer;
            VAR_20 = FUNC_14( VAR_16, &VAR_21 );
            if( VAR_20 == 0 )
            {


                if( VAR_18->i_pts > FUNC_17( &VAR_15->end_date ) )
                {
                    FUNC_20( &VAR_15->end_date, VAR_18->i_pts );
                }

                FUNC_16( VAR_18 );
                *VAR_14 = VAR_18 = ((void*)0);
            }
            else if ( VAR_20 != FUNC_0(VAR_5) )
            {
                if( VAR_20 == FUNC_0(VAR_7) || VAR_20 == FUNC_0(VAR_6) )
                    goto end;
                else
                {
                    char VAR_22[VAR_1];
                    if( !FUNC_10( VAR_20, VAR_22, VAR_1 ) )
                        FUNC_24( VAR_13, "%s", VAR_22 );
                    goto drop;
                }
            }
        }


        VAR_20 = FUNC_13( VAR_16, VAR_17 );
        if( VAR_20 == 0 )
        {

            if( VAR_16->channels <= 0 || VAR_16->channels > VAR_9
             || VAR_16->sample_rate <= 0 )
            {
                FUNC_25( VAR_13, "invalid audio properties channels count %d, sample rate %d",
                          VAR_16->channels, VAR_16->sample_rate );
                goto drop;
            }
            else if( VAR_13->fmt_out.audio.i_rate != (unsigned int)VAR_16->sample_rate )
            {
                FUNC_19( &VAR_15->end_date, VAR_16->sample_rate, 1 );
            }

            FUNC_5( VAR_13, 1 );
            if( FUNC_22( VAR_13 ) )
                goto drop;

            block_t *VAR_23 = FUNC_1( VAR_13, VAR_17 );
            if( VAR_23 )
            {

                if( VAR_15->i_reject_count > 0 )
                {
                    FUNC_23( VAR_23->p_buffer, 0, VAR_23->i_buffer );
                    VAR_15->i_reject_count--;
                }
                VAR_23->i_buffer = VAR_23->i_nb_samples
                                      * VAR_13->fmt_out.audio.i_bytes_per_frame;
                VAR_23->i_pts = FUNC_17( &VAR_15->end_date );
                VAR_23->i_length = FUNC_18( &VAR_15->end_date,
                                                      VAR_23->i_nb_samples ) - VAR_23->i_pts;

                FUNC_21( VAR_13, VAR_23 );
            }


            VAR_17 = FUNC_7();
            if (FUNC_26(VAR_17 == ((void*)0)))
                break;
        }
        else
        {

            if( VAR_20 == VAR_0 )
                FUNC_11( VAR_15->p_context );
            FUNC_8( &VAR_17 );
        }
    };

    return VAR_11;

end:
    VAR_19 = 1;
drop:
    if( VAR_14 )
    {
        FUNC_6( *VAR_14 == VAR_18 );
        *VAR_14 = ((void*)0);
    }
    if( VAR_18 != ((void*)0) )
        FUNC_16(VAR_18);
    if( VAR_17 != ((void*)0) )
        FUNC_8( &VAR_17 );

    return (VAR_19) ? VAR_10 : VAR_11;
}
