
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ type; } ;
typedef TYPE_1__ vout_window_t ;
typedef int vlc_object_t ;
struct TYPE_7__ {int class_video; TYPE_1__* parent_window; int b_done; int wait; int lock; int * obj; } ;
typedef TYPE_2__ event_thread_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (char*) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (int ,int ,int ,void*) ;
 int FUNC_3 (int *,int) ;
 TYPE_2__* FUNC_4 (int) ;
 int FUNC_5 (int *,char*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

event_thread_t *FUNC_8( vlc_object_t *VAR_1, vout_window_t *VAR_2)
{
    if (VAR_2->type != VAR_0)
        return ((void*)0);







    FUNC_5( VAR_1, "creating Vout EventThread" );
    event_thread_t *VAR_3 = FUNC_4( sizeof(*VAR_3) );
    if( !VAR_3 )
        return ((void*)0);

    VAR_3->obj = VAR_1;
    FUNC_7( &VAR_3->lock );
    FUNC_6( &VAR_3->wait );
    FUNC_3( &VAR_3->b_done, 0 );

    VAR_3->parent_window = VAR_2;

    FUNC_2( VAR_3->class_video, FUNC_0(VAR_3->class_video),
                FUNC_1("VLC video output %p"), (void *)VAR_3 );
    return VAR_3;
}
