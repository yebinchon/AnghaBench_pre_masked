
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef scalar_t__ ssize_t ;


 size_t FUNC_0 (size_t,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *,size_t) ;
 scalar_t__ FUNC_3 (int,int *,size_t) ;

__attribute__((used)) static void
FUNC_4( int VAR_0, size_t VAR_1 )
{
    uint8_t VAR_2[4096];
    size_t VAR_3 = 0;
    while( VAR_3 < VAR_1 )
    {
        size_t VAR_4 = FUNC_0( VAR_1 - VAR_3, 4096 );

        FUNC_2(VAR_2, VAR_4);
        ssize_t VAR_5 = FUNC_3( VAR_0, VAR_2, VAR_4 );
        FUNC_1( VAR_5 > 0 );
        VAR_3 += VAR_5;
    }
    FUNC_1( VAR_3 == VAR_1 );
}
