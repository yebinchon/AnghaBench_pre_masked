
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int node; } ;
typedef TYPE_1__ vlc_ml_event_callback_t ;
struct TYPE_7__ {int lock; } ;
typedef TYPE_2__ vlc_medialibrary_t ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

void FUNC_3( vlc_medialibrary_t* VAR_0,
                                            vlc_ml_event_callback_t* VAR_1 )
{
    FUNC_2( &VAR_0->lock );
    FUNC_1( &VAR_1->node );
    FUNC_0( VAR_1 );
}
