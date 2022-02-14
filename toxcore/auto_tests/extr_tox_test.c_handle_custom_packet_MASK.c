
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
typedef int Tox ;


 size_t VAR_0 ;
 int FUNC_0 (char*,int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int *,int const*,size_t) ;
 int FUNC_2 (int *,int ,size_t) ;

void FUNC_3(Tox *VAR_2, uint32_t VAR_3, const uint8_t *VAR_4, size_t VAR_5, void *VAR_6)
{
    uint8_t VAR_7 = *((uint32_t *)VAR_6);

    if (VAR_5 != VAR_0)
        return;

    uint8_t VAR_8[VAR_5];
    FUNC_2(VAR_8, VAR_7, VAR_5);

    if (FUNC_1(VAR_8, VAR_4, VAR_5) == 0) {
        ++VAR_1;
    } else {
        FUNC_0("Custom packet fail. %u", VAR_7);
    }

    return;
}
