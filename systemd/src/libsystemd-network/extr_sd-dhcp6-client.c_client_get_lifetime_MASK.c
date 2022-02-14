
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_10__ {int lifetime_t2; int lifetime_t1; } ;
struct TYPE_11__ {TYPE_3__ ia_pd; scalar_t__ addresses; } ;
struct TYPE_8__ {int lifetime_t2; int lifetime_t1; } ;
struct TYPE_9__ {TYPE_1__ ia_na; scalar_t__ addresses; } ;
struct TYPE_12__ {TYPE_4__ pd; struct TYPE_12__* lease; int request; TYPE_2__ ia; } ;
typedef TYPE_5__ sd_dhcp6_client ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 int FUNC_1 (TYPE_5__*,int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(sd_dhcp6_client *VAR_4, uint32_t *VAR_5,
                               uint32_t *VAR_6) {
        FUNC_1(VAR_4, -VAR_2);
        FUNC_1(VAR_4->lease, -VAR_2);

        if (FUNC_0(VAR_4->request, VAR_0) && VAR_4->lease->ia.addresses) {
                *VAR_5 = FUNC_2(VAR_4->lease->ia.ia_na.lifetime_t1);
                *VAR_6 = FUNC_2(VAR_4->lease->ia.ia_na.lifetime_t2);

                return 0;
        }

        if (FUNC_0(VAR_4->request, VAR_1) && VAR_4->lease->pd.addresses) {
                *VAR_5 = FUNC_2(VAR_4->lease->pd.ia_pd.lifetime_t1);
                *VAR_6 = FUNC_2(VAR_4->lease->pd.ia_pd.lifetime_t2);

                return 0;
        }

        return -VAR_3;
}
