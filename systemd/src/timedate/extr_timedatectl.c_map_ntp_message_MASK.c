
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int sd_bus_message ;
typedef int sd_bus_error ;
typedef int sd_bus ;
typedef int int32_t ;
struct TYPE_4__ {int str; } ;
struct TYPE_5__ {int spike; TYPE_1__ reference; int jitter; int packet_count; int dest; int trans; int recv; int origin; int root_dispersion; int root_delay; int precision; int stratum; int mode; int version; int leap; } ;
typedef TYPE_2__ NTPStatusInfo ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int ,void const*,size_t) ;
 int FUNC_2 (int *,char,char*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,char*,int *,int *,int *,int *,int *,int *,int *) ;
 int FUNC_5 (int *,char,void const**,size_t*) ;

__attribute__((used)) static int FUNC_6(sd_bus *VAR_1, const char *VAR_2, sd_bus_message *VAR_3, sd_bus_error *VAR_4, void *VAR_5) {
        NTPStatusInfo *VAR_6 = VAR_5;
        const void *VAR_7;
        size_t VAR_8;
        int32_t VAR_9;
        int VAR_10;

        FUNC_0(VAR_6);

        VAR_10 = FUNC_2(VAR_3, 'r', "uuuuittayttttbtt");
        if (VAR_10 < 0)
                return VAR_10;

        VAR_10 = FUNC_4(VAR_3, "uuuuitt",
                                &VAR_6->leap, &VAR_6->version, &VAR_6->mode, &VAR_6->stratum, &VAR_6->precision,
                                &VAR_6->root_delay, &VAR_6->root_dispersion);
        if (VAR_10 < 0)
                return VAR_10;

        VAR_10 = FUNC_5(VAR_3, 'y', &VAR_7, &VAR_8);
        if (VAR_10 < 0)
                return VAR_10;

        VAR_10 = FUNC_4(VAR_3, "ttttbtt",
                                &VAR_6->origin, &VAR_6->recv, &VAR_6->trans, &VAR_6->dest,
                                &VAR_9, &VAR_6->packet_count, &VAR_6->jitter);
        if (VAR_10 < 0)
                return VAR_10;

        VAR_10 = FUNC_3(VAR_3);
        if (VAR_10 < 0)
                return VAR_10;

        if (VAR_8 != 4)
                return -VAR_0;

        FUNC_1(VAR_6->reference.str, VAR_7, VAR_8);

        VAR_6->spike = VAR_9;

        return 0;
}
