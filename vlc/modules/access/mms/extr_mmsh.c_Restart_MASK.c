
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {TYPE_2__* p_sys; } ;
typedef TYPE_1__ stream_t ;
struct TYPE_10__ {int i_position; int i_start; } ;
typedef TYPE_2__ access_sys_t ;


 scalar_t__ FUNC_0 (TYPE_1__*,char**) ;
 scalar_t__ FUNC_1 (TYPE_1__*,int ) ;
 int FUNC_2 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (char*) ;
 int FUNC_4 (TYPE_1__*,char*) ;
 int FUNC_5 (TYPE_1__*,char*) ;

__attribute__((used)) static int FUNC_6( stream_t *VAR_2 )
{
    access_sys_t *VAR_3 = VAR_2->p_sys;
    char *VAR_4 = ((void*)0);

    FUNC_4( VAR_2, "Restart the stream" );
    VAR_3->i_start = VAR_3->i_position;


    FUNC_4( VAR_2, "stopping the stream" );
    FUNC_2( VAR_2 );


    FUNC_4( VAR_2, "describe the stream" );
    if( FUNC_0( VAR_2, &VAR_4 ) )
    {
        FUNC_5( VAR_2, "describe failed" );
        return VAR_0;
    }
    FUNC_3( VAR_4 );


    if( FUNC_1( VAR_2, 0 ) )
    {
        FUNC_5( VAR_2, "Start failed" );
        return VAR_0;
    }
    return VAR_1;
}
