
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int lock; int cookies; } ;
typedef TYPE_1__ vlc_http_cookie_jar_t ;


 TYPE_1__* FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

vlc_http_cookie_jar_t * FUNC_4(void)
{
    vlc_http_cookie_jar_t * VAR_0 = FUNC_0( sizeof( vlc_http_cookie_jar_t ) );
    if ( FUNC_1(VAR_0 == ((void*)0)) )
        return ((void*)0);

    FUNC_2( &VAR_0->cookies );
    FUNC_3( &VAR_0->lock );

    return VAR_0;
}
