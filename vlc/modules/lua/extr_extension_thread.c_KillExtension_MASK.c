
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int extensions_manager_t ;
struct TYPE_5__ {TYPE_1__* p_sys; } ;
typedef TYPE_2__ extension_t ;
struct TYPE_4__ {int b_activated; int b_exiting; int wait; int dtable; } ;


 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

void FUNC_3( extensions_manager_t *VAR_0, extension_t *VAR_1 )
{
    FUNC_0( VAR_0, "Killing extension now" );
    FUNC_2( &VAR_1->p_sys->dtable );
    VAR_1->p_sys->b_activated = 0;
    VAR_1->p_sys->b_exiting = 1;
    FUNC_1( &VAR_1->p_sys->wait );
}
