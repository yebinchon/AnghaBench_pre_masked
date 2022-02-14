
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct nlmsgerr {int error; } ;
struct TYPE_6__ {struct TYPE_6__ const* hdr; } ;
typedef TYPE_1__ sd_netlink_message ;


 int VAR_0 ;
 struct nlmsgerr* FUNC_0 (TYPE_1__ const*) ;
 int FUNC_1 (TYPE_1__ const*,int ) ;
 int FUNC_2 (TYPE_1__ const*) ;

int FUNC_3(const sd_netlink_message *VAR_1) {
        struct nlmsgerr *VAR_2;

        FUNC_1(VAR_1, -VAR_0);
        FUNC_1(VAR_1->hdr, -VAR_0);

        if (!FUNC_2(VAR_1))
                return 0;

        VAR_2 = FUNC_0(VAR_1->hdr);

        return VAR_2->error;
}
