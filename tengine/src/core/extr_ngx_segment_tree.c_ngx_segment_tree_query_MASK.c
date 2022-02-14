
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ (* cmp ) (int *,int *) ;int * segments; } ;
typedef TYPE_1__ ngx_segment_tree_t ;
typedef int ngx_segment_node_t ;
typedef size_t ngx_int_t ;


 scalar_t__ FUNC_0 (int *,int *) ;

ngx_segment_node_t *
FUNC_1(ngx_segment_tree_t *VAR_0, ngx_int_t VAR_1, ngx_int_t VAR_2,
    ngx_int_t VAR_3, ngx_int_t VAR_4, ngx_int_t VAR_5)
{
    ngx_int_t VAR_6, VAR_7;
    ngx_segment_node_t *VAR_8, *VAR_9;

    if (VAR_4 > VAR_5) {
        return &VAR_0->segments[0];
    }

    if (VAR_2 == VAR_4 && VAR_3 == VAR_5) {
        return &VAR_0->segments[VAR_1];
    }

    VAR_6 = VAR_1 << 1;
    VAR_7 = (VAR_2 + VAR_3) >> 1;

    if (VAR_5 <= VAR_7) {
        return FUNC_1(VAR_0, VAR_6, VAR_2, VAR_7, VAR_4, VAR_5);

    } else if (VAR_4 > VAR_7) {
        return FUNC_1(VAR_0, VAR_6 + 1, VAR_7 + 1, VAR_3, VAR_4, VAR_5);
    }

    VAR_8 = FUNC_1(VAR_0, VAR_6, VAR_2, VAR_7, VAR_4, VAR_7);
    VAR_9 = FUNC_1(VAR_0, VAR_6 + 1, VAR_7 + 1, VAR_3, VAR_7 + 1, VAR_5);

    if (VAR_0->cmp(VAR_8, VAR_9) > 0) {
        return VAR_8;
    }

    return VAR_9;
}
