
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vlc_object_t ;
typedef int demux_t ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int *,char*,char*,...) ;
 char* FUNC_2 (int *,char*) ;
 int FUNC_3 (char*,char*,int*) ;
 char* FUNC_4 (char*,char) ;
 int FUNC_5 (char*,char*,int) ;

__attribute__((used)) static int FUNC_6 ( demux_t *VAR_1, char *VAR_2 )
{
    char *VAR_3;
    char *VAR_4;

    VAR_3 = VAR_2;

    while( *VAR_3 == ' ' || *VAR_3 == '\t' ||
           *VAR_3 == '\n' || *VAR_3 == '\r' )
    {
        VAR_3++;
    }
    VAR_4 = FUNC_4( VAR_3, '=' );
    if( VAR_4 == ((void*)0) )
    {
        return 0;
    }
    *VAR_4 = '\0';
    VAR_4++;

    if( !FUNC_5( VAR_4, "0x", 2 ) )
    {
        int VAR_5;
        FUNC_3( VAR_4, "%x", &VAR_5 );
        FUNC_1( VAR_1, "%s = %d", VAR_3, VAR_5 );
    }
    else if( !FUNC_5( VAR_3, "Format", 6 ) )
    {
        FUNC_1( VAR_1, "%s = asf header", VAR_3 );
    }
    else
    {

        char *VAR_6;
        VAR_6 = FUNC_2( (vlc_object_t *)VAR_1, VAR_4 );
        if( VAR_6 )
        {
            FUNC_1( VAR_1, "%s = %s", VAR_3, VAR_6 );
            FUNC_0( VAR_6 );
        }
    }
    return VAR_0;
}
