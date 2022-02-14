
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
typedef int uint32_t ;
typedef int Tox ;
typedef int TOX_MESSAGE_TYPE ;


 int FUNC_0 (scalar_t__*,scalar_t__ const*,size_t) ;
 int FUNC_1 (int *,char*,int ,int ) ;

void FUNC_2(Tox *VAR_0, uint32_t VAR_1, TOX_MESSAGE_TYPE VAR_2, const uint8_t *VAR_3, size_t VAR_4,
                   void *VAR_5)
{

    uint8_t VAR_6[VAR_4 + 1];
    FUNC_0(VAR_6, VAR_3, VAR_4);
    VAR_6[VAR_4] = 0;
    FUNC_1(VAR_0, (char *)VAR_6, VAR_1, 0);
}
