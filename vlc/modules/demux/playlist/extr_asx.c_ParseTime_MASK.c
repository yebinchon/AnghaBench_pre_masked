
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int xml_reader_t ;
typedef int vlc_tick_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int*) ;
 int FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (char) ;
 char* FUNC_4 (char const*) ;
 scalar_t__ FUNC_5 (char const*,char*,int) ;
 char* FUNC_6 (int *,char const**) ;

__attribute__((used)) static bool FUNC_7(xml_reader_t *VAR_1, vlc_tick_t* VAR_2 )
{
    FUNC_1( VAR_2 );
    char *VAR_3 = ((void*)0);
    char *VAR_4 = ((void*)0);

    const char *VAR_5 = ((void*)0);
    const char *VAR_6 = ((void*)0);

    int VAR_7 = -1;

    int VAR_8 = 0;
    vlc_tick_t VAR_9 = 0;

    do
    {
        VAR_6 = FUNC_6( VAR_1, &VAR_5 );
    }
    while( VAR_6 && FUNC_5( VAR_6, "VALUE", 5 ) );

    if( !VAR_6 )
        return 0;

    VAR_3 = FUNC_4( VAR_5 );
    VAR_4 = VAR_3;

    while( *VAR_3 )
    {
        if( FUNC_3( *VAR_3 ) )
        {
            VAR_8 = VAR_8 * 10;
            VAR_8 += *VAR_3 - '0';
            if( VAR_7 != -1 )
                VAR_7++;
        }
        else if( *VAR_3 == ':' )
        {
            VAR_9 += VAR_8;
            VAR_9 = VAR_9 * 60;
            VAR_8 = 0;
        }
        else if( *VAR_3 == '.' )
        {
            VAR_7 = 0;
            VAR_9 += VAR_8;
            VAR_8 = 0;
        }
        VAR_3++;

    }
    if( VAR_7 == -1)
        VAR_9 += VAR_8;


    if( VAR_7 == -1)
        VAR_7 = 0;
    while( VAR_7 < 6 )
    {
        VAR_8 = VAR_8 * 10;
        VAR_7++;
    }
    VAR_9 = VAR_9 * VAR_0;
    if( VAR_7 != -1)
        VAR_9 += FUNC_0( VAR_8 );

    FUNC_2( VAR_4 );
    *VAR_2 = VAR_9;
    return 1;
}
