
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__* psz_description; } ;
struct TYPE_4__ {scalar_t__* i_pos; scalar_t__* psz_language; TYPE_2__ fmt; } ;
typedef TYPE_1__ es_out_id_t ;
typedef TYPE_2__ es_format_t ;


 scalar_t__* FUNC_0 (char*) ;
 int FUNC_1 (char**,char*,scalar_t__*,scalar_t__*,...) ;
 char* FUNC_2 (scalar_t__*) ;

__attribute__((used)) static char *FUNC_3( es_out_id_t *VAR_0 )
{
    const es_format_t *VAR_1 = &VAR_0->fmt;
    char *VAR_2;


    if( VAR_1->psz_description && *VAR_1->psz_description )
    {
        if( VAR_0->psz_language && *VAR_0->psz_language )
        {
            if( FUNC_1( &VAR_2, "%s - [%s]", VAR_1->psz_description,
                          VAR_0->psz_language ) == -1 )
                VAR_2 = ((void*)0);
        }
        else
            VAR_2 = FUNC_2( VAR_1->psz_description );
    }
    else
    {
        if( VAR_0->psz_language && *VAR_0->psz_language )
        {
            if( FUNC_1( &VAR_2, "%s %zu - [%s]", FUNC_0("Track"),
                          VAR_0->i_pos, VAR_0->psz_language ) == -1 )
                VAR_2 = ((void*)0);
        }
        else
        {
            if( FUNC_1( &VAR_2, "%s %zu", FUNC_0("Track"), VAR_0->i_pos ) == -1 )
                VAR_2 = ((void*)0);
        }
    }

    return VAR_2;
}
