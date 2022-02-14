
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ uint16_t ;
typedef int sd_netlink_message ;
struct TYPE_6__ {int stats_updated; int stats_new; int stats_old; } ;
struct TYPE_5__ {int links; } ;
typedef TYPE_1__ Manager ;
typedef TYPE_2__ Link ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 scalar_t__ VAR_2 ;
 TYPE_2__* FUNC_1 (int ,int ) ;
 int FUNC_2 (int *,scalar_t__*) ;
 int FUNC_3 (int *,int ,int,int *) ;
 int FUNC_4 (int *,int*) ;

__attribute__((used)) static int FUNC_5(Manager *VAR_3, sd_netlink_message *VAR_4) {
        uint16_t VAR_5;
        int VAR_6, VAR_7;
        Link *VAR_8;

        VAR_7 = FUNC_2(VAR_4, &VAR_5);
        if (VAR_7 < 0)
                return VAR_7;

        if (VAR_5 != VAR_2)
                return 0;

        VAR_7 = FUNC_4(VAR_4, &VAR_6);
        if (VAR_7 < 0)
                return VAR_7;

        VAR_8 = FUNC_1(VAR_3->links, FUNC_0(VAR_6));
        if (!VAR_8)
                return -VAR_0;

        VAR_8->stats_old = VAR_8->stats_new;

        VAR_7 = FUNC_3(VAR_4, VAR_1, sizeof VAR_8->stats_new, &VAR_8->stats_new);
        if (VAR_7 < 0)
                return VAR_7;

        VAR_8->stats_updated = 1;

        return 0;
}
