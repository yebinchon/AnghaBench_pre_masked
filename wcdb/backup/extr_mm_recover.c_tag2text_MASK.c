
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;


 char const** VAR_0 ;
 char const** VAR_1 ;

__attribute__((used)) static const char *FUNC_0(uint8_t VAR_2)
{
    return (VAR_2 & 0x80) ? VAR_1[VAR_2 & 0x7F] : VAR_0[VAR_2];
}
