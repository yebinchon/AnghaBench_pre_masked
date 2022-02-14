
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_8__ {int state; struct TYPE_8__* event; } ;
typedef TYPE_1__ sd_event_source ;
typedef TYPE_1__ sd_dhcp6_client ;
typedef enum DHCP6State { ____Placeholder_DHCP6State } DHCP6State ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,int ) ;
 int FUNC_3 (TYPE_1__*,int ) ;

__attribute__((used)) static int FUNC_4(sd_event_source *VAR_3, uint64_t VAR_4, void *VAR_5) {
        sd_dhcp6_client *VAR_6 = VAR_5;
        FUNC_0(VAR_6);
        enum DHCP6State VAR_7;

        FUNC_1(VAR_3);
        FUNC_1(VAR_6);
        FUNC_1(VAR_6->event);

        VAR_7 = VAR_6->state;

        FUNC_3(VAR_6, VAR_2);



        if (VAR_7 == VAR_0)
                FUNC_2(VAR_6, VAR_1);

        return 0;
}
