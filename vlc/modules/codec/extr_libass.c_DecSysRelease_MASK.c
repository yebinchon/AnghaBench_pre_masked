
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ i_refcount; scalar_t__ p_library; scalar_t__ p_renderer; scalar_t__ p_track; int lock; } ;
typedef TYPE_1__ decoder_sys_t ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static void FUNC_7( decoder_sys_t *VAR_0 )
{

    FUNC_5( &VAR_0->lock );
    VAR_0->i_refcount--;
    if( VAR_0->i_refcount > 0 )
    {
        FUNC_6( &VAR_0->lock );
        return;
    }
    FUNC_6( &VAR_0->lock );
    FUNC_4( &VAR_0->lock );

    if( VAR_0->p_track )
        FUNC_0( VAR_0->p_track );
    if( VAR_0->p_renderer )
        FUNC_2( VAR_0->p_renderer );
    if( VAR_0->p_library )
        FUNC_1( VAR_0->p_library );

    FUNC_3( VAR_0 );
}
