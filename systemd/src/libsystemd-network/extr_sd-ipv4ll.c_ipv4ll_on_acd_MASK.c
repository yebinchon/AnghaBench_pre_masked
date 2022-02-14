
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int claimed_address; int address; } ;
typedef TYPE_1__ sd_ipv4ll ;
typedef TYPE_1__ sd_ipv4acd ;


 int FUNC_0 (TYPE_1__*) ;



 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (TYPE_1__*,int ) ;
 int FUNC_4 (TYPE_1__*) ;

void FUNC_5(sd_ipv4acd *VAR_3, int VAR_4, void *VAR_5) {
        sd_ipv4ll *VAR_6 = VAR_5;
        FUNC_0(VAR_6);
        int VAR_7;

        FUNC_1(VAR_3);
        FUNC_1(VAR_6);

        switch (VAR_4) {

        case 128:
                FUNC_3(VAR_6, VAR_2);
                VAR_6->claimed_address = 0;
                break;

        case 130:
                VAR_6->claimed_address = VAR_6->address;
                FUNC_3(VAR_6, VAR_0);
                break;

        case 129:


                if (VAR_6->claimed_address != 0) {
                        FUNC_3(VAR_6, VAR_1);

                        VAR_6->claimed_address = 0;
                } else {
                        VAR_7 = FUNC_4(VAR_6);
                        if (VAR_7 < 0)
                                goto error;
                }

                break;

        default:
                FUNC_2("Invalid IPv4ACD event.");
        }

        return;

error:
        FUNC_3(VAR_6, VAR_2);
}
