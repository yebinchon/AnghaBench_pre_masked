
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int s; } ;
typedef TYPE_1__ stream_t ;
typedef int lua_State ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,char*) ;
 char* FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5( lua_State *VAR_0 )
{
    stream_t *VAR_1 = (stream_t *)FUNC_4(VAR_0);
    char *VAR_2 = FUNC_3(VAR_1->s);

    if (VAR_2 != ((void*)0))
    {
        FUNC_2(VAR_0, VAR_2);
        FUNC_0(VAR_2);
    }
    else
        FUNC_1( VAR_0 );

    return 1;
}
