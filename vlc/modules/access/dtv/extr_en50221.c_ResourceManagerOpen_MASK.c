
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* p_sessions; int obj; } ;
typedef TYPE_2__ cam_t ;
struct TYPE_5__ {int pf_handle; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*,unsigned int,int ,int *,int ) ;
 int VAR_1 ;
 int FUNC_1 (int ,char*,unsigned int) ;

__attribute__((used)) static void FUNC_2( cam_t * VAR_2, unsigned VAR_3 )
{
    FUNC_1( VAR_2->obj, "opening ResourceManager session (%u)",
             VAR_3 );
    VAR_2->p_sessions[VAR_3 - 1].pf_handle = VAR_1;
    FUNC_0( VAR_2, VAR_3, VAR_0, ((void*)0), 0 );
}
