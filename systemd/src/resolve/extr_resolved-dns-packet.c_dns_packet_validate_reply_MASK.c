
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int protocol; } ;
typedef TYPE_1__ DnsPacket ;


 scalar_t__ FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;


 int VAR_0 ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*) ;

int FUNC_6(DnsPacket *VAR_1) {
        int VAR_2;

        FUNC_4(VAR_1);

        VAR_2 = FUNC_5(VAR_1);
        if (VAR_2 < 0)
                return VAR_2;

        if (FUNC_2(VAR_1) != 1)
                return 0;

        if (FUNC_0(VAR_1) != 0)
                return -VAR_0;

        switch (VAR_1->protocol) {

        case 129:

                if (FUNC_1(VAR_1) != 1)
                        return -VAR_0;

                break;

        case 128:

                if (FUNC_3(VAR_1) != 0)
                        return -VAR_0;

                break;

        default:
                break;
        }

        return 1;
}
