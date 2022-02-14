
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef int data ;
struct TYPE_3__ {int sock; } ;
typedef TYPE_1__ TCP_Client_Connection ;


 int FUNC_0 (int ,int*,int) ;

__attribute__((used)) static int FUNC_1(TCP_Client_Connection *VAR_0)
{
    uint8_t VAR_1[2];
    int VAR_2 = FUNC_0(VAR_0->sock, VAR_1, sizeof(VAR_1));

    if (VAR_2 == -1)
        return 0;

    if (VAR_1[0] == 5 && VAR_1[1] == 0)
        return 1;

    return -1;
}
