
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_7__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ users; int lock_manage; int lock; int wait_manage; int thread; struct TYPE_8__* p_vod; int p_module; int schedule; int i_schedule; int media; int i_media; } ;
typedef TYPE_1__ vlm_t ;
struct TYPE_9__ {TYPE_1__* p_vlm; } ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 TYPE_7__* FUNC_2 (int ) ;
 int FUNC_3 (TYPE_1__*,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ,int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (TYPE_1__*) ;
 int FUNC_11 (TYPE_1__*) ;
 int FUNC_12 (TYPE_1__*,int ) ;
 int VAR_2 ;

void FUNC_13( vlm_t *VAR_3 )
{


    FUNC_8( &VAR_2 );
    FUNC_1( VAR_3->users > 0 );
    if( --VAR_3->users == 0 )
        FUNC_1( FUNC_2(FUNC_11(VAR_3))->p_vlm == VAR_3 );
    else
        VAR_3 = ((void*)0);

    if( VAR_3 == ((void*)0) )
    {
        FUNC_9( &VAR_2 );
        return;
    }


    FUNC_8( &VAR_3->lock );
    FUNC_12( VAR_3, VAR_0 );
    FUNC_0( VAR_3->i_media, VAR_3->media );

    FUNC_12( VAR_3, VAR_1 );
    FUNC_0( VAR_3->i_schedule, VAR_3->schedule );
    FUNC_9( &VAR_3->lock );

    FUNC_4( VAR_3->thread );

    if( VAR_3->p_vod )
    {
        FUNC_3( VAR_3->p_vod, VAR_3->p_vod->p_module );
        FUNC_10(VAR_3->p_vod);
    }

    FUNC_2(FUNC_11(VAR_3))->p_vlm = ((void*)0);
    FUNC_9( &VAR_2 );

    FUNC_6( VAR_3->thread, ((void*)0) );

    FUNC_5( &VAR_3->wait_manage );
    FUNC_7( &VAR_3->lock );
    FUNC_7( &VAR_3->lock_manage );
    FUNC_10(VAR_3);
}
