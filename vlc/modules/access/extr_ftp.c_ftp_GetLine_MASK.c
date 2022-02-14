
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int vlc_object_t ;
struct TYPE_3__ {int cmd; } ;
typedef TYPE_1__ access_sys_t ;


 int FUNC_0 (int *,char*) ;
 char* FUNC_1 (int ) ;

__attribute__((used)) static char *FUNC_2( vlc_object_t *VAR_0, access_sys_t *VAR_1 )
{
    char *VAR_2 = FUNC_1( VAR_1->cmd );
    if( VAR_2 == ((void*)0) )
        FUNC_0( VAR_0, "response failure" );
    return VAR_2;
}
