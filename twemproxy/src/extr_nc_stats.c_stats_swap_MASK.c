
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int elem; } ;
struct TYPE_5__ {int elem; } ;
struct stats {int aggregate; scalar_t__ updated; TYPE_1__ current; TYPE_3__ shadow; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,TYPE_3__*) ;
 int FUNC_1 (int ,char*,int ,int ) ;
 int VAR_1 ;
 int FUNC_2 (TYPE_1__*) ;

void
FUNC_3(struct stats *VAR_2)
{
    if (!VAR_1) {
        return;
    }

    if (VAR_2->aggregate == 1) {
        FUNC_1(VAR_0, "skip swap of current %p shadow %p as aggregator "
                  "is busy", VAR_2->current.elem, VAR_2->shadow.elem);
        return;
    }

    if (VAR_2->updated == 0) {
        FUNC_1(VAR_0, "skip swap of current %p shadow %p as there is "
                  "nothing new", VAR_2->current.elem, VAR_2->shadow.elem);
        return;
    }

    FUNC_1(VAR_0, "swap stats current %p shadow %p", VAR_2->current.elem,
              VAR_2->shadow.elem);

    FUNC_0(&VAR_2->current, &VAR_2->shadow);





    FUNC_2(&VAR_2->current);
    VAR_2->updated = 0;

    VAR_2->aggregate = 1;
}
