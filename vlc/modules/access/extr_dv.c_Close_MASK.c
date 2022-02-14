
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int vlc_object_t ;
struct TYPE_5__ {TYPE_2__* p_sys; } ;
typedef TYPE_1__ stream_t ;
struct TYPE_6__ {int lock; scalar_t__ p_raw1394; int * p_frame; TYPE_3__* p_ev; } ;
typedef TYPE_2__ access_sys_t ;
struct TYPE_7__ {int ** pp_last; int * p_frame; int lock; int thread; } ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static void FUNC_8( vlc_object_t *VAR_0 )
{
    stream_t *VAR_1 = (stream_t*)VAR_0;
    access_sys_t *VAR_2 = VAR_1->p_sys;

    if( VAR_2->p_ev )
    {

        FUNC_5( VAR_2->p_ev->thread );

        if( VAR_2->p_raw1394 )
            FUNC_4( VAR_2->p_raw1394 );

        FUNC_6( VAR_2->p_ev->thread, ((void*)0) );
        FUNC_7( &VAR_2->p_ev->lock );


        if( VAR_2->p_ev->p_frame )
        {
            FUNC_1( VAR_2->p_ev->p_frame );
            VAR_2->p_ev->p_frame = ((void*)0);
            VAR_2->p_ev->pp_last = &VAR_2->p_frame;
        }
        FUNC_2( VAR_2->p_ev );
    }

    if( VAR_2->p_frame )
        FUNC_1( VAR_2->p_frame );
    if( VAR_2->p_raw1394 )
        FUNC_3( VAR_2->p_raw1394 );

    FUNC_0( VAR_1 );

    FUNC_7( &VAR_2->lock );
}
