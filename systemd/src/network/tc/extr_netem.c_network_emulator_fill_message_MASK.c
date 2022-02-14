
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct tc_netem_qopt {int limit; scalar_t__ loss; scalar_t__ duplicate; int jitter; int latency; } ;
struct TYPE_11__ {scalar_t__ limit; scalar_t__ loss; scalar_t__ duplicate; scalar_t__ delay; scalar_t__ jitter; } ;
struct TYPE_12__ {TYPE_1__ ne; } ;
typedef TYPE_2__ sd_netlink_message ;
typedef TYPE_2__ QDiscs ;
typedef TYPE_2__ Link ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*,int,char*) ;
 int FUNC_2 (TYPE_2__*,int ,struct tc_netem_qopt*,int) ;
 int FUNC_3 (scalar_t__,int *) ;

int FUNC_4(Link *VAR_2, QDiscs *VAR_3, sd_netlink_message *VAR_4) {
        struct tc_netem_qopt VAR_5 = {
               .limit = 1000,
        };
        int VAR_6;

        FUNC_0(VAR_2);
        FUNC_0(VAR_3);
        FUNC_0(VAR_4);

        if (VAR_3->ne.limit > 0)
                VAR_5.limit = VAR_3->ne.limit;

        if (VAR_3->ne.loss > 0)
                VAR_5.loss = VAR_3->ne.loss;

        if (VAR_3->ne.duplicate > 0)
                VAR_5.duplicate = VAR_3->ne.duplicate;

        if (VAR_3->ne.delay != VAR_1) {
                VAR_6 = FUNC_3(VAR_3->ne.delay, &VAR_5.latency);
                if (VAR_6 < 0)
                        return FUNC_1(VAR_2, VAR_6, "Failed to calculate latency in TCA_OPTION: %m");
        }

        if (VAR_3->ne.jitter != VAR_1) {
                VAR_6 = FUNC_3(VAR_3->ne.jitter, &VAR_5.jitter);
                if (VAR_6 < 0)
                        return FUNC_1(VAR_2, VAR_6, "Failed to calculate jitter in TCA_OPTION: %m");
        }

        VAR_6 = FUNC_2(VAR_4, VAR_0, &VAR_5, sizeof(struct tc_netem_qopt));
        if (VAR_6 < 0)
                return FUNC_1(VAR_2, VAR_6, "Could not append TCA_OPTION attribute: %m");

        return 0;
}
