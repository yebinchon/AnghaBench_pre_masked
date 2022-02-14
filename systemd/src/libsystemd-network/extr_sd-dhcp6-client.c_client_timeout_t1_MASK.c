
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_7__ {int timeout_t1; struct TYPE_7__* lease; } ;
typedef TYPE_1__ sd_event_source ;
typedef TYPE_1__ sd_dhcp6_client ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_1__*,char*) ;

__attribute__((used)) static int FUNC_4(sd_event_source *VAR_1, uint64_t VAR_2, void *VAR_3) {
        sd_dhcp6_client *VAR_4 = VAR_3;

        FUNC_0(VAR_1);
        FUNC_0(VAR_4);
        FUNC_0(VAR_4->lease);

        (void) FUNC_2(VAR_4->timeout_t1);

        FUNC_3(VAR_4, "Timeout T1");

        FUNC_1(VAR_4, VAR_0);

        return 0;
}
