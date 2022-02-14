
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {TYPE_3__* p_sys; } ;
typedef TYPE_2__ stream_t ;
struct TYPE_6__ {int * psz_path; } ;
struct TYPE_8__ {char* psz_fullpath; char* psz_share; char* psz_path; TYPE_1__ url; } ;
typedef TYPE_3__ access_sys_t ;


 int FUNC_0 (char*) ;
 int FUNC_1 (TYPE_2__*,char*) ;
 char* FUNC_2 (char*,char) ;
 int FUNC_3 (char*) ;
 char* FUNC_4 (int *) ;

__attribute__((used)) static bool FUNC_5( stream_t *VAR_0 )
{
    access_sys_t *VAR_1 = VAR_0->p_sys;
    char *VAR_2;

    if( VAR_1->url.psz_path == ((void*)0) )
        return 0;

    VAR_1->psz_fullpath = FUNC_4( VAR_1->url.psz_path );
    if( VAR_1->psz_fullpath == ((void*)0) )
        return 0;

    FUNC_0( VAR_1->psz_fullpath );


    if( FUNC_3( VAR_1->psz_fullpath ) > 1 )
    {
        VAR_2 = VAR_1->psz_fullpath;
        while( *VAR_2 == '\\' ) VAR_2++;

        VAR_1->psz_share = VAR_2;
    }
    else
    {
        FUNC_1( VAR_0, "no share, nor file path provided, will switch to browser");
        return 0;
    }

    VAR_2 = FUNC_2( VAR_1->psz_share, '\\' );
    if( VAR_2 == ((void*)0) || FUNC_3(VAR_2 + 1) == 0 )
    {
        if( VAR_2 != ((void*)0) )
            *VAR_2 = '\0';
        VAR_1->psz_path = "";

        FUNC_1( VAR_0, "no file path provided, will switch to browser ");
        return 1;
    }

    VAR_1->psz_path = VAR_2 + 1;
    *VAR_2 = '\0';

    return 1;
}
