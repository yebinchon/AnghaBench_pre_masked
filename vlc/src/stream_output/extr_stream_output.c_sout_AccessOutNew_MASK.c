
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int vlc_object_t ;
struct TYPE_6__ {char* psz_access; char* psz_path; int * p_module; int * pf_control; int * pf_write; int * pf_read; int * pf_seek; int * p_sys; int p_cfg; } ;
typedef TYPE_1__ sout_access_out_t ;


 char* FUNC_0 (char**,int *,char const*) ;
 int FUNC_1 (char*) ;
 int * FUNC_2 (TYPE_1__*,char*,char*,int) ;
 char* FUNC_3 (char const*) ;
 scalar_t__ FUNC_4 (int ) ;
 TYPE_1__* FUNC_5 (int *,int,char*) ;
 int FUNC_6 (TYPE_1__*) ;

sout_access_out_t *FUNC_7( vlc_object_t *VAR_0,
                                      const char *VAR_1, const char *VAR_2 )
{
    sout_access_out_t *VAR_3;
    char *VAR_4;

    VAR_3 = FUNC_5( VAR_0, sizeof( *VAR_3 ), "access out" );
    if( !VAR_3 )
        return ((void*)0);

    VAR_4 = FUNC_0( &VAR_3->psz_access, &VAR_3->p_cfg,
                                   VAR_1 );
    FUNC_1( VAR_4 );
    VAR_3->psz_path = FUNC_3( VAR_2 ? VAR_2 : "" );
    if( FUNC_4(VAR_3->psz_path == ((void*)0)) )
        goto error;
    VAR_3->p_sys = ((void*)0);
    VAR_3->pf_seek = ((void*)0);
    VAR_3->pf_read = ((void*)0);
    VAR_3->pf_write = ((void*)0);
    VAR_3->pf_control = ((void*)0);
    VAR_3->p_module = ((void*)0);

    VAR_3->p_module =
        FUNC_2( VAR_3, "sout access", VAR_3->psz_access, 1 );

    if( !VAR_3->p_module )
    {
        FUNC_1( VAR_3->psz_path );
error:
        FUNC_1( VAR_3->psz_access );
        FUNC_6(VAR_3);
        return( ((void*)0) );
    }

    return VAR_3;
}
