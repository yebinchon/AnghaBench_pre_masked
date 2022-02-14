
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int vlc_object_t ;
struct TYPE_7__ {TYPE_2__* p_sys; } ;
typedef TYPE_1__ filter_t ;
struct TYPE_8__ {TYPE_3__* p_opencv; } ;
typedef TYPE_2__ filter_sys_t ;
struct TYPE_9__ {int p_module; } ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_3__*,int ) ;
 int FUNC_3 (TYPE_3__*) ;

__attribute__((used)) static void FUNC_4( vlc_object_t *VAR_0 )
{
    filter_t* VAR_1 = (filter_t*)VAR_0;
    filter_sys_t *VAR_2 = VAR_1->p_sys;
    FUNC_0( VAR_1 );


    FUNC_2( VAR_2->p_opencv, VAR_2->p_opencv->p_module );
    FUNC_3(VAR_2->p_opencv);

    FUNC_1( VAR_2 );
}
