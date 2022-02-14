
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {TYPE_2__* p_sys; } ;
typedef TYPE_1__ stream_t ;
struct TYPE_8__ {int b_ts_format; } ;
typedef TYPE_2__ access_sys_t ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;

__attribute__((used)) static bool FUNC_3( stream_t *VAR_0 )
{
    access_sys_t *VAR_1 = VAR_0->p_sys;


    VAR_1->b_ts_format = 1;
    if( !FUNC_2( VAR_0 ) )
    {
        VAR_1->b_ts_format = !VAR_1->b_ts_format;
        if( !FUNC_2( VAR_0 ) )
            return 0;
    }


    while( FUNC_2( VAR_0 ) )
        continue;


    FUNC_1( VAR_0 );


    FUNC_0( VAR_0 );

    return 1;
}
