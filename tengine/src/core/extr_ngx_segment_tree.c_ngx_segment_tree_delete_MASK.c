
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ (* cmp ) (TYPE_2__*,TYPE_2__*) ;TYPE_2__* segments; int extreme; } ;
typedef TYPE_1__ ngx_segment_tree_t ;
typedef size_t ngx_int_t ;
struct TYPE_8__ {int key; } ;


 int FUNC_0 (TYPE_2__*,TYPE_2__*) ;
 scalar_t__ FUNC_1 (TYPE_2__*,TYPE_2__*) ;

void
FUNC_2(ngx_segment_tree_t *VAR_0, ngx_int_t VAR_1,
    ngx_int_t VAR_2, ngx_int_t VAR_3, ngx_int_t VAR_4)
{
    ngx_int_t VAR_5, VAR_6;

    if (VAR_2 == VAR_3 && VAR_2 == VAR_4) {
        VAR_0->segments[VAR_1].key = VAR_0->extreme;
        return;
    }

    VAR_5 = VAR_1 << 1;
    VAR_6 = (VAR_2 + VAR_3) >> 1;

    if (VAR_4 <= VAR_6) {
        FUNC_2(VAR_0, VAR_5, VAR_2, VAR_6, VAR_4);

    } else {
        FUNC_2(VAR_0, VAR_5 + 1, VAR_6 + 1, VAR_3, VAR_4);
    }

    if (VAR_0->cmp(&VAR_0->segments[VAR_5], &VAR_0->segments[VAR_5 + 1]) > 0) {
        FUNC_0(&VAR_0->segments[VAR_1], &VAR_0->segments[VAR_5]);

    } else {
        FUNC_0(&VAR_0->segments[VAR_1],
                              &VAR_0->segments[VAR_5 + 1]);
    }
}
