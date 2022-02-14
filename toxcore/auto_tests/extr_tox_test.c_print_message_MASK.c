
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
typedef int cmp_msg ;
typedef int Tox ;
typedef scalar_t__ TOX_MESSAGE_TYPE ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int const*,int *,int) ;
 int FUNC_2 (int *,char,int) ;
 int VAR_2 ;

void FUNC_3(Tox *VAR_3, uint32_t VAR_4, TOX_MESSAGE_TYPE VAR_5, const uint8_t *VAR_6, size_t VAR_7,
                   void *VAR_8)
{
    if (*((uint32_t *)VAR_8) != 974536)
        return;

    if (VAR_5 != VAR_1) {
        FUNC_0("Bad type");
    }

    uint8_t VAR_9[VAR_0];
    FUNC_2(VAR_9, 'G', sizeof(VAR_9));

    if (VAR_7 == VAR_0 && FUNC_1(VAR_6, VAR_9, sizeof(VAR_9)) == 0)
        ++VAR_2;
}
