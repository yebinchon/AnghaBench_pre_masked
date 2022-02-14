
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_3__* p_sys; } ;
typedef TYPE_2__ stream_t ;
struct TYPE_5__ {int qqic; } ;
struct TYPE_7__ {TYPE_1__ relay_igmp_query; int updateTimer; int relayDisco; } ;
typedef TYPE_3__ access_sys_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_2__*,int ,int) ;
 int FUNC_2 (int ,int,int ,int ) ;

__attribute__((used)) static void FUNC_3( void *VAR_0 )
{
    stream_t *VAR_1 = (stream_t*) VAR_0;
    access_sys_t *VAR_2 = VAR_1->p_sys;

    FUNC_1( VAR_1, VAR_2->relayDisco, 0 );



    FUNC_2( VAR_2->updateTimer, 0,
                        FUNC_0( VAR_2->relay_igmp_query.qqic ), 0 );
}
