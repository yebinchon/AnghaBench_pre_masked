
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_6__ {scalar_t__ mdns_ipv6_scope; scalar_t__ mdns_ipv4_scope; scalar_t__ llmnr_ipv6_scope; scalar_t__ llmnr_ipv4_scope; scalar_t__ unicast_scope; } ;
typedef TYPE_1__ sd_bus_message ;
typedef int sd_bus_error ;
typedef int sd_bus ;
typedef TYPE_1__ Link ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,char*,int) ;

__attribute__((used)) static int FUNC_2(
                sd_bus *VAR_5,
                const char *VAR_6,
                const char *VAR_7,
                const char *VAR_8,
                sd_bus_message *VAR_9,
                void *VAR_10,
                sd_bus_error *VAR_11) {

        Link *VAR_12 = VAR_10;
        uint64_t VAR_13;

        FUNC_0(VAR_9);
        FUNC_0(VAR_12);

        VAR_13 = (VAR_12->unicast_scope ? VAR_0 : 0) |
                (VAR_12->llmnr_ipv4_scope ? VAR_1 : 0) |
                (VAR_12->llmnr_ipv6_scope ? VAR_2 : 0) |
                (VAR_12->mdns_ipv4_scope ? VAR_3 : 0) |
                (VAR_12->mdns_ipv6_scope ? VAR_4 : 0);

        return FUNC_1(VAR_9, "t", VAR_13);
}
