
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
typedef int data ;
struct TYPE_3__ {int sock; } ;
typedef TYPE_1__ TCP_Client_Connection ;


 unsigned int FUNC_0 (int ) ;
 int FUNC_1 (int ,scalar_t__*,unsigned int) ;
 scalar_t__ FUNC_2 (char*,char*) ;

__attribute__((used)) static int FUNC_3(TCP_Client_Connection *VAR_0)
{
    char VAR_1[] = "200";
    uint8_t VAR_2[16];

    int VAR_3 = FUNC_1(VAR_0->sock, VAR_2, sizeof(VAR_2) - 1);

    if (VAR_3 == -1) {
        return 0;
    }

    VAR_2[sizeof(VAR_2) - 1] = 0;

    if (FUNC_2((char *)VAR_2, VAR_1)) {

        unsigned int VAR_4 = FUNC_0(VAR_0->sock);

        if (VAR_4) {
            uint8_t VAR_5[VAR_4];
            FUNC_1(VAR_0->sock, VAR_5, VAR_4);
        }

        return 1;
    }

    return -1;
}
