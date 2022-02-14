
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {size_t size; TYPE_4__* data; } ;
struct TYPE_6__ {size_t size; TYPE_1__* data; } ;
struct callback_ctx {TYPE_3__ vec_children_removed; TYPE_2__ vec_children_added; } ;
struct TYPE_8__ {int first_media; } ;
struct TYPE_5__ {int first_media; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static inline void
FUNC_1(struct callback_ctx *VAR_0)
{
    for (size_t VAR_1 = 0; VAR_1 < VAR_0->vec_children_added.size; ++VAR_1)
        FUNC_0(VAR_0->vec_children_added.data[VAR_1].first_media);
    for (size_t VAR_2 = 0; VAR_2 < VAR_0->vec_children_removed.size; ++VAR_2)
        FUNC_0(VAR_0->vec_children_removed.data[VAR_2].first_media);
}
