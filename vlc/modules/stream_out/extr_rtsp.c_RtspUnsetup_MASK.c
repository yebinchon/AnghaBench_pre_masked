
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ sessionc; scalar_t__ timeout; int lock; struct TYPE_5__* psz_path; int timer; int * sessionv; scalar_t__ host; scalar_t__ url; } ;
typedef TYPE_1__ rtsp_stream_t ;


 int FUNC_0 (TYPE_1__*,int ) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ) ;

void FUNC_6( rtsp_stream_t *VAR_0 )
{
    if( VAR_0->url )
        FUNC_3( VAR_0->url );

    if( VAR_0->host )
        FUNC_2( VAR_0->host );

    while( VAR_0->sessionc > 0 )
        FUNC_0( VAR_0, VAR_0->sessionv[0] );

    if (VAR_0->timeout != 0)
        FUNC_5(VAR_0->timer);

    FUNC_1( VAR_0->psz_path );
    FUNC_4( &VAR_0->lock );

    FUNC_1( VAR_0 );
}
