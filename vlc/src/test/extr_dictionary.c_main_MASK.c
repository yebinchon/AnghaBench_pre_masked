
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vlc_dictionary_t ;
typedef int our_keys ;


 int FUNC_0 (int) ;
 int FUNC_1 (char**) ;
 int FUNC_2 (int *,char const**,int const) ;
 char** FUNC_3 (int *) ;
 int FUNC_4 (int *,int *,int *) ;
 int FUNC_5 (int *,char const*) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (int *,char const*,void*) ;
 int FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (int *) ;
 int FUNC_10 (int *,char const*,int *,int *) ;

int FUNC_11 (void)
{
    static const char * VAR_0[] = {
        "Hello", "Hella", "flowmeter", "Frostnipped", "frostnipped", "remiform", "quadrifoliolate", "singularity", "unafflicted"
    };
    const int VAR_1 = sizeof(VAR_0)/sizeof(VAR_0[0]);
    char ** VAR_2;
    intptr_t VAR_3 = 0;

    vlc_dictionary_t VAR_4;
    FUNC_6( &VAR_4, 0 );

    FUNC_0( FUNC_9( &VAR_4 ) == 0 );
    FUNC_0( FUNC_8( &VAR_4 ) );

    VAR_2 = FUNC_3( &VAR_4 );
    FUNC_0( VAR_2 && !VAR_2[0] );
    FUNC_1(VAR_2);



    for( VAR_3 = 0; VAR_3 < VAR_1; VAR_3++ )
    {
        FUNC_7( &VAR_4, VAR_0[VAR_3], (void *)VAR_3 );
        FUNC_0( FUNC_5(&VAR_4, VAR_0[VAR_3]) );
        for( int VAR_5 = VAR_3 + 1; VAR_5 < VAR_1; VAR_5++ )
            FUNC_0( !FUNC_5(&VAR_4, VAR_0[VAR_5]) );
    }

    FUNC_0( !FUNC_8( &VAR_4 ) );
    FUNC_2( &VAR_4, VAR_0, VAR_1 );

    FUNC_10( &VAR_4, VAR_0[VAR_1-1], ((void*)0), ((void*)0) );

    FUNC_2( &VAR_4, VAR_0, VAR_1-1 );

    FUNC_4( &VAR_4, ((void*)0), ((void*)0) );

    FUNC_0( FUNC_9( &VAR_4 ) == 0 );
    FUNC_0( FUNC_8( &VAR_4 ) );
    return 0;
}
