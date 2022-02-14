
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ i_start; scalar_t__ i_stop; } ;
typedef TYPE_1__ subpicture_t ;
struct decoder_owner {scalar_t__ i_preroll_end; int lock; TYPE_1__* p_vout; } ;
typedef int decoder_t ;


 int FUNC_0 (struct decoder_owner*,TYPE_1__*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (TYPE_1__*) ;
 struct decoder_owner* FUNC_2 (int *) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6( decoder_t *VAR_1, subpicture_t *VAR_2 )
{
    FUNC_1( VAR_2 );
    struct decoder_owner *VAR_3 = FUNC_2( VAR_1 );


    FUNC_1( VAR_3->p_vout );


    FUNC_4( &VAR_3->lock );
    if( VAR_2->i_start != VAR_0 &&
        VAR_2->i_start < VAR_3->i_preroll_end &&
        ( VAR_2->i_stop == VAR_0 || VAR_2->i_stop < VAR_3->i_preroll_end ) )
    {
        FUNC_5( &VAR_3->lock );
        FUNC_3( VAR_2 );
    }
    else
    {
        FUNC_5( &VAR_3->lock );
        FUNC_0( VAR_3, VAR_2 );
    }
}
