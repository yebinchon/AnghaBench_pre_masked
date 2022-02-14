
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_1__ ;
typedef struct TYPE_12__ TYPE_10__ ;


struct TYPE_13__ {scalar_t__ state; int conditions; int mac; int ifname; int description; int filename; } ;
struct TYPE_12__ {int (* done ) (TYPE_1__*) ;} ;
typedef TYPE_1__ NetDev ;


 TYPE_10__* FUNC_0 (TYPE_1__*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 TYPE_1__* FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (TYPE_1__*) ;

__attribute__((used)) static NetDev *FUNC_8(NetDev *VAR_1) {
        FUNC_1(VAR_1);

        FUNC_5(VAR_1);

        FUNC_6(VAR_1);

        FUNC_3(VAR_1->filename);

        FUNC_3(VAR_1->description);
        FUNC_3(VAR_1->ifname);
        FUNC_3(VAR_1->mac);
        FUNC_2(VAR_1->conditions);
        if (VAR_1->state != VAR_0 &&
            FUNC_0(VAR_1) &&
            FUNC_0(VAR_1)->done)
                FUNC_0(VAR_1)->done(VAR_1);

        return FUNC_4(VAR_1);
}
