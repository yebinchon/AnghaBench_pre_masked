
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_11__ {int in_unused; int contexts; struct TYPE_11__* window; struct TYPE_11__* unused_prev; TYPE_1__* cache; } ;
typedef TYPE_2__ Window ;
struct TYPE_10__ {TYPE_2__* last_unused; int unused; } ;
typedef TYPE_2__ Context ;


 int FUNC_0 (int ,int ,TYPE_2__*) ;
 int FUNC_1 (int ,int ,TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*) ;
 int VAR_0 ;
 int FUNC_3 (TYPE_2__*) ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_4(Context *VAR_2, Window *VAR_3) {
        FUNC_2(VAR_2);
        FUNC_2(VAR_3);

        if (VAR_2->window == VAR_3)
                return;

        FUNC_3(VAR_2);

        if (VAR_3->in_unused) {

                FUNC_1(VAR_1, VAR_2->cache->unused, VAR_3);
                if (VAR_2->cache->last_unused == VAR_3)
                        VAR_2->cache->last_unused = VAR_3->unused_prev;

                VAR_3->in_unused = 0;
        }

        VAR_2->window = VAR_3;
        FUNC_0(VAR_0, VAR_3->contexts, VAR_2);
}
