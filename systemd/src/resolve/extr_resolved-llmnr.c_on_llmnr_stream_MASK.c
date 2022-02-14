
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
typedef int sd_event_source ;
struct TYPE_3__ {int on_packet; } ;
typedef int Manager ;
typedef TYPE_1__ DnsStream ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int,int *,int *,int) ;
 int FUNC_2 (int *,TYPE_1__**,int ,int ,int,int *) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (int) ;

__attribute__((used)) static int FUNC_4(sd_event_source *VAR_6, int VAR_7, uint32_t VAR_8, void *VAR_9) {
        DnsStream *VAR_10;
        Manager *VAR_11 = VAR_9;
        int VAR_12, VAR_13;

        VAR_12 = FUNC_1(VAR_7, ((void*)0), ((void*)0), VAR_3|VAR_2);
        if (VAR_12 < 0) {
                if (FUNC_0(VAR_4))
                        return 0;

                return -VAR_4;
        }

        VAR_13 = FUNC_2(VAR_11, &VAR_10, VAR_1, VAR_0, VAR_12, ((void*)0));
        if (VAR_13 < 0) {
                FUNC_3(VAR_12);
                return VAR_13;
        }

        VAR_10->on_packet = VAR_5;


        return 0;
}
