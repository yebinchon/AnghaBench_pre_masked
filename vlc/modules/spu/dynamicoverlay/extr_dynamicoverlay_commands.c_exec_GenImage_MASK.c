
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ ssize_t ;
typedef int overlay_t ;
struct TYPE_8__ {TYPE_2__* p_sys; } ;
typedef TYPE_1__ filter_t ;
struct TYPE_9__ {int overlays; } ;
typedef TYPE_2__ filter_sys_t ;
struct TYPE_10__ {scalar_t__ i_id; } ;
typedef TYPE_3__ commandparams_t ;


 scalar_t__ FUNC_0 (int *,int *) ;
 int * FUNC_1 () ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (TYPE_3__ const*) ;

__attribute__((used)) static int FUNC_3( filter_t *VAR_2,
                          const commandparams_t *VAR_3,
                          commandparams_t *VAR_4 )
{
    FUNC_2(VAR_3);
    filter_sys_t *VAR_5 = VAR_2->p_sys;

    overlay_t *VAR_6 = FUNC_1();
    if( VAR_6 == ((void*)0) )
        return VAR_0;

    ssize_t VAR_7 = FUNC_0( &VAR_5->overlays, VAR_6 );
    if( VAR_7 < 0 )
        return VAR_7;

    VAR_4->i_id = VAR_7;
    return VAR_1;
}
