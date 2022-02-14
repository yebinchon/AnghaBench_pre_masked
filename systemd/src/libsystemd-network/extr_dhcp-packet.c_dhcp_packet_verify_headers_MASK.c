
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint16_t ;
struct TYPE_7__ {int len; scalar_t__ check; int dest; } ;
struct TYPE_6__ {scalar_t__ version; int ihl; scalar_t__ protocol; scalar_t__ ttl; int check; } ;
struct TYPE_8__ {TYPE_2__ udp; TYPE_1__ ip; } ;
typedef TYPE_3__ DHCPPacket ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int *,int) ;
 int FUNC_4 (int ,char*,...) ;

int FUNC_5(DHCPPacket *VAR_3, size_t VAR_4, bool VAR_5, uint16_t VAR_6) {
        size_t VAR_7;

        FUNC_1(VAR_3);



        if (VAR_3->ip.version != VAR_2)
                return FUNC_4(FUNC_0(VAR_0),
                                       "ignoring packet: not IPv4");

        if (VAR_3->ip.ihl < 5)
                return FUNC_4(FUNC_0(VAR_0),
                                       "ignoring packet: IPv4 IHL (%u words) invalid",
                                       VAR_3->ip.ihl);

        VAR_7 = VAR_3->ip.ihl * 4;
        if (VAR_7 < 20)
                return FUNC_4(FUNC_0(VAR_0),
                                       "ignoring packet: IPv4 IHL (%zu bytes) "
                                       "smaller than minimum (20 bytes)",
                                       VAR_7);

        if (VAR_4 < VAR_7)
                return FUNC_4(FUNC_0(VAR_0),
                                       "ignoring packet: packet (%zu bytes) "
                                       "smaller than expected (%zu) by IP header",
                                       VAR_4, VAR_7);



        if (VAR_3->ip.protocol != VAR_1)
                return FUNC_4(FUNC_0(VAR_0),
                                       "ignoring packet: not UDP");

        if (VAR_4 < VAR_7 + FUNC_2(VAR_3->udp.len))
                return FUNC_4(FUNC_0(VAR_0),
                                       "ignoring packet: packet (%zu bytes) "
                                       "smaller than expected (%zu) by UDP header",
                                       VAR_4, VAR_7 + FUNC_2(VAR_3->udp.len));

        if (FUNC_2(VAR_3->udp.dest) != VAR_6)
                return FUNC_4(FUNC_0(VAR_0),
                                       "ignoring packet: to port %u, which "
                                       "is not the DHCP client port (%u)",
                                       FUNC_2(VAR_3->udp.dest), VAR_6);





        if (FUNC_3((uint8_t*)&VAR_3->ip, VAR_7))
                return FUNC_4(FUNC_0(VAR_0),
                                       "ignoring packet: invalid IP checksum");

        if (VAR_5 && VAR_3->udp.check) {
                VAR_3->ip.check = VAR_3->udp.len;
                VAR_3->ip.ttl = 0;

                if (FUNC_3((uint8_t*)&VAR_3->ip.ttl,
                                  FUNC_2(VAR_3->udp.len) + 12))
                        return FUNC_4(FUNC_0(VAR_0),
                                               "ignoring packet: invalid UDP checksum");
        }

        return 0;
}
