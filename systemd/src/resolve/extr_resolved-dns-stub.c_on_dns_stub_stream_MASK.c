
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
typedef int sd_event_source ;
struct TYPE_3__ {int complete; int on_packet; } ;
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
 int VAR_6 ;
 int FUNC_3 (int) ;

__attribute__((used)) static int FUNC_4(sd_event_source *VAR_7, int VAR_8, uint32_t VAR_9, void *VAR_10) {
        DnsStream *VAR_11;
        Manager *VAR_12 = VAR_10;
        int VAR_13, VAR_14;

        VAR_13 = FUNC_1(VAR_8, ((void*)0), ((void*)0), VAR_3|VAR_2);
        if (VAR_13 < 0) {
                if (FUNC_0(VAR_5))
                        return 0;

                return -VAR_5;
        }

        VAR_14 = FUNC_2(VAR_12, &VAR_11, VAR_1, VAR_0, VAR_13, ((void*)0));
        if (VAR_14 < 0) {
                FUNC_3(VAR_13);
                return VAR_14;
        }

        VAR_11->on_packet = VAR_6;
        VAR_11->complete = VAR_4;



        return 0;
}
