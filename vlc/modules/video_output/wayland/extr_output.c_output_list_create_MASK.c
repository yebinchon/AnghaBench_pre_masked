
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vout_window_t ;
struct output_list {int outputs; int * owner; } ;


 struct output_list* FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int *) ;

struct output_list *FUNC_3(vout_window_t *VAR_0)
{
    struct output_list *VAR_1 = FUNC_0(sizeof (*VAR_1));
    if (FUNC_1(VAR_1 == ((void*)0)))
        return ((void*)0);

    VAR_1->owner = VAR_0;
    FUNC_2(&VAR_1->outputs);
    return VAR_1;
}
