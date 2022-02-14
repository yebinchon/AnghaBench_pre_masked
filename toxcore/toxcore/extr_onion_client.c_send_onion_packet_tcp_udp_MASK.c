
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint16_t ;
typedef int packet ;
struct TYPE_10__ {int uint32; } ;
struct TYPE_11__ {scalar_t__ family; TYPE_1__ ip4; } ;
struct TYPE_14__ {TYPE_2__ ip; } ;
struct TYPE_13__ {int c; int net; } ;
struct TYPE_12__ {TYPE_5__ ip_port1; } ;
typedef TYPE_3__ Onion_Path ;
typedef TYPE_4__ Onion_Client ;
typedef int IP_Port ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int *,int,TYPE_3__ const*,int ,int const*,int ) ;
 int FUNC_1 (int *,int,TYPE_3__ const*,int ,int const*,int ) ;
 int FUNC_2 (int ,int ,int *,int) ;
 int FUNC_3 (int ,TYPE_5__,int *,int) ;

__attribute__((used)) static int FUNC_4(const Onion_Client *VAR_4, const Onion_Path *VAR_5, IP_Port VAR_6,
                                     const uint8_t *VAR_7, uint16_t VAR_8)
{
    if (VAR_5->ip_port1.ip.family == VAR_0 || VAR_5->ip_port1.ip.family == VAR_1) {
        uint8_t VAR_9[VAR_2];
        int VAR_10 = FUNC_0(VAR_9, sizeof(VAR_9), VAR_5, VAR_6, VAR_7, VAR_8);

        if (VAR_10 == -1)
            return -1;

        if (FUNC_3(VAR_4->net, VAR_5->ip_port1, VAR_9, VAR_10) != VAR_10)
            return -1;

        return 0;
    } else if (VAR_5->ip_port1.ip.family == VAR_3) {
        uint8_t VAR_11[VAR_2];
        int VAR_12 = FUNC_1(VAR_11, sizeof(VAR_11), VAR_5, VAR_6, VAR_7, VAR_8);

        if (VAR_12 == -1)
            return -1;

        return FUNC_2(VAR_4->c, VAR_5->ip_port1.ip.ip4.uint32, VAR_11, VAR_12);
    } else {
        return -1;
    }
}
