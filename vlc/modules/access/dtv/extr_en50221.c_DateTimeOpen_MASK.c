
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int date_time_t ;
struct TYPE_6__ {TYPE_1__* p_sessions; int obj; } ;
typedef TYPE_2__ cam_t ;
struct TYPE_5__ {int p_sys; int pf_close; int pf_manage; int pf_handle; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_2__*,unsigned int) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int ,char*,unsigned int) ;

__attribute__((used)) static void FUNC_3( cam_t * VAR_3, unsigned VAR_4 )
{
    FUNC_2( VAR_3->obj, "opening DateTime session (%u)", VAR_4 );

    VAR_3->p_sessions[VAR_4 - 1].pf_handle = VAR_1;
    VAR_3->p_sessions[VAR_4 - 1].pf_manage = VAR_2;
    VAR_3->p_sessions[VAR_4 - 1].pf_close = VAR_0;
    VAR_3->p_sessions[VAR_4 - 1].p_sys = FUNC_1( 1, sizeof(date_time_t) );

    FUNC_0( VAR_3, VAR_4 );
}
