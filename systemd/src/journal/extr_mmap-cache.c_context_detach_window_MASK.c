
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_11__ {int in_unused; int keep_always; int contexts; } ;
typedef TYPE_2__ Window ;
struct TYPE_12__ {TYPE_1__* cache; int window; } ;
struct TYPE_10__ {TYPE_2__* last_unused; int unused; } ;
typedef TYPE_3__ Context ;


 int FUNC_0 (int ,int ,TYPE_2__*) ;
 int FUNC_1 (int ,int ,TYPE_3__*) ;
 TYPE_2__* FUNC_2 (int ) ;
 int FUNC_3 (TYPE_3__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_4 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_5(Context *VAR_2) {
        Window *VAR_3;

        FUNC_3(VAR_2);

        if (!VAR_2->window)
                return;

        VAR_3 = FUNC_2(VAR_2->window);
        FUNC_1(VAR_0, VAR_3->contexts, VAR_2);

        if (!VAR_3->contexts && !VAR_3->keep_always) {






                FUNC_0(VAR_1, VAR_2->cache->unused, VAR_3);
                if (!VAR_2->cache->last_unused)
                        VAR_2->cache->last_unused = VAR_3;

                VAR_3->in_unused = 1;

        }
}
