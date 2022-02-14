
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct vlc_ml_event_callback_t {int node; void* p_data; int pf_cb; } ;
typedef struct vlc_ml_event_callback_t vlc_ml_event_callback_t ;
typedef int vlc_ml_callback_t ;
struct TYPE_3__ {int lock; int cbs; } ;
typedef TYPE_1__ vlc_medialibrary_t ;


 struct vlc_ml_event_callback_t* FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

vlc_ml_event_callback_t*
FUNC_5( vlc_medialibrary_t* VAR_0, vlc_ml_callback_t VAR_1,
                                void* VAR_2 )
{
    struct vlc_ml_event_callback_t* VAR_3 = FUNC_0( sizeof( *VAR_3 ) );
    if ( FUNC_1( VAR_3 == ((void*)0) ) )
        return ((void*)0);
    VAR_3->pf_cb = VAR_1;
    VAR_3->p_data = VAR_2;
    FUNC_3( &VAR_0->lock );
    FUNC_2( &VAR_3->node, &VAR_0->cbs );
    FUNC_4( &VAR_0->lock );
    return VAR_3;
}
