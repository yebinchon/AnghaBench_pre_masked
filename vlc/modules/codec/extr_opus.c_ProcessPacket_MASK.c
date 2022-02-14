
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int vlc_tick_t ;
typedef int ogg_packet ;
struct TYPE_11__ {TYPE_2__* p_sys; } ;
typedef TYPE_1__ decoder_t ;
struct TYPE_12__ {int end_date; } ;
typedef TYPE_2__ decoder_sys_t ;
struct TYPE_13__ {int i_flags; scalar_t__ i_pts; int i_nb_samples; int i_length; } ;
typedef TYPE_3__ block_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_3__* FUNC_0 (TYPE_1__*,int *,int ,int ) ;
 int FUNC_1 (TYPE_1__*) ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (TYPE_3__*) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *,scalar_t__) ;

__attribute__((used)) static block_t *FUNC_5( decoder_t *VAR_4, ogg_packet *VAR_5,
                               block_t *VAR_6 )
{
    decoder_sys_t *VAR_7 = VAR_4->p_sys;

    if( VAR_6->i_flags & (VAR_0|VAR_1) )
    {
        FUNC_1( VAR_4 );
        if( VAR_6->i_flags & VAR_0 )
        {
            FUNC_2( VAR_6 );
            return ((void*)0);
        }
    }


    if( VAR_6->i_pts != VAR_3 &&
        VAR_6->i_pts != FUNC_3( &VAR_7->end_date ) )
    {
        FUNC_4( &VAR_7->end_date, VAR_6->i_pts );
    }

    if( FUNC_3( &VAR_7->end_date ) == VAR_3 )
    {

        FUNC_2( VAR_6 );
        return ((void*)0);
    }


    vlc_tick_t VAR_8 = (VAR_6->i_flags & VAR_2) ?
                             VAR_6->i_length : 0;

    block_t *VAR_9 = FUNC_0( VAR_4, VAR_5,
                                           VAR_6->i_nb_samples,
                                           VAR_8 );

    FUNC_2( VAR_6 );
    return VAR_9;
}
