
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
typedef int Messenger ;


 int FUNC_0 (int *,int const*) ;
 scalar_t__ FUNC_1 (int const*,char*,int) ;
 int FUNC_2 (char*,...) ;

void FUNC_3(Messenger *VAR_0, const uint8_t *VAR_1, const uint8_t *VAR_2, size_t VAR_3, void *VAR_4)
{
    FUNC_2("Friend request received from: \n");
    FUNC_2("ClientID: ");
    uint32_t VAR_5;

    for (VAR_5 = 0; VAR_5 < 32; VAR_5++) {
        if (VAR_1[VAR_5] < 16)
            FUNC_2("0");

        FUNC_2("%hhX", VAR_1[VAR_5]);
    }

    FUNC_2("\nOf length: %lu with data: %s \n", VAR_3, VAR_2);

    if (VAR_3 != sizeof("Install Gentoo")) {
        return;
    }

    if (FUNC_1(VAR_2 , "Install Gentoo", sizeof("Install Gentoo")) == 0 )

    {
        FUNC_2("Friend request accepted.\n");
        FUNC_0(VAR_0, VAR_1);
    }
}
