
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_1__ ;


struct TYPE_17__ {int protocol; } ;
typedef TYPE_1__ DnsPacket ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;
 scalar_t__ FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*) ;
 scalar_t__ FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (TYPE_1__*) ;
 int FUNC_9 (TYPE_1__*) ;
 int FUNC_10 (TYPE_1__*) ;
 scalar_t__ FUNC_11 (TYPE_1__*) ;



 int VAR_0 ;
 int FUNC_12 (TYPE_1__*) ;
 int FUNC_13 (TYPE_1__*) ;

int FUNC_14(DnsPacket *VAR_1) {
        int VAR_2;

        FUNC_12(VAR_1);

        VAR_2 = FUNC_13(VAR_1);
        if (VAR_2 < 0)
                return VAR_2;

        if (FUNC_7(VAR_1) != 0)
                return 0;

        if (FUNC_5(VAR_1) != 0)
                return -VAR_0;

        if (FUNC_11(VAR_1))
                return -VAR_0;

        switch (VAR_1->protocol) {

        case 129:
        case 130:

                if (FUNC_6(VAR_1) != 1)
                        return -VAR_0;


                if (FUNC_2(VAR_1) > 0)
                        return -VAR_0;


                if (FUNC_4(VAR_1) > 0)
                        return -VAR_0;

                break;

        case 128:

                if (FUNC_0(VAR_1) != 0 ||
                    FUNC_10(VAR_1) != 0 ||
                    FUNC_8(VAR_1) != 0 ||
                    FUNC_1(VAR_1) != 0 ||
                    FUNC_3(VAR_1) != 0 ||
                    FUNC_9(VAR_1) != 0)
                        return -VAR_0;

                break;

        default:
                break;
        }

        return 1;
}
