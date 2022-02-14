
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {void* mdns_ipv6_fd; void* mdns_ipv6_event_source; void* mdns_ipv4_fd; void* mdns_ipv4_event_source; } ;
typedef TYPE_1__ Manager ;


 int FUNC_0 (TYPE_1__*) ;
 void* FUNC_1 (void*) ;
 void* FUNC_2 (void*) ;

void FUNC_3(Manager *VAR_0) {
        FUNC_0(VAR_0);

        VAR_0->mdns_ipv4_event_source = FUNC_2(VAR_0->mdns_ipv4_event_source);
        VAR_0->mdns_ipv4_fd = FUNC_1(VAR_0->mdns_ipv4_fd);

        VAR_0->mdns_ipv6_event_source = FUNC_2(VAR_0->mdns_ipv6_event_source);
        VAR_0->mdns_ipv6_fd = FUNC_1(VAR_0->mdns_ipv6_fd);
}
