
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int lock; int cookies; } ;
typedef TYPE_1__ vlc_http_cookie_jar_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int *) ;
 size_t FUNC_3 (int *) ;
 int FUNC_4 (int *,size_t) ;
 int FUNC_5 (int *) ;

void FUNC_6( vlc_http_cookie_jar_t * VAR_0 )
{
    if ( !VAR_0 )
        return;

    for( size_t VAR_1 = 0; VAR_1 < FUNC_3( &VAR_0->cookies ); VAR_1++ )
        FUNC_0( FUNC_4( &VAR_0->cookies, VAR_1 ) );

    FUNC_2( &VAR_0->cookies );
    FUNC_5( &VAR_0->lock );

    FUNC_1( VAR_0 );
}
