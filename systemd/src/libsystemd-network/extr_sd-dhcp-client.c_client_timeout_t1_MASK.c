
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint64_t ;
typedef int sd_event_source ;
struct TYPE_4__ {scalar_t__ attempt; int state; } ;
typedef TYPE_1__ sd_dhcp_client ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_2(sd_event_source *VAR_1, uint64_t VAR_2, void *VAR_3) {
        sd_dhcp_client *VAR_4 = VAR_3;
        FUNC_0(VAR_4);

        VAR_4->state = VAR_0;
        VAR_4->attempt = 0;

        return FUNC_1(VAR_4);
}
