
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint64_t ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int ) ;
 char* FUNC_2 (size_t) ;
 int FUNC_3 (char*,int *,size_t) ;
 size_t FUNC_4 (char const*,int) ;

__attribute__((used)) static char *FUNC_5( uint8_t **restrict VAR_1, uint64_t *restrict VAR_2 )
{
    FUNC_0( *VAR_2 <= VAR_0 );

    if( *VAR_2 == 0 )
        return ((void*)0);

    if( *VAR_1 == 0 )
    {
        *VAR_1 += 1;
        *VAR_2 -= 1;
        return ((void*)0);
    }

    size_t VAR_3 = FUNC_4( (const char *)*VAR_1, *VAR_2 );
    if( VAR_3 == 0 || VAR_3 >= *VAR_2 )
        return ((void*)0);

    VAR_3++;

    char *VAR_4 = FUNC_2( VAR_3 );
    if( FUNC_1(VAR_4 != ((void*)0)) )
        FUNC_3( VAR_4, *VAR_1, VAR_3 );
    *VAR_1 += VAR_3;
    *VAR_2 -= VAR_3;
    return VAR_4;
}
