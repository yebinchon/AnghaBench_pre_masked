
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
typedef int uint32_t ;
typedef int uint16_t ;
typedef int int32_t ;
typedef int Tox ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int,char*) ;
 int VAR_1 ;
 int * VAR_2 ;
 int FUNC_1 (int *,int ,scalar_t__ const*,int ) ;

void FUNC_2(Tox *VAR_3, int32_t VAR_4, uint8_t VAR_5, const uint8_t *VAR_6, uint16_t VAR_7,
                                 void *VAR_8)
{
    if (*((uint32_t *)VAR_8) != 234212)
        return;

    if (VAR_5 != VAR_0)
        return;

    int VAR_9;

    if ((VAR_9 = FUNC_1(VAR_3, VAR_4, VAR_6, VAR_7)) == -1)
        return;

    FUNC_0(VAR_9 == 0, "Group number was not 0");
    FUNC_0(FUNC_1(VAR_3, VAR_4, VAR_6, VAR_7) == -1,
                  "Joining groupchat twice should be impossible.");

    VAR_2 = VAR_3;
    VAR_1 = 4;
}
