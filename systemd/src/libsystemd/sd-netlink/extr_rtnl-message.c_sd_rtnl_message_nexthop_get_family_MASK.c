
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
struct nhmsg {int nh_family; } ;
struct TYPE_5__ {struct TYPE_5__ const* hdr; } ;
typedef TYPE_1__ sd_netlink_message ;


 int VAR_0 ;
 struct nhmsg* FUNC_0 (TYPE_1__ const*) ;
 int FUNC_1 (TYPE_1__ const*,int ) ;

int FUNC_2(const sd_netlink_message *VAR_1, uint8_t *VAR_2) {
        struct nhmsg *VAR_3;

        FUNC_1(VAR_1, -VAR_0);
        FUNC_1(VAR_1->hdr, -VAR_0);

        VAR_3 = FUNC_0(VAR_1->hdr);
        *VAR_2 = VAR_3->nh_family ;

        return 0;
}
