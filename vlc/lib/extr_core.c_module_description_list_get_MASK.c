
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int module_t ;
struct TYPE_4__ {struct TYPE_4__* p_next; int * psz_help; int * psz_longname; int * psz_shortname; int * psz_name; } ;
typedef TYPE_1__ libvlc_module_description_t ;
typedef int libvlc_instance_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (int) ;
 char* FUNC_4 (int *) ;
 char* FUNC_5 (int *,int) ;
 char* FUNC_6 (int *) ;
 int FUNC_7 (int **) ;
 int ** FUNC_8 (size_t*) ;
 int FUNC_9 (int *,char const*) ;
 int * FUNC_10 (char const*) ;

__attribute__((used)) static libvlc_module_description_t *FUNC_11(
                libvlc_instance_t *VAR_0, const char *VAR_1 )
{
    libvlc_module_description_t *VAR_2 = ((void*)0),
                          *VAR_3 = ((void*)0),
                          *VAR_4 = ((void*)0);
    size_t VAR_5;
    module_t **VAR_6 = FUNC_8( &VAR_5 );

    for (size_t VAR_7 = 0; VAR_7 < VAR_5; VAR_7++)
    {
        module_t *VAR_8 = VAR_6[VAR_7];

        if ( !FUNC_9( VAR_8, VAR_1 ) )
            continue;

        VAR_3 = ( libvlc_module_description_t * ) FUNC_3( sizeof( libvlc_module_description_t ) );
        if ( VAR_3 == ((void*)0) )
        {
            FUNC_2( "Not enough memory" );
            FUNC_1( VAR_2 );
            FUNC_7( VAR_6 );
            return ((void*)0);
        }

        if ( VAR_2 == ((void*)0) )
            VAR_2 = VAR_3;

        const char* VAR_9 = FUNC_6( VAR_8 );
        const char* VAR_10 = FUNC_5( VAR_8, 0 );
        const char* VAR_11 = FUNC_5( VAR_8, 1 );
        const char* VAR_12 = FUNC_4( VAR_8 );
        VAR_3->psz_name = VAR_9 ? FUNC_10( VAR_9 ) : ((void*)0);
        VAR_3->psz_shortname = VAR_10 ? FUNC_10( VAR_10 ) : ((void*)0);
        VAR_3->psz_longname = VAR_11 ? FUNC_10( VAR_11 ) : ((void*)0);
        VAR_3->psz_help = VAR_12 ? FUNC_10( VAR_12 ) : ((void*)0);

        VAR_3->p_next = ((void*)0);
        if ( VAR_4 )
            VAR_4->p_next = VAR_3;
        VAR_4 = VAR_3;
    }

    FUNC_7( VAR_6 );
    FUNC_0( VAR_0 );
    return VAR_2;
}
