
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct decoder_owner {scalar_t__ i_preroll_end; int b_has_data; int reload; int * p_aout; int lock; int wait_acknowledge; scalar_t__ b_waiting; int dec; } ;
typedef int decoder_t ;
struct TYPE_5__ {scalar_t__ i_pts; } ;
typedef TYPE_1__ block_t ;
typedef int audio_output_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct decoder_owner*) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct decoder_owner*) ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,TYPE_1__*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (int *,char*) ;
 int FUNC_8 (int *,char*) ;
 scalar_t__ FUNC_9 (int) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;

__attribute__((used)) static int FUNC_13( struct decoder_owner *VAR_7, block_t *VAR_8 )
{
    decoder_t *VAR_9 = &VAR_7->dec;

    FUNC_4( VAR_8 != ((void*)0) );

    if( VAR_8->i_pts == VAR_6 )
    {
        FUNC_8( VAR_9, "non-dated audio buffer received" );
        FUNC_6( VAR_8 );
        return VAR_4;
    }

    FUNC_11( &VAR_7->lock );
    bool VAR_10 = VAR_7->i_preroll_end != VAR_2;
    if( VAR_10 && VAR_7->i_preroll_end > VAR_8->i_pts )
    {
        FUNC_12( &VAR_7->lock );
        FUNC_6( VAR_8 );
        return VAR_5;
    }

    VAR_7->i_preroll_end = VAR_2;
    FUNC_12( &VAR_7->lock );

    if( FUNC_9(VAR_10) )
    {
        FUNC_7( VAR_9, "end of audio preroll" );

        if( VAR_7->p_aout )
            FUNC_2( VAR_7->p_aout );
    }



    FUNC_11( &VAR_7->lock );
    if( VAR_7->b_waiting )
    {
        VAR_7->b_has_data = 1;
        FUNC_10( &VAR_7->wait_acknowledge );
    }


    FUNC_0( VAR_7 );
    FUNC_12( &VAR_7->lock );

    audio_output_t *VAR_11 = VAR_7->p_aout;

    if( VAR_11 == ((void*)0) )
    {
        FUNC_7( VAR_9, "discarded audio buffer" );
        FUNC_6( VAR_8 );
        return VAR_4;
    }

    int VAR_12 = FUNC_3( VAR_11, VAR_8 );
    if( VAR_12 == VAR_0 )
    {

        FUNC_1( VAR_7 );
    }
    else if( VAR_12 == VAR_1 )
    {



        FUNC_5( &VAR_7->reload, VAR_3 );
    }
    return VAR_5;
}
