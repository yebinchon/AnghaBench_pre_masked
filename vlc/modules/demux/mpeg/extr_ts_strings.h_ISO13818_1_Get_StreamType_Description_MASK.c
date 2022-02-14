
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;


 char const** VAR_0 ;
 char const** VAR_1 ;

__attribute__((used)) static const char *FUNC_0(uint8_t VAR_2)
{
    if( VAR_2 <= 0x23 )
        return VAR_1[VAR_2];
    else if (VAR_2 >= 0x0F && VAR_2 < 0x7F)
        return VAR_1[0];
    else if( VAR_2 == 0x7F )
        return VAR_1[0x1A];
    else
        return VAR_0[1];
}
