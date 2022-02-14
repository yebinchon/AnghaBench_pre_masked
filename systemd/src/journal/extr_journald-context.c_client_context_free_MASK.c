
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_14__ {int lru_index; scalar_t__ in_lru; int pid; } ;
struct TYPE_13__ {int client_contexts_lru; int client_contexts; } ;
typedef TYPE_1__ Server ;
typedef TYPE_2__ ClientContext ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (TYPE_1__*,TYPE_2__*) ;
 TYPE_2__* FUNC_4 (int ,int ) ;
 TYPE_2__* FUNC_5 (TYPE_2__*) ;
 scalar_t__ FUNC_6 (int ,TYPE_2__*,int *) ;

__attribute__((used)) static ClientContext* FUNC_7(Server *VAR_0, ClientContext *VAR_1) {
        FUNC_1(VAR_0);

        if (!VAR_1)
                return ((void*)0);

        FUNC_2(FUNC_4(VAR_0->client_contexts, FUNC_0(VAR_1->pid)) == VAR_1);

        if (VAR_1->in_lru)
                FUNC_2(FUNC_6(VAR_0->client_contexts_lru, VAR_1, &VAR_1->lru_index) >= 0);

        FUNC_3(VAR_0, VAR_1);

        return FUNC_5(VAR_1);
}
