
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int filter_t ;
struct TYPE_7__ {TYPE_1__* last; int obj; } ;
typedef TYPE_2__ filter_chain_t ;
typedef int config_chain_t ;
struct TYPE_6__ {int filter; } ;


 int VAR_0 ;
 char* FUNC_0 (char**,int **,char const*) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (TYPE_2__*,char*,int *,int *) ;
 int FUNC_3 (TYPE_2__*,int *) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int ,char*,char*) ;

int FUNC_6( filter_chain_t *VAR_1, const char *VAR_2 )
{
    char *VAR_3 = ((void*)0);
    int VAR_4 = 0;

    while( VAR_2 != ((void*)0) && VAR_2[0] != '\0' )
    {
        config_chain_t *VAR_5;
        char *VAR_6;

        char *VAR_7 = FUNC_0( &VAR_6, &VAR_5, VAR_2 );

        VAR_2 = VAR_7;
        FUNC_4( VAR_3 );
        VAR_3 = VAR_7;

        filter_t *VAR_8 = FUNC_2( VAR_1, VAR_6, VAR_5, ((void*)0) );
        if( VAR_5 )
            FUNC_1( VAR_5 );

        if( VAR_8 == ((void*)0) )
        {
            FUNC_5( VAR_1->obj, "Failed to append '%s' to chain", VAR_6 );
            FUNC_4( VAR_6 );
            goto error;
        }

        FUNC_4( VAR_6 );
        VAR_4++;
    }

    FUNC_4( VAR_3 );
    return VAR_4;

error:
    while( VAR_4 > 0 )
    {
        FUNC_3( VAR_1, &VAR_1->last->filter );
        VAR_4--;
    }
    FUNC_4( VAR_3 );
    return VAR_0;
}
