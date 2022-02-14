
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {TYPE_2__* p_sys; } ;
typedef TYPE_1__ stream_t ;
struct TYPE_6__ {scalar_t__ p_avc1394; } ;
typedef TYPE_2__ access_sys_t ;


 int FUNC_0 (scalar_t__,int) ;
 int FUNC_1 (TYPE_1__*,char*) ;

__attribute__((used)) static int FUNC_2( stream_t *VAR_0, int VAR_1 )
{
    access_sys_t *VAR_2 = VAR_0->p_sys;

    FUNC_1( VAR_0, "closing Digital Video control channel" );

    if ( VAR_2->p_avc1394 && VAR_1 >= 0 )
        FUNC_0( VAR_2->p_avc1394, VAR_1 );

    return 0;
}
