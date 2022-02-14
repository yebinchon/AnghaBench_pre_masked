
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int lock; TYPE_2__* opaques; } ;
typedef TYPE_1__ input_item_t ;
struct TYPE_6__ {struct TYPE_6__* next; void* value; int name; } ;
typedef TYPE_2__ input_item_opaque_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 TYPE_2__* FUNC_1 (int) ;
 int FUNC_2 (int ,char const*,size_t) ;
 size_t FUNC_3 (char const*) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

int FUNC_7(input_item_t *VAR_2, const char *VAR_3, void *VAR_4)
{
    FUNC_0(VAR_3 != ((void*)0));

    size_t VAR_5 = FUNC_3(VAR_3);
    input_item_opaque_t *VAR_6 = FUNC_1(sizeof (*VAR_6) + VAR_5);
    if (FUNC_4(VAR_6 == ((void*)0)))
        return VAR_0;

    FUNC_2(VAR_6->name, VAR_3, VAR_5 + 1);
    VAR_6->value = VAR_4;

    FUNC_5(&VAR_2->lock);
    VAR_6->next = VAR_2->opaques;
    VAR_2->opaques = VAR_6;
    FUNC_6(&VAR_2->lock);
    return VAR_1;
}
