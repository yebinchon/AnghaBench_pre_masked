
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct stats_server {int metric; } ;
struct TYPE_3__ {int elem; } ;
struct stats_pool {TYPE_1__ server; int metric; } ;
struct stats {scalar_t__ aggregate; TYPE_1__ sum; TYPE_1__ shadow; } ;


 int VAR_0 ;
 void* FUNC_0 (TYPE_1__*,scalar_t__) ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ,char*,int ,int ) ;
 int FUNC_3 (int *,int *) ;

__attribute__((used)) static void
FUNC_4(struct stats *VAR_1)
{
    uint32_t VAR_2;

    if (VAR_1->aggregate == 0) {
        FUNC_2(VAR_0, "skip aggregate of shadow %p to sum %p as "
                  "generator is slow", VAR_1->shadow.elem, VAR_1->sum.elem);
        return;
    }

    FUNC_2(VAR_0, "aggregate stats shadow %p to sum %p", VAR_1->shadow.elem,
              VAR_1->sum.elem);

    for (VAR_2 = 0; VAR_2 < FUNC_1(&VAR_1->shadow); VAR_2++) {
        struct stats_pool *VAR_3, *VAR_4;
        uint32_t VAR_5;

        VAR_3 = FUNC_0(&VAR_1->shadow, VAR_2);
        VAR_4 = FUNC_0(&VAR_1->sum, VAR_2);
        FUNC_3(&VAR_4->metric, &VAR_3->metric);

        for (VAR_5 = 0; VAR_5 < FUNC_1(&VAR_3->server); VAR_5++) {
            struct stats_server *VAR_6, *VAR_7;

            VAR_6 = FUNC_0(&VAR_3->server, VAR_5);
            VAR_7 = FUNC_0(&VAR_4->server, VAR_5);
            FUNC_3(&VAR_7->metric, &VAR_6->metric);
        }
    }

    VAR_1->aggregate = 0;
}
