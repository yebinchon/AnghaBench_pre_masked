
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int vout_thread_t ;
struct decoder_owner {scalar_t__ i_preroll_end; int b_first; int b_has_data; int paused; scalar_t__ frames_countdown; int p_fifo; int lock; scalar_t__ b_waiting; int wait_acknowledge; int * p_vout; int dec; } ;
struct TYPE_5__ {scalar_t__ date; int b_force; scalar_t__ b_still; } ;
typedef TYPE_1__ picture_t ;
typedef int decoder_t ;


 int FUNC_0 (struct decoder_owner*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (int *,char*) ;
 int FUNC_4 (int *,char*) ;
 int FUNC_5 (TYPE_1__*) ;
 scalar_t__ FUNC_6 (int) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *,scalar_t__) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *,TYPE_1__*) ;

__attribute__((used)) static int FUNC_15( struct decoder_owner *VAR_4, picture_t *VAR_5 )
{
    decoder_t *VAR_6 = &VAR_4->dec;
    vout_thread_t *VAR_7 = VAR_4->p_vout;

    if( VAR_5->date == VAR_3 )

    {
        FUNC_4( VAR_6, "non-dated video buffer received" );
        FUNC_5( VAR_5 );
        return VAR_1;
    }

    FUNC_10( &VAR_4->lock );
    bool VAR_8 = VAR_4->i_preroll_end != VAR_0;
    if( VAR_8 && VAR_4->i_preroll_end > VAR_5->date )
    {
        FUNC_11( &VAR_4->lock );
        FUNC_5( VAR_5 );
        return VAR_2;
    }

    VAR_4->i_preroll_end = VAR_0;

    if( FUNC_6(VAR_8) )
    {
        FUNC_3( VAR_6, "end of video preroll" );

        if( VAR_7 )
            FUNC_13( VAR_7 );
    }

    if( VAR_4->b_waiting && !VAR_4->b_first )
    {
        VAR_4->b_has_data = 1;
        FUNC_7( &VAR_4->wait_acknowledge );
    }

    FUNC_0( VAR_4 );

    if( VAR_4->b_waiting )
    {
        FUNC_1( VAR_4->b_first );
        FUNC_3( VAR_6, "Received first picture" );
        VAR_4->b_first = 0;
        VAR_5->b_force = 1;
    }

    FUNC_11( &VAR_4->lock );



    FUNC_8( VAR_4->p_fifo );
    if( FUNC_6(VAR_4->paused) && FUNC_2(VAR_4->frames_countdown > 0) )
        VAR_4->frames_countdown--;
    FUNC_9( VAR_4->p_fifo );


    if( VAR_7 == ((void*)0) )
    {
        FUNC_5( VAR_5 );
        return VAR_1;
    }

    if( VAR_5->b_still )
    {

        FUNC_12( VAR_7, VAR_5->date );
    }
    FUNC_14( VAR_7, VAR_5 );

    return VAR_2;
}
