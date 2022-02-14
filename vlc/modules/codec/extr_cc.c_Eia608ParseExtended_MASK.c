
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int eia608_t ;
typedef int eia608_status_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (char*,int,int) ;

__attribute__((used)) static eia608_status_t FUNC_5( eia608_t *VAR_1, uint8_t VAR_2, uint8_t VAR_3 )
{
    FUNC_3( VAR_3 >= 0x20 && VAR_3 <= 0x3f );
    FUNC_3( VAR_2 == 0x12 || VAR_2 == 0x13 );
    if( VAR_2 == 0x12 )
        VAR_3 += 0x70;
    else
        VAR_3 += 0x90;

    FUNC_0(FUNC_4("[EXT %x->'%c']", VAR_3, VAR_3));


    FUNC_1( VAR_1, -1 );
    FUNC_2( VAR_1, VAR_3 );
    return VAR_0;
}
