
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct raw1394_portinfo {int dummy; } ;
struct TYPE_4__ {TYPE_2__* p_sys; } ;
typedef TYPE_1__ stream_t ;
typedef int * raw1394handle_t ;
struct TYPE_5__ {int * p_avc1394; } ;
typedef TYPE_2__ access_sys_t ;


 int VAR_0 ;
 int FUNC_0 (int *,struct raw1394_portinfo*,int) ;
 int * FUNC_1 () ;
 int FUNC_2 (int *,int ) ;
 scalar_t__ FUNC_3 (int *,int) ;

__attribute__((used)) static raw1394handle_t FUNC_4( stream_t *VAR_1, int VAR_2 )
{
    access_sys_t *VAR_3 = VAR_1->p_sys;
    struct raw1394_portinfo VAR_4[ 16 ];
    int VAR_5;

    VAR_3->p_avc1394 = FUNC_1();
    if( !VAR_3->p_avc1394 )
        return ((void*)0);

    VAR_5 = FUNC_0( VAR_3->p_avc1394, VAR_4, 16 );
    if( VAR_5 < -1 )
        return ((void*)0);
    if( FUNC_3( VAR_3->p_avc1394, VAR_2 ) < 0 )
        return ((void*)0);

    FUNC_2( VAR_3->p_avc1394, VAR_0 );

    return VAR_3->p_avc1394;
}
