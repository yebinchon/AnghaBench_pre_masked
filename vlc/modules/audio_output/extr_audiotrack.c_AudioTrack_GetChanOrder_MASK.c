
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int uint16_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int) ;

__attribute__((used)) static void
FUNC_2( uint16_t VAR_10, uint32_t VAR_11[] )
{


    int VAR_12 = 0;

    if( ( ( VAR_10 & (VAR_1) ) == (VAR_1) ) )
        VAR_11[VAR_12++] = VAR_1;
    if( ( ( VAR_10 & (VAR_9) ) == (VAR_9) ) )
        VAR_11[VAR_12++] = VAR_9;

    if( ( ( VAR_10 & (VAR_0) ) == (VAR_0) ) )
        VAR_11[VAR_12++] = VAR_0;

    if( ( ( VAR_10 & (VAR_2) ) == (VAR_2) ) )
        VAR_11[VAR_12++] = VAR_2;

    if( ( ( VAR_10 & (VAR_7) ) == (VAR_7) ) )
        VAR_11[VAR_12++] = VAR_7;
    if( ( ( VAR_10 & (VAR_8) ) == (VAR_8) ) )
        VAR_11[VAR_12++] = VAR_8;

    if( ( ( VAR_10 & (VAR_6) ) == (VAR_6) ) )
        VAR_11[VAR_12++] = VAR_6;

    if( ( ( VAR_10 & (VAR_4) ) == (VAR_4) ) )
        VAR_11[VAR_12++] = VAR_4;
    if( ( ( VAR_10 & (VAR_5) ) == (VAR_5) ) )
        VAR_11[VAR_12++] = VAR_5;

    FUNC_1( VAR_12 <= VAR_3 );

}
