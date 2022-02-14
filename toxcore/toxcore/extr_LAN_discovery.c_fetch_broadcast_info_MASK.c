
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint16_t ;
struct sockaddr_in {int sin_addr; } ;
struct TYPE_6__ {scalar_t__ sa_family; } ;
struct ifreq {char* ifc_buf; int ifc_len; TYPE_1__ ifr_broadaddr; } ;
struct ifconf {char* ifc_buf; int ifc_len; TYPE_1__ ifr_broadaddr; } ;
typedef int sock_t ;
typedef int i_faces ;
struct TYPE_7__ {scalar_t__ uint32; int in_addr; } ;
struct TYPE_8__ {TYPE_2__ ip4; scalar_t__ family; } ;
struct TYPE_9__ {int port; TYPE_3__ ip; } ;
typedef TYPE_4__ IP_Port ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_4__* VAR_6 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ,int ,struct ifreq*) ;
 int FUNC_2 (struct ifreq*,int ,int) ;
 int FUNC_3 (scalar_t__,int ,int ) ;

__attribute__((used)) static void FUNC_4(uint16_t VAR_7)
{




    VAR_5 = 0;
    sock_t VAR_8 = 0;

    if ((VAR_8 = FUNC_3(VAR_0, VAR_4, 0)) < 0)
        return;


    struct ifreq VAR_9[VAR_1];
    FUNC_2(VAR_9, 0, sizeof(struct ifreq) * VAR_1);

    struct ifconf VAR_10;
    VAR_10.ifc_buf = (char *)VAR_9;
    VAR_10.ifc_len = sizeof(VAR_9);

    if (FUNC_1(VAR_8, VAR_3, &VAR_10) < 0) {
        FUNC_0(VAR_8);
        return;
    }






    int VAR_11, VAR_12 = VAR_10.ifc_len / sizeof(struct ifreq);

    for (VAR_11 = 0; VAR_11 < VAR_12; VAR_11++) {

        if (FUNC_1(VAR_8, VAR_2, &VAR_9[VAR_11]) < 0)
            continue;


        if (VAR_9[VAR_11].ifr_broadaddr.sa_family != VAR_0)
            continue;

        struct sockaddr_in *VAR_13 = (struct sockaddr_in *)&VAR_9[VAR_11].ifr_broadaddr;

        if (VAR_5 >= VAR_1) {
            FUNC_0(VAR_8);
            return;
        }

        IP_Port *VAR_14 = &VAR_6[VAR_5];
        VAR_14->ip.family = VAR_0;
        VAR_14->ip.ip4.in_addr = VAR_13->sin_addr;

        if (VAR_14->ip.ip4.uint32 == 0) {
            continue;
        }

        VAR_14->port = VAR_7;
        VAR_5++;
    }

    FUNC_0(VAR_8);
}
