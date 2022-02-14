
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int vlc_object_t ;
typedef int ssize_t ;
struct TYPE_6__ {scalar_t__ delivery; int inner_fec; void* i_rate; int polarization; void* i_freq; } ;
typedef TYPE_1__ scan_list_entry_t ;
typedef int FILE ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* FUNC_0 (char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char**,size_t*,int *) ;
 int FUNC_3 (int *,char*,char const*) ;
 TYPE_1__* FUNC_4 () ;
 scalar_t__ FUNC_5 (TYPE_1__***,TYPE_1__*) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (char*,char*) ;
 int FUNC_8 (char*,char*) ;
 char* FUNC_9 (char*,char const*,char**) ;
 scalar_t__ FUNC_10 (int ) ;
 int * FUNC_11 (char const*,char*) ;

scan_list_entry_t * FUNC_12( vlc_object_t *VAR_4, const char *VAR_5, size_t *VAR_6 )
{
    FILE *VAR_7 = FUNC_11( VAR_5, "r" );
    if( !VAR_7 )
    {
        FUNC_3( VAR_4, "failed to open satellite file (%s)", VAR_5 );
        return ((void*)0);
    }

    scan_list_entry_t *VAR_8 = ((void*)0);
    scan_list_entry_t **VAR_9 = &VAR_8;
    scan_list_entry_t *VAR_10 = ((void*)0);
    *VAR_6 = 0;

    const char *VAR_11 = " \t";

    char *VAR_12 = ((void*)0);
    size_t VAR_13 = 0;
    ssize_t VAR_14;

    while ( (VAR_14 = FUNC_2( &VAR_12, &VAR_13, VAR_7 )) != -1 )
    {
        char *VAR_15;
        char *VAR_16 = ((void*)0);

        if( VAR_10 && FUNC_5( &VAR_9, VAR_10 ) )
            (*VAR_6)++;

        VAR_10 = FUNC_4();
        if( FUNC_10(VAR_10 == ((void*)0)) )
            continue;


        if( !(VAR_15 = FUNC_9( VAR_12, VAR_11, &VAR_16 )) )
            continue;

        if( !FUNC_8( VAR_15, "S" ) )
        {
            VAR_10->delivery = VAR_0;
        }
        else if( !FUNC_8( VAR_15, "S2" ) )
        {
            VAR_10->delivery = VAR_1;
        }


        if( VAR_10->delivery == VAR_0 || VAR_10->delivery == VAR_1 )
        {

            if( !(VAR_15 = FUNC_9( ((void*)0), VAR_11, &VAR_16 )) )
                continue;
            VAR_10->i_freq = FUNC_0( VAR_15 );


            if( !(VAR_15 = FUNC_9( ((void*)0), VAR_11, &VAR_16 )) )
                continue;
            VAR_10->polarization = !FUNC_7(VAR_15, "H") ? VAR_2
                                                                : VAR_3;


            if( !(VAR_15 = FUNC_9( ((void*)0), VAR_11, &VAR_16 )) )
                continue;
            VAR_10->i_rate = FUNC_0( VAR_15 );


            if( !(VAR_15 = FUNC_9( ((void*)0), VAR_11, &VAR_16 )) )
                continue;
            VAR_10->inner_fec = FUNC_6( VAR_15 );


            if( !(VAR_15 = FUNC_9( ((void*)0), VAR_11, &VAR_16 )) )
                continue;


            if( !(VAR_15 = FUNC_9( ((void*)0), VAR_11, &VAR_16 )) )
                continue;


            if( !(VAR_15 = FUNC_9( ((void*)0), VAR_11, &VAR_16 )) )
                continue;
        }

    }

    if( VAR_10 && FUNC_5( &VAR_9, VAR_10 ) )
        (*VAR_6)++;

    FUNC_1( VAR_7 );

    return VAR_8;
}
