
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int input_item_t ;
typedef int FILE ;


 char* FUNC_0 (char*) ;
 char* FUNC_1 (char*,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (char*,int,int *) ;
 int FUNC_4 (char*) ;
 char* FUNC_5 (int *,char*,char*) ;
 int FUNC_6 (int *,char*) ;
 int * FUNC_7 (char*,char*) ;

int FUNC_8( input_item_t *VAR_2 )
{
    char *VAR_3 = FUNC_5( VAR_2, "uid", "md5" );
    if ( ! *VAR_3 )
    {
        FUNC_4( VAR_3 );
        return VAR_0;
    }


    bool VAR_4 = 0;
    char *VAR_5 = FUNC_0( VAR_3 );
    char *VAR_6 = FUNC_1( VAR_5, "arturl" );
    FUNC_4( VAR_5 );
    if( VAR_6 )
    {
        FILE *VAR_7 = FUNC_7( VAR_6, "rb" );
        if ( VAR_7 )
        {
            char VAR_8[2049];

            if ( FUNC_3( VAR_8, 2048, VAR_7 ) != ((void*)0) )
            {
                FUNC_6( VAR_2, VAR_8 );
                VAR_4 = 1;
            }
            FUNC_2( VAR_7 );
        }
        FUNC_4( VAR_6 );
    }
    FUNC_4( VAR_3 );
    if ( VAR_4 ) return VAR_1;

    return VAR_0;
}
