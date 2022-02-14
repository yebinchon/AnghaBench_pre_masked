
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int vlc_object_t ;
struct TYPE_7__ {scalar_t__ es; int fmt; scalar_t__ b_configured; } ;
typedef TYPE_2__ ps_track_t ;
struct TYPE_8__ {int out; TYPE_4__* p_sys; } ;
typedef TYPE_3__ demux_t ;
struct TYPE_6__ {int lock; int timer; scalar_t__ b_created; } ;
struct TYPE_9__ {int i_title; int dvdnav; int * title; TYPE_2__* tk; int event_lock; TYPE_1__ still; } ;
typedef TYPE_4__ demux_sys_t ;


 int VAR_0 ;
 int FUNC_0 (int,int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,scalar_t__) ;
 int FUNC_4 (TYPE_4__*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static void FUNC_8( vlc_object_t *VAR_1 )
{
    demux_t *VAR_2 = (demux_t*)VAR_1;
    demux_sys_t *VAR_3 = VAR_2->p_sys;


    if( VAR_3->still.b_created )
        FUNC_7( VAR_3->still.timer );
    FUNC_6( &VAR_3->still.lock );
    FUNC_6( &VAR_3->event_lock );

    for( int VAR_4 = 0; VAR_4 < VAR_0; VAR_4++ )
    {
        ps_track_t *VAR_5 = &VAR_3->tk[VAR_4];
        if( VAR_5->b_configured )
        {
            FUNC_2( &VAR_5->fmt );
            if( VAR_5->es ) FUNC_3( VAR_2->out, VAR_5->es );
        }
    }


    for( int VAR_6 = 0; VAR_6 < VAR_3->i_title; VAR_6++ )
        FUNC_5( VAR_3->title[VAR_6] );
    FUNC_0( VAR_3->i_title, VAR_3->title );

    FUNC_1( VAR_3->dvdnav );
    FUNC_4( VAR_3 );
}
