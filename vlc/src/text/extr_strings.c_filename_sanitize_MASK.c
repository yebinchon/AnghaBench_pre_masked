
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*) ;
 int * FUNC_1 (char*,unsigned char) ;
 int FUNC_2 (char*,char*) ;

void FUNC_3( char *VAR_0 )
{
    unsigned char VAR_1;


    if( !FUNC_2( VAR_0, "." ) || !FUNC_2( VAR_0, ".." ) )
    {
        while( *VAR_0 )
            *(VAR_0++) = '_';
        return;
    }




    FUNC_0( VAR_0 );


    while( (VAR_1 = *VAR_0) != '\0' )
    {
        if( VAR_1 != ' ' )
            break;
        *(VAR_0++) = '_';
    }

    char *VAR_2 = VAR_0;

    while( (VAR_1 = *VAR_0) != '\0' )
    {

        if( VAR_1 < 32 )
            *VAR_0 = '_';



        else if( FUNC_1( "/:\\*\"?|<>", VAR_1 ) != ((void*)0) )
            *VAR_0 = '_';
        VAR_0++;
    }


    while( VAR_0 > VAR_2 )
    {
        if( *(--VAR_0) != ' ' )
            break;
        *VAR_0 = '_';
    }
}
