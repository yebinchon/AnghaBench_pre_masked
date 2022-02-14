
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
typedef int sd_bus_message ;
typedef int sd_bus_error ;
typedef int sd_bus ;
struct TYPE_6__ {scalar_t__ tx_bytes; scalar_t__ rx_bytes; } ;
struct TYPE_5__ {scalar_t__ tx_bytes; scalar_t__ rx_bytes; } ;
struct TYPE_8__ {TYPE_2__ stats_new; TYPE_1__ stats_old; int stats_updated; TYPE_3__* manager; } ;
struct TYPE_7__ {scalar_t__ speed_meter_usec_old; scalar_t__ speed_meter_usec_new; int use_speed_meter; } ;
typedef TYPE_3__ Manager ;
typedef TYPE_4__ Link ;


 int VAR_0 ;
 double VAR_1 ;
 double VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,int ,char*) ;
 int FUNC_2 (int *,char*,scalar_t__,scalar_t__) ;

__attribute__((used)) static int FUNC_3(
                sd_bus *VAR_3,
                const char *VAR_4,
                const char *VAR_5,
                const char *VAR_6,
                sd_bus_message *VAR_7,
                void *VAR_8,
                sd_bus_error *VAR_9) {

        Link *VAR_10 = VAR_8;
        Manager *VAR_11;
        double VAR_12;
        uint64_t VAR_13, VAR_14;

        FUNC_0(*VAR_3);
        FUNC_0(*VAR_7);
        FUNC_0(VAR_8);

        VAR_11 = VAR_10->manager;

        if (!VAR_11->use_speed_meter)
                return FUNC_1(VAR_9, VAR_0, "Speed meter is disabled.");

        if (VAR_11->speed_meter_usec_old == 0)
                return FUNC_1(VAR_9, VAR_0, "Speed meter is not active.");

        if (!VAR_10->stats_updated)
                return FUNC_1(VAR_9, VAR_0, "Failed to measure bit-rates.");

        FUNC_0(VAR_11->speed_meter_usec_new > VAR_11->speed_meter_usec_old);
        VAR_12 = (VAR_11->speed_meter_usec_new - VAR_11->speed_meter_usec_old) / VAR_2;

        if (VAR_10->stats_new.tx_bytes > VAR_10->stats_old.tx_bytes)
                VAR_13 = (uint64_t) ((VAR_10->stats_new.tx_bytes - VAR_10->stats_old.tx_bytes) / VAR_12);
        else
                VAR_13 = (uint64_t) ((VAR_1 - (VAR_10->stats_old.tx_bytes - VAR_10->stats_new.tx_bytes)) / VAR_12);

        if (VAR_10->stats_new.rx_bytes > VAR_10->stats_old.rx_bytes)
                VAR_14 = (uint64_t) ((VAR_10->stats_new.rx_bytes - VAR_10->stats_old.rx_bytes) / VAR_12);
        else
                VAR_14 = (uint64_t) ((VAR_1 - (VAR_10->stats_old.rx_bytes - VAR_10->stats_new.rx_bytes)) / VAR_12);

        return FUNC_2(VAR_7, "(tt)", VAR_13, VAR_14);
}
