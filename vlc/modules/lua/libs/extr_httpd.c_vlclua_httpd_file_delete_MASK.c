
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int lua_State ;
typedef int httpd_file_t ;
struct TYPE_4__ {int ref; int L; } ;
typedef TYPE_1__ httpd_file_sys_t ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 TYPE_1__* FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *,int,char*) ;
 int FUNC_3 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_4( lua_State *VAR_1 )
{
    httpd_file_t **VAR_2 = (httpd_file_t**)FUNC_2( VAR_1, 1, "httpd_file" );
    httpd_file_sys_t *VAR_3 = FUNC_1( *VAR_2 );
    FUNC_3( VAR_3->L, VAR_0, VAR_3->ref );
    FUNC_0( VAR_3 );
    return 0;
}
