
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint64_t ;
typedef int stream_t ;
typedef scalar_t__ ssize_t ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (int *,int *,int const,int) ;
 scalar_t__ FUNC_2 (int *,int const**,int) ;
 char* FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *) ;

__attribute__((used)) inline static char * FUNC_5( stream_t *VAR_0, uint64_t *VAR_1 )
{
    uint8_t *VAR_2;
    ssize_t VAR_3 = FUNC_2( VAR_0, (const uint8_t **) &VAR_2,
                                  *VAR_1 + 2048 );
    if( VAR_3 < 0 || (uint64_t) VAR_3 < *VAR_1 )
        return ((void*)0);

    const uint64_t VAR_4 = (uint64_t) VAR_3 - *VAR_1;
    char *VAR_5 = ((void*)0);


    stream_t *VAR_6 = FUNC_1( VAR_0,
                                                     &VAR_2[*VAR_1],
                                                     VAR_4, 1 );
    if( VAR_6 )
    {
        VAR_5 = FUNC_3( VAR_6 );

        *VAR_1 += FUNC_4( VAR_6 );
        FUNC_0( VAR_6 );
    }

    return VAR_5;
}
