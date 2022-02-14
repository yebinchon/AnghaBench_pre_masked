
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int vlc_object_t ;
struct TYPE_5__ {int logger; } ;
struct TYPE_6__ {TYPE_1__ obj; TYPE_3__* p_sys; } ;
typedef TYPE_2__ intf_thread_t ;
struct TYPE_7__ {struct TYPE_7__* psz_filename; int dtable; int L; int thread; } ;
typedef TYPE_3__ intf_sys_t ;


 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

void FUNC_6( vlc_object_t *VAR_0 )
{
    intf_thread_t *VAR_1 = (intf_thread_t*)VAR_0;
    intf_sys_t *VAR_2 = VAR_1->p_sys;

    FUNC_5( &VAR_2->dtable );
    FUNC_3( VAR_2->thread, ((void*)0) );

    FUNC_1( VAR_2->L );
    FUNC_4( &VAR_2->dtable );
    FUNC_0( VAR_2->psz_filename );
    FUNC_0( VAR_2 );
    FUNC_2( VAR_1->obj.logger );
}
