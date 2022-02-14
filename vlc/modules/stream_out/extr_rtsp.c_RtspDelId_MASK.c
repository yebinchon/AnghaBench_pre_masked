
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {int sessionc; int lock; TYPE_4__** sessionv; } ;
typedef TYPE_1__ rtsp_stream_t ;
struct TYPE_11__ {int url; } ;
typedef TYPE_2__ rtsp_stream_id_t ;
struct TYPE_12__ {TYPE_2__* id; } ;
typedef TYPE_3__ rtsp_strack_t ;
struct TYPE_13__ {int trackc; TYPE_3__* trackv; } ;
typedef TYPE_4__ rtsp_session_t ;


 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (int,TYPE_3__*,int) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

void FUNC_6( rtsp_stream_t *VAR_0, rtsp_stream_id_t *VAR_1 )
{
    FUNC_3( VAR_1->url );

    FUNC_4( &VAR_0->lock );
    for( int VAR_2 = 0; VAR_2 < VAR_0->sessionc; VAR_2++ )
    {
        rtsp_session_t *VAR_3 = VAR_0->sessionv[VAR_2];

        for( int VAR_4 = 0; VAR_4 < VAR_3->trackc; VAR_4++ )
        {
            if( VAR_3->trackv[VAR_4].id == VAR_1 )
            {
                rtsp_strack_t *VAR_5 = VAR_3->trackv + VAR_4;
                FUNC_0( VAR_5 );
                FUNC_1(VAR_3->trackc, VAR_3->trackv, VAR_4);
            }
        }
    }

    FUNC_5( &VAR_0->lock );
    FUNC_2( VAR_1 );
}
