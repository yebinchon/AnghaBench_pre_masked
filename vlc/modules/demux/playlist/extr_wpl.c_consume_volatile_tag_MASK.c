
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int p_sys; } ;
typedef TYPE_1__ stream_t ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (char*) ;
 char* FUNC_3 (char const*) ;

__attribute__((used)) static int FUNC_4( stream_t* VAR_1, char const* VAR_2 )
{
    char* VAR_3 = FUNC_3( VAR_2 );
    int VAR_4 = VAR_0;

    if( FUNC_2( VAR_3 ) )
        VAR_4 = FUNC_0( VAR_1->p_sys, VAR_3 );

    FUNC_1( VAR_3 );
    return VAR_4;
}
