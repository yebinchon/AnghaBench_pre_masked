
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_11__ {scalar_t__ type; scalar_t__ raw_data_len; } ;
struct TYPE_10__ {int dhcp_client_identifier; struct TYPE_10__* network; struct TYPE_10__* manager; } ;
typedef TYPE_1__ Link ;
typedef TYPE_2__ DUID ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (TYPE_1__*) ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;
 scalar_t__ FUNC_3 (TYPE_1__*) ;
 TYPE_2__* FUNC_4 (TYPE_1__*) ;
 scalar_t__ FUNC_5 (TYPE_1__*) ;

__attribute__((used)) static bool FUNC_6(Link *VAR_3) {
        const DUID *VAR_4;

        FUNC_1(VAR_3);
        FUNC_1(VAR_3->manager);
        FUNC_1(VAR_3->network);

        VAR_4 = FUNC_4(VAR_3);
        if (VAR_4->type != VAR_2 || VAR_4->raw_data_len != 0)
                return 0;

        if (FUNC_2(VAR_3) && FUNC_0(VAR_3->network->dhcp_client_identifier, VAR_0, VAR_1))
                return 1;

        if (FUNC_3(VAR_3) || FUNC_5(VAR_3))
                return 1;

        return 0;
}
