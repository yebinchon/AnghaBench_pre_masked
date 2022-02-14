
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {void* dns_stub_tcp_fd; void* dns_stub_udp_fd; void* dns_stub_tcp_event_source; void* dns_stub_udp_event_source; } ;
typedef TYPE_1__ Manager ;


 int FUNC_0 (TYPE_1__*) ;
 void* FUNC_1 (void*) ;
 void* FUNC_2 (void*) ;

void FUNC_3(Manager *VAR_0) {
        FUNC_0(VAR_0);

        VAR_0->dns_stub_udp_event_source = FUNC_2(VAR_0->dns_stub_udp_event_source);
        VAR_0->dns_stub_tcp_event_source = FUNC_2(VAR_0->dns_stub_tcp_event_source);

        VAR_0->dns_stub_udp_fd = FUNC_1(VAR_0->dns_stub_udp_fd);
        VAR_0->dns_stub_tcp_fd = FUNC_1(VAR_0->dns_stub_tcp_fd);
}
