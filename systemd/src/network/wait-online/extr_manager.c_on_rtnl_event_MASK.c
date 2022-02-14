
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int sd_netlink_message ;
typedef int sd_netlink ;
struct TYPE_4__ {int event; } ;
typedef TYPE_1__ Manager ;


 scalar_t__ FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int *,int *,TYPE_1__*) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static int FUNC_3(sd_netlink *VAR_0, sd_netlink_message *VAR_1, void *VAR_2) {
        Manager *VAR_3 = VAR_2;
        int VAR_4;

        VAR_4 = FUNC_1(VAR_0, VAR_1, VAR_3);
        if (VAR_4 < 0)
                return VAR_4;

        if (FUNC_0(VAR_3))
                FUNC_2(VAR_3->event, 0);

        return 1;
}
