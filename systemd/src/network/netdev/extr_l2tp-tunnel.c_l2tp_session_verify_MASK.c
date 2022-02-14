
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int line; int filename; } ;
struct TYPE_6__ {scalar_t__ session_id; scalar_t__ peer_session_id; TYPE_2__* section; int name; struct TYPE_6__* tunnel; } ;
typedef int NetDev ;
typedef TYPE_1__ L2tpSession ;


 int VAR_0 ;
 int * FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int *,int ,char*,int ,int ) ;
 scalar_t__ FUNC_4 (TYPE_2__*) ;

__attribute__((used)) static int FUNC_5(L2tpSession *VAR_1) {
        NetDev *VAR_2;

        FUNC_2(VAR_1);
        FUNC_2(VAR_1->tunnel);

        VAR_2 = FUNC_0(VAR_1->tunnel);

        if (FUNC_4(VAR_1->section))
                return -VAR_0;

        if (!VAR_1->name)
                return FUNC_3(VAR_2, FUNC_1(VAR_0),
                                              "%s: L2TP session without name configured. "
                                              "Ignoring [L2TPSession] section from line %u",
                                              VAR_1->section->filename, VAR_1->section->line);

        if (VAR_1->session_id == 0 || VAR_1->peer_session_id == 0)
                return FUNC_3(VAR_2, FUNC_1(VAR_0),
                                              "%s: L2TP session without session IDs configured. "
                                              "Ignoring [L2TPSession] section from line %u",
                                              VAR_1->section->filename, VAR_1->section->line);

        return 0;
}
