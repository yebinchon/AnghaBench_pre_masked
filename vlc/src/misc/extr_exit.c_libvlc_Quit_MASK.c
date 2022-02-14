
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int lock; int opaque; int (* handler ) (int ) ;} ;
typedef TYPE_1__ vlc_exit_t ;
typedef int libvlc_int_t ;
struct TYPE_4__ {TYPE_1__ exit; } ;


 TYPE_2__* FUNC_0 (int *) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

void FUNC_5( libvlc_int_t *VAR_0 )
{
    vlc_exit_t *VAR_1 = &FUNC_0( VAR_0 )->exit;

    FUNC_1( VAR_0, "exiting" );
    FUNC_3( &VAR_1->lock );
    if( VAR_1->handler != ((void*)0) )
        VAR_1->handler( VAR_1->opaque );
    else
        FUNC_1( VAR_0, "no exit handler" );
    FUNC_4( &VAR_1->lock );
}
