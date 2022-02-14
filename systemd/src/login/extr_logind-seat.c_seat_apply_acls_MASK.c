
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_13__ {TYPE_2__* active; int id; } ;
struct TYPE_12__ {TYPE_1__* user; } ;
struct TYPE_11__ {int uid; } ;
struct TYPE_10__ {TYPE_3__* user; } ;
struct TYPE_9__ {int uid; } ;
typedef TYPE_4__ Session ;
typedef TYPE_5__ Seat ;


 int FUNC_0 (TYPE_5__*) ;
 int FUNC_1 (int ,int,int,int ,int,int ) ;
 int FUNC_2 (int,char*) ;

int FUNC_3(Seat *VAR_0, Session *VAR_1) {
        int VAR_2;

        FUNC_0(VAR_0);

        VAR_2 = FUNC_1(VAR_0->id,
                            0,
                            !!VAR_1, VAR_1 ? VAR_1->user->uid : 0,
                            !!VAR_0->active, VAR_0->active ? VAR_0->active->user->uid : 0);

        if (VAR_2 < 0)
                return FUNC_2(VAR_2, "Failed to apply ACLs: %m");

        return 0;
}
