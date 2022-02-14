
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_3__ {int s; } ;
typedef TYPE_1__ stream_t ;


 char* FUNC_0 (char*,int const*,int) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int const*,char*,int) ;
 char* FUNC_3 (char const*,int) ;
 int * FUNC_4 (char*,char*) ;
 int FUNC_5 (int ,int const**,int) ;

__attribute__((used)) static bool FUNC_6( stream_t *VAR_0 )
{
    const uint8_t *VAR_1;
    int VAR_2 = FUNC_5( VAR_0->s, &VAR_1, 200 );
    if( VAR_2 < 200 )
        return 0;

    char *VAR_3;

    if( !FUNC_2( VAR_1, "\xFF\xFE", 2 ) )
    {
        VAR_3 = FUNC_0( "UTF-16LE", VAR_1, VAR_2 );
    }
    else if( !FUNC_2( VAR_1, "\xFE\xFF", 2 ) )
    {
        VAR_3 = FUNC_0( "UTF-16BE", VAR_1, VAR_2 );
    }
    else
        VAR_3 = FUNC_3( (const char *)VAR_1, VAR_2 );

    if( VAR_3 == ((void*)0) )
        return 0;

    bool VAR_4 = FUNC_4( VAR_3, "<manifest" ) != ((void*)0);
    FUNC_1( VAR_3 );
    return VAR_4;
}
