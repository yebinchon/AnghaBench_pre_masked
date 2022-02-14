
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint64_t ;
typedef int sd_event_source ;
struct TYPE_7__ {scalar_t__ state; } ;
typedef TYPE_1__ sd_dhcp_client ;


 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,int ) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*,char*) ;

__attribute__((used)) static int FUNC_5(sd_event_source *VAR_2, uint64_t VAR_3, void *VAR_4) {
        sd_dhcp_client *VAR_5 = VAR_4;
        FUNC_0(VAR_5);

        FUNC_4(VAR_5, "EXPIRED");

        FUNC_2(VAR_5, VAR_1);


        if (VAR_5->state != VAR_0) {
                FUNC_1(VAR_5);
                FUNC_3(VAR_5);
        }

        return 0;
}
