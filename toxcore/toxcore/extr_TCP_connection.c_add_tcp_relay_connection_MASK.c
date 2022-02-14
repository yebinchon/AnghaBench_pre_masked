
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int TCP_con ;
typedef int TCP_Connections ;
typedef int TCP_Connection_to ;
typedef int IP_Port ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,int) ;
 int FUNC_1 (int *,int,int) ;
 int FUNC_2 (int *,int ,int const*) ;
 int FUNC_3 (int *,int const*) ;
 int * FUNC_4 (int *,int) ;
 int * FUNC_5 (int *,int) ;
 scalar_t__ FUNC_6 (int *) ;

int FUNC_7(TCP_Connections *VAR_1, int VAR_2, IP_Port VAR_3, const uint8_t *VAR_4)
{
    TCP_Connection_to *VAR_5 = FUNC_4(VAR_1, VAR_2);

    if (!VAR_5)
        return -1;

    int VAR_6 = FUNC_3(VAR_1, VAR_4);

    if (VAR_6 != -1) {
        return FUNC_1(VAR_1, VAR_2, VAR_6);
    } else {
        if (FUNC_6(VAR_5) >= VAR_0) {
            return -1;
        }

        int VAR_7 = FUNC_2(VAR_1, VAR_3, VAR_4);

        TCP_con *VAR_8 = FUNC_5(VAR_1, VAR_7);

        if (!VAR_8)
            return -1;

        if (FUNC_0(VAR_5, VAR_7) == -1) {
            return -1;
        }

        return 0;
    }
}
