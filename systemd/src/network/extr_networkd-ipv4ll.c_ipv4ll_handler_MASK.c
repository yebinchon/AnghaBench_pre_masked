
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


typedef int sd_ipv4ll ;
struct TYPE_9__ {int state; struct TYPE_9__* network; } ;
typedef TYPE_1__ Link ;


 scalar_t__ FUNC_0 (int ,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;



 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int *,TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*,char*) ;
 int FUNC_6 (TYPE_1__*,char*,int) ;
 int FUNC_7 (TYPE_1__*,int,char*) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static void FUNC_9(sd_ipv4ll *VAR_2, int VAR_3, void *VAR_4) {
        Link *VAR_5 = VAR_4;
        int VAR_6;

        FUNC_1(VAR_5);
        FUNC_1(VAR_5->network);

        if (FUNC_0(VAR_5->state, VAR_0, VAR_1))
                return;

        switch(VAR_3) {
                case 128:
                        VAR_6 = FUNC_3(VAR_5);
                        if (VAR_6 < 0) {
                                FUNC_4(VAR_5);
                                return;
                        }
                        break;
                case 129:
                        VAR_6 = FUNC_3(VAR_5);
                        if (VAR_6 < 0) {
                                FUNC_4(VAR_5);
                                return;
                        }

                        VAR_6 = FUNC_8(VAR_2);
                        if (VAR_6 < 0)
                                FUNC_7(VAR_5, VAR_6, "Could not acquire IPv4 link-local address: %m");
                        break;
                case 130:
                        VAR_6 = FUNC_2(VAR_2, VAR_5);
                        if (VAR_6 < 0) {
                                FUNC_5(VAR_5, "Failed to configure ipv4ll address: %m");
                                FUNC_4(VAR_5);
                                return;
                        }
                        break;
                default:
                        FUNC_6(VAR_5, "IPv4 link-local unknown event: %d", VAR_3);
                        break;
        }
}
