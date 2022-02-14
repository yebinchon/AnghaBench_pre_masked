
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int vlc_object_t ;
struct TYPE_5__ {TYPE_2__* p_sys; } ;
typedef TYPE_1__ intf_thread_t ;
struct TYPE_6__ {int thread; } ;
typedef TYPE_2__ intf_sys_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_2__* FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int *,int ,TYPE_1__*,int ) ;

__attribute__((used)) static int FUNC_3( vlc_object_t *VAR_4 )
{
    intf_thread_t *VAR_5 = (intf_thread_t*)VAR_4;
    intf_sys_t *VAR_6 = FUNC_0( sizeof( *VAR_6 ) );
    if( FUNC_1(VAR_6 == ((void*)0)) )
        return VAR_1;

    VAR_5->p_sys = VAR_6;

    if( FUNC_2( &VAR_6->thread, VAR_0, VAR_5, VAR_3 ) )
        return VAR_1;

    return VAR_2;
}
