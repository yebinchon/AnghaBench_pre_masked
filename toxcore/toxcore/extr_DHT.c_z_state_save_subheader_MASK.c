
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
typedef int uint16_t ;


 int VAR_0 ;
 int FUNC_0 (int *,int) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static uint8_t *FUNC_2(uint8_t *VAR_1, uint32_t VAR_2, uint16_t VAR_3)
{
    FUNC_0(VAR_1, VAR_2);
    VAR_1 += sizeof(uint32_t);
    FUNC_0(VAR_1, (FUNC_1(VAR_0) << 16) | FUNC_1(VAR_3));
    VAR_1 += sizeof(uint32_t);
    return VAR_1;
}
