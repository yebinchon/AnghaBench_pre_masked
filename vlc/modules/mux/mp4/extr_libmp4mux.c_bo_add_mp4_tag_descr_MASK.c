
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
typedef int bo_t ;


 int FUNC_0 (int *,int) ;

__attribute__((used)) static inline void FUNC_1(bo_t *VAR_0, uint8_t VAR_1, uint32_t VAR_2)
{
    FUNC_0(VAR_0, VAR_1);
    for (int VAR_3 = 3; VAR_3>0; VAR_3--)
        FUNC_0(VAR_0, (VAR_2>>(7*VAR_3)) | 0x80);
    FUNC_0(VAR_0, VAR_2 & 0x7F);
}
