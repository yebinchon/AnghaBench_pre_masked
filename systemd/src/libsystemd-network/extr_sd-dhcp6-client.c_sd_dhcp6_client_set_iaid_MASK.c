
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_11__ {void* id; } ;
struct TYPE_12__ {TYPE_3__ ia_pd; } ;
struct TYPE_9__ {void* id; } ;
struct TYPE_10__ {TYPE_1__ ia_na; } ;
struct TYPE_13__ {int iaid_set; TYPE_4__ ia_pd; TYPE_2__ ia_na; int state; } ;
typedef TYPE_5__ sd_dhcp6_client ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_5__* FUNC_0 (int ,int ) ;
 int FUNC_1 (TYPE_5__*,int ) ;
 void* FUNC_2 (int ) ;

int FUNC_3(sd_dhcp6_client *VAR_3, uint32_t VAR_4) {
        FUNC_1(VAR_3, -VAR_2);
        FUNC_1(FUNC_0(VAR_3->state, VAR_0), -VAR_1);

        VAR_3->ia_na.ia_na.id = FUNC_2(VAR_4);
        VAR_3->ia_pd.ia_pd.id = FUNC_2(VAR_4);
        VAR_3->iaid_set = 1;

        return 0;
}
