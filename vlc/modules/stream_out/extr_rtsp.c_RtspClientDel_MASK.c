
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int sessionv; int sessionc; } ;
typedef TYPE_1__ rtsp_stream_t ;
struct TYPE_9__ {int trackc; struct TYPE_9__* trackv; } ;
typedef TYPE_2__ rtsp_session_t ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int ,int ,TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*) ;

__attribute__((used)) static
void FUNC_3( rtsp_stream_t *VAR_0, rtsp_session_t *VAR_1 )
{
    int VAR_2;
    FUNC_1( VAR_0->sessionc, VAR_0->sessionv, VAR_1 );

    for( VAR_2 = 0; VAR_2 < VAR_1->trackc; VAR_2++ )
        FUNC_0( &VAR_1->trackv[VAR_2] );

    FUNC_2( VAR_1->trackv );
    FUNC_2( VAR_1 );
}
