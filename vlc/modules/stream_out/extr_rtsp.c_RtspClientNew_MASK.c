
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int sessionv; int sessionc; } ;
typedef TYPE_1__ rtsp_stream_t ;
struct TYPE_8__ {int * trackv; scalar_t__ trackc; int id; TYPE_1__* stream; } ;
typedef TYPE_2__ rtsp_session_t ;


 int FUNC_0 (int ,int ,TYPE_2__*) ;
 TYPE_2__* FUNC_1 (int) ;
 int FUNC_2 (int *,int) ;

__attribute__((used)) static
rtsp_session_t *FUNC_3( rtsp_stream_t *VAR_0 )
{
    rtsp_session_t *VAR_1 = FUNC_1( sizeof( *VAR_1 ) );
    if( VAR_1 == ((void*)0) )
        return ((void*)0);

    VAR_1->stream = VAR_0;
    FUNC_2 (&VAR_1->id, sizeof (VAR_1->id));
    VAR_1->trackc = 0;
    VAR_1->trackv = ((void*)0);

    FUNC_0( VAR_0->sessionc, VAR_0->sessionv, VAR_1 );

    return VAR_1;
}
