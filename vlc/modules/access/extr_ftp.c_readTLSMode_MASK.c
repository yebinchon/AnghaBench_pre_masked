
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int vlc_object_t ;
struct TYPE_3__ {int * p_creds; int tlsmode; } ;
typedef TYPE_1__ access_sys_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char const*,char*,int) ;
 int * FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2( vlc_object_t *VAR_3, access_sys_t *VAR_4,
                        const char * VAR_5 )
{
    if ( !FUNC_0( VAR_5, "ftps", 4 ) )
        VAR_4->tlsmode = VAR_1;
    else
    if ( !FUNC_0( VAR_5, "ftpes", 5 ) )
        VAR_4->tlsmode = VAR_0;
    else
    {
        VAR_4->p_creds = ((void*)0);
        VAR_4->tlsmode = VAR_2;
        return 0;
    }

    VAR_4->p_creds = FUNC_1( VAR_3 );
    return (VAR_4->p_creds != ((void*)0)) ? 0 : -1;
}
