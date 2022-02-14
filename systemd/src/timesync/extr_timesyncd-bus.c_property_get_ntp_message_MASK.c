
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int usec_t ;
struct TYPE_10__ {int trans_time; int recv_time; int refid; int root_dispersion; int root_delay; int precision; int stratum; int field; } ;
struct TYPE_11__ {int samples_jitter; int packet_count; int spike; int dest_time; TYPE_1__ ntpmsg; int origin_time; } ;
typedef TYPE_2__ sd_bus_message ;
typedef int sd_bus_error ;
typedef int sd_bus ;
typedef TYPE_2__ Manager ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_0 ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (TYPE_2__*,char*,int ,int ,int ,int ,int ,int ,int ) ;
 int FUNC_7 (TYPE_2__*,char,int ,int) ;
 int FUNC_8 (TYPE_2__*) ;
 int FUNC_9 (TYPE_2__*,char,char*) ;
 int FUNC_10 (int *) ;

__attribute__((used)) static int FUNC_11(
                sd_bus *VAR_1,
                const char *VAR_2,
                const char *VAR_3,
                const char *VAR_4,
                sd_bus_message *VAR_5,
                void *VAR_6,
                sd_bus_error *VAR_7) {

        Manager *VAR_8 = VAR_6;
        int VAR_9;

        FUNC_3(VAR_8);
        FUNC_3(VAR_5);

        VAR_9 = FUNC_9(VAR_5, 'r', "uuuuittayttttbtt");
        if (VAR_9 < 0)
                return VAR_9;

        VAR_9 = FUNC_6(VAR_5, "uuuuitt",
                                  FUNC_0(VAR_8->ntpmsg.field),
                                  FUNC_2(VAR_8->ntpmsg.field),
                                  FUNC_1(VAR_8->ntpmsg.field),
                                  VAR_8->ntpmsg.stratum,
                                  VAR_8->ntpmsg.precision,
                                  FUNC_4(&VAR_8->ntpmsg.root_delay),
                                  FUNC_4(&VAR_8->ntpmsg.root_dispersion));
        if (VAR_9 < 0)
                return VAR_9;

        VAR_9 = FUNC_7(VAR_5, 'y', VAR_8->ntpmsg.refid, 4);
        if (VAR_9 < 0)
                return VAR_9;

        VAR_9 = FUNC_6(VAR_5, "ttttbtt",
                                  FUNC_10(&VAR_8->origin_time),
                                  FUNC_5(&VAR_8->ntpmsg.recv_time),
                                  FUNC_5(&VAR_8->ntpmsg.trans_time),
                                  FUNC_10(&VAR_8->dest_time),
                                  VAR_8->spike,
                                  VAR_8->packet_count,
                                  (usec_t) (VAR_8->samples_jitter * VAR_0));
        if (VAR_9 < 0)
                return VAR_9;

        return FUNC_8(VAR_5);
}
