
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int Tox ;
typedef scalar_t__ TOX_CONNECTION ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int,char*,scalar_t__) ;
 scalar_t__ VAR_1 ;

void FUNC_2(Tox *VAR_2, TOX_CONNECTION VAR_3, void *VAR_4)
{
    if (*((uint32_t *)VAR_4) != 974536)
        return;

    if (VAR_1 && !VAR_3)
        FUNC_0("Tox went offline");

    FUNC_1(VAR_3 == VAR_0, "wrong status %u", VAR_3);

    VAR_1 = VAR_3;
}
