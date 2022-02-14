
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_1__ ;


union in_addr_union {int in6; int in; } ;
typedef int uint16_t ;
struct TYPE_13__ {int links; } ;
typedef TYPE_1__ sd_netlink_message ;
typedef TYPE_1__ sd_netlink ;
typedef TYPE_1__ Manager ;
typedef int LinkAddress ;
typedef int Link ;




 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;


 int FUNC_1 (TYPE_1__*) ;
 int * FUNC_2 (int ,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int **,int,union in_addr_union*) ;
 int FUNC_5 (int *,TYPE_1__*) ;
 int * FUNC_6 (int *,int,union in_addr_union*) ;
 int FUNC_7 (int,char*) ;
 int FUNC_8 (TYPE_1__*,int*) ;
 int FUNC_9 (TYPE_1__*,int ,int *) ;
 int FUNC_10 (TYPE_1__*,int ,int *) ;
 int FUNC_11 (TYPE_1__*,int*) ;
 int FUNC_12 (TYPE_1__*,int*) ;

__attribute__((used)) static int FUNC_13(sd_netlink *VAR_2, sd_netlink_message *VAR_3, void *VAR_4) {
        Manager *VAR_5 = VAR_4;
        union in_addr_union VAR_6;
        uint16_t VAR_7;
        int VAR_8, VAR_9, VAR_10;
        LinkAddress *VAR_11;
        Link *VAR_12;

        FUNC_1(VAR_2);
        FUNC_1(VAR_3);
        FUNC_1(VAR_5);

        VAR_8 = FUNC_8(VAR_3, &VAR_7);
        if (VAR_8 < 0)
                goto fail;

        VAR_8 = FUNC_12(VAR_3, &VAR_9);
        if (VAR_8 < 0)
                goto fail;

        VAR_12 = FUNC_2(VAR_5->links, FUNC_0(VAR_9));
        if (!VAR_12)
                return 0;

        VAR_8 = FUNC_11(VAR_3, &VAR_10);
        if (VAR_8 < 0)
                goto fail;

        switch (VAR_10) {

        case 131:
                VAR_8 = FUNC_10(VAR_3, VAR_1, &VAR_6.in);
                if (VAR_8 < 0) {
                        VAR_8 = FUNC_10(VAR_3, VAR_0, &VAR_6.in);
                        if (VAR_8 < 0)
                                goto fail;
                }

                break;

        case 130:
                VAR_8 = FUNC_9(VAR_3, VAR_1, &VAR_6.in6);
                if (VAR_8 < 0) {
                        VAR_8 = FUNC_9(VAR_3, VAR_0, &VAR_6.in6);
                        if (VAR_8 < 0)
                                goto fail;
                }

                break;

        default:
                return 0;
        }

        VAR_11 = FUNC_6(VAR_12, VAR_10, &VAR_6);

        switch (VAR_7) {

        case 128:

                if (!VAR_11) {
                        VAR_8 = FUNC_4(VAR_12, &VAR_11, VAR_10, &VAR_6);
                        if (VAR_8 < 0)
                                return VAR_8;
                }

                VAR_8 = FUNC_5(VAR_11, VAR_3);
                if (VAR_8 < 0)
                        return VAR_8;

                break;

        case 129:
                FUNC_3(VAR_11);
                break;
        }

        return 0;

fail:
        FUNC_7(VAR_8, "Failed to process RTNL address message: %m");
        return 0;
}
