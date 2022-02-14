
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint16_t ;
struct sockaddr_storage {int dummy; } ;
struct sockaddr_in6 {scalar_t__ sin6_scope_id; scalar_t__ sin6_flowinfo; int sin6_addr; int sin6_port; scalar_t__ sin6_family; } ;
struct sockaddr_in {int sin_port; int sin_addr; scalar_t__ sin_family; } ;
struct sockaddr {int dummy; } ;
struct TYPE_15__ {int in6_addr; scalar_t__* uint32; } ;
struct TYPE_11__ {int in6_addr; } ;
struct TYPE_10__ {int in_addr; scalar_t__ uint32; } ;
struct TYPE_12__ {scalar_t__ family; TYPE_2__ ip6; TYPE_1__ ip4; } ;
struct TYPE_14__ {TYPE_3__ ip; int port; } ;
struct TYPE_13__ {scalar_t__ family; int sock; } ;
typedef TYPE_4__ Networking_Core ;
typedef TYPE_5__ IP_Port ;
typedef TYPE_6__ IP6 ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (char*,int const*,int ,TYPE_5__,int) ;
 int FUNC_2 (int ,char*,int ,int ,struct sockaddr*,size_t) ;

int FUNC_3(Networking_Core *VAR_2, IP_Port VAR_3, const uint8_t *VAR_4, uint16_t VAR_5)
{
    if (VAR_2->family == 0)
        return -1;


    if ((VAR_2->family == VAR_0) && (VAR_3.ip.family != VAR_0))
        return -1;

    struct sockaddr_storage VAR_6;
    size_t VAR_7 = 0;

    if (VAR_3.ip.family == VAR_0) {
        if (VAR_2->family == VAR_1) {

            struct sockaddr_in6 *VAR_8 = (struct sockaddr_in6 *)&VAR_6;

            VAR_7 = sizeof(struct sockaddr_in6);
            VAR_8->sin6_family = VAR_1;
            VAR_8->sin6_port = VAR_3.port;



            IP6 VAR_9;

            VAR_9[0] = 0;
            VAR_9[1] = 0;
            VAR_9[2] = FUNC_0(0xFFFF);
            VAR_9[3] = VAR_3.ip.ip4.uint32;
            VAR_8->sin6_addr = VAR_9;

            VAR_8->sin6_flowinfo = 0;
            VAR_8->sin6_scope_id = 0;
        } else {
            struct sockaddr_in *VAR_10 = (struct sockaddr_in *)&VAR_6;

            VAR_7 = sizeof(struct sockaddr_in);
            VAR_10->sin_family = VAR_0;
            VAR_10->sin_addr = VAR_3.ip.ip4.in_addr;
            VAR_10->sin_port = VAR_3.port;
        }
    } else if (VAR_3.ip.family == VAR_1) {
        struct sockaddr_in6 *VAR_11 = (struct sockaddr_in6 *)&VAR_6;

        VAR_7 = sizeof(struct sockaddr_in6);
        VAR_11->sin6_family = VAR_1;
        VAR_11->sin6_port = VAR_3.port;
        VAR_11->sin6_addr = VAR_3.ip.ip6.in6_addr;

        VAR_11->sin6_flowinfo = 0;
        VAR_11->sin6_scope_id = 0;
    } else {

        return -1;
    }

    int VAR_12 = FUNC_2(VAR_2->sock, (char *) VAR_4, VAR_5, 0, (struct sockaddr *)&VAR_6, VAR_7);

    FUNC_1("O=>", VAR_4, VAR_5, VAR_3, VAR_12);

    return VAR_12;
}
