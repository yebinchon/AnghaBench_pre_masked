
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ i_last; scalar_t__ i_interval; } ;
typedef TYPE_2__ date_time_t ;
struct TYPE_8__ {TYPE_1__* p_sessions; } ;
typedef TYPE_3__ cam_t ;
struct TYPE_6__ {scalar_t__ p_sys; } ;


 int FUNC_0 (TYPE_3__*,int) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 () ;

__attribute__((used)) static void FUNC_3( cam_t * VAR_0, int VAR_1 )
{
    date_time_t *VAR_2 =
        (date_time_t *)VAR_0->p_sessions[VAR_1 - 1].p_sys;

    if ( VAR_2->i_interval
          && FUNC_2() > VAR_2->i_last + FUNC_1( VAR_2->i_interval ) )
    {
        FUNC_0( VAR_0, VAR_1 );
    }
}
