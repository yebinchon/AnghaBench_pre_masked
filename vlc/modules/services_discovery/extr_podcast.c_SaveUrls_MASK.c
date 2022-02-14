
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {TYPE_2__* p_sys; } ;
typedef TYPE_1__ services_discovery_t ;
struct TYPE_5__ {int i_urls; char** ppsz_urls; } ;
typedef TYPE_2__ services_discovery_sys_t ;


 scalar_t__ FUNC_0 (int,int) ;
 int FUNC_1 (char*,char*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*,char*) ;
 scalar_t__ FUNC_4 (char*) ;

__attribute__((used)) static void FUNC_5( services_discovery_t *VAR_0 )
{
    services_discovery_sys_t *VAR_1 = VAR_0->p_sys;
    int VAR_2;
    char *VAR_3;
    int VAR_4 = 0;

    for( VAR_2=0; VAR_2 < VAR_1->i_urls; VAR_2++ )
        VAR_4 += FUNC_4( VAR_1->ppsz_urls[VAR_2] ) + 1;

    VAR_3 = (char*) FUNC_0( VAR_4, sizeof(char) );

    for( VAR_2=0; VAR_2 < VAR_1->i_urls; VAR_2++ )
    {
        FUNC_3( VAR_3, VAR_1->ppsz_urls[VAR_2] );
        if( VAR_2 < VAR_1->i_urls - 1 ) FUNC_3( VAR_3, "|" );
    }

    FUNC_1( "podcast-urls", VAR_3 );

    FUNC_2( VAR_3 );
}
