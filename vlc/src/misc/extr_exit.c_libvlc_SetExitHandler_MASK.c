
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {void (* handler ) (void*) ;int lock; void* opaque; } ;
typedef TYPE_1__ vlc_exit_t ;
typedef int libvlc_int_t ;
struct TYPE_4__ {TYPE_1__ exit; } ;


 TYPE_2__* FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

void FUNC_3( libvlc_int_t *VAR_0, void (*VAR_1) (void *),
                            void *VAR_2 )
{
    vlc_exit_t *VAR_3 = &FUNC_0( VAR_0 )->exit;

    FUNC_1( &VAR_3->lock );
    VAR_3->handler = VAR_1;
    VAR_3->opaque = VAR_2;
    FUNC_2( &VAR_3->lock );
}
