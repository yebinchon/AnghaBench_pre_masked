
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* p_sessions; int obj; } ;
typedef TYPE_2__ cam_t ;
struct TYPE_4__ {int p_sys; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,int) ;

__attribute__((used)) static void FUNC_2( cam_t * VAR_0, int VAR_1 )
{
    FUNC_1( VAR_0->obj, "closing ConditionalAccess session (%d)",
             VAR_1 );
    FUNC_0( VAR_0->p_sessions[VAR_1 - 1].p_sys );
}
