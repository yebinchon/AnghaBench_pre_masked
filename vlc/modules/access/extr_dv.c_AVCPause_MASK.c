
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {TYPE_2__* p_sys; } ;
typedef TYPE_1__ stream_t ;
struct TYPE_5__ {scalar_t__ p_avc1394; } ;
typedef TYPE_2__ access_sys_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__,int) ;
 int FUNC_1 (scalar_t__,int) ;
 int FUNC_2 (scalar_t__,int) ;

__attribute__((used)) static int FUNC_3( stream_t *VAR_1, int VAR_2 )
{
    access_sys_t *VAR_3 = VAR_1->p_sys;

    if( VAR_3->p_avc1394 && VAR_2 >= 0 )
    {
        if( !FUNC_1( VAR_3->p_avc1394, VAR_2 ) &&
            ( FUNC_0( VAR_3->p_avc1394, VAR_2 ) != VAR_0 ) )
                FUNC_2( VAR_3->p_avc1394, VAR_2 );
    }
    return 0;
}
