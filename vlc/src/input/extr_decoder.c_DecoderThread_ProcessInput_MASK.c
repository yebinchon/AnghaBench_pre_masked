
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


struct TYPE_15__ {scalar_t__ pf_get_cc; int fmt_out; int fmt_in; TYPE_2__* (* pf_packetize ) (TYPE_1__*,TYPE_2__**) ;} ;
struct decoder_owner {scalar_t__ error; TYPE_1__* p_packetizer; int * p_sout; int lock; int i_preroll_end; int reload; TYPE_1__ dec; } ;
typedef enum reload { ____Placeholder_reload } reload ;
typedef TYPE_1__ decoder_t ;
struct TYPE_16__ {scalar_t__ i_buffer; int i_flags; struct TYPE_16__* p_next; } ;
typedef TYPE_2__ block_t ;


 int VAR_0 ;
 int FUNC_0 (struct decoder_owner*,TYPE_2__*) ;
 int FUNC_1 (struct decoder_owner*,TYPE_2__*) ;
 scalar_t__ FUNC_2 (struct decoder_owner*,int,int *,int) ;
 int FUNC_3 (int *,TYPE_2__*) ;
 int FUNC_4 (struct decoder_owner*,TYPE_1__*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (TYPE_2__*) ;
 int FUNC_8 (int *,int *) ;
 int FUNC_9 (TYPE_1__*,char*) ;
 int FUNC_10 (TYPE_1__*,char*,char*) ;
 TYPE_2__* FUNC_11 (TYPE_1__*,TYPE_2__**) ;
 scalar_t__ FUNC_12 (int) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;

__attribute__((used)) static void FUNC_15( struct decoder_owner *VAR_5, block_t *VAR_6 )
{
    decoder_t *VAR_7 = &VAR_5->dec;

    if( VAR_5->error )
        goto error;





    enum reload VAR_8;
    if( ( VAR_8 = FUNC_5( &VAR_5->reload, VAR_3 ) ) )
    {
        FUNC_10( VAR_7, "Reloading the decoder module%s",
                  VAR_8 == VAR_2 ? " and the audio output" : "" );

        if( FUNC_2( VAR_5, 0, &VAR_7->fmt_in, VAR_8 ) != VAR_4 )
            goto error;
    }

    bool VAR_9 = VAR_5->p_packetizer != ((void*)0);
    if( VAR_6 )
    {
        if( VAR_6->i_buffer <= 0 )
            goto error;

        FUNC_13( &VAR_5->lock );
        FUNC_3( &VAR_5->i_preroll_end, VAR_6 );
        FUNC_14( &VAR_5->lock );
        if( FUNC_12( VAR_6->i_flags & VAR_0 ) )
        {

            VAR_9 = 0;
        }
    }
    if( VAR_9 )
    {
        block_t *VAR_10;
        block_t **VAR_11 = VAR_6 ? &VAR_6 : ((void*)0);
        decoder_t *VAR_12 = VAR_5->p_packetizer;

        while( (VAR_10 =
                VAR_12->pf_packetize( VAR_12, VAR_11 ) ) )
        {
            if( !FUNC_8( &VAR_7->fmt_in, &VAR_12->fmt_out ) )
            {
                FUNC_9( VAR_7, "restarting module due to input format change");


                FUNC_0( VAR_5, ((void*)0) );

                if( FUNC_2( VAR_5, 0, &VAR_12->fmt_out,
                                          VAR_1 ) != VAR_4 )
                {
                    FUNC_6( VAR_10 );
                    return;
                }
            }

            if( VAR_12->pf_get_cc )
                FUNC_4( VAR_5, VAR_12 );

            while( VAR_10 )
            {
                block_t *VAR_13 = VAR_10->p_next;
                VAR_10->p_next = ((void*)0);

                FUNC_0( VAR_5, VAR_10 );
                if( VAR_5->error )
                {
                    FUNC_6( VAR_13 );
                    return;
                }

                VAR_10 = VAR_13;
            }
        }

        if( !VAR_11 )
            FUNC_0( VAR_5, ((void*)0) );
    }
    else
        FUNC_0( VAR_5, VAR_6 );
    return;

error:
    if( VAR_6 )
        FUNC_7( VAR_6 );
}
