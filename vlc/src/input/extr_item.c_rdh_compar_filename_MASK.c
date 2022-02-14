
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int psz_name; } ;
typedef TYPE_1__ input_item_t ;
struct TYPE_6__ {TYPE_1__* p_item; } ;
typedef TYPE_2__ input_item_node_t ;


 int FUNC_0 (TYPE_1__*,TYPE_1__*) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static int FUNC_2(const void *VAR_0, const void *VAR_1)
{
    input_item_node_t *const *VAR_2 = VAR_0, *const *VAR_3 = VAR_1;
    input_item_t *VAR_4 = (*VAR_2)->p_item, *VAR_5 = (*VAR_3)->p_item;

    int VAR_6 = FUNC_0(VAR_4, VAR_5);
    if (VAR_6 != 0)
        return VAR_6;

    return FUNC_1(VAR_4->psz_name, VAR_5->psz_name);
}
