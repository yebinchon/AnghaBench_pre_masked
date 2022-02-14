
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct wl_registry {int dummy; } ;
struct output_list {int outputs; int owner; } ;
struct output_data {int name; int version; int node; int * wl_output; int owner; } ;


 int FUNC_0 (struct output_data*) ;
 struct output_data* FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *,int *,struct output_data*) ;
 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_5 (struct wl_registry*,int,int *,int) ;

int FUNC_6(struct output_list *VAR_2, struct wl_registry *VAR_3,
                  uint32_t VAR_4, uint32_t VAR_5)
{
    if (FUNC_2(VAR_2 == ((void*)0)))
        return -1;

    struct output_data *VAR_6 = FUNC_1(sizeof (*VAR_6));
    if (FUNC_2(VAR_6 == ((void*)0)))
        return -1;

    if (VAR_5 > 3)
        VAR_5 = 3;

    VAR_6->wl_output = FUNC_5(VAR_3, VAR_4, &VAR_1,
                                     VAR_5);
    if (FUNC_2(VAR_6->wl_output == ((void*)0)))
    {
        FUNC_0(VAR_6);
        return -1;
    }

    VAR_6->owner = VAR_2->owner;
    VAR_6->name = VAR_4;
    VAR_6->version = VAR_5;

    FUNC_4(VAR_6->wl_output, &VAR_0, VAR_6);
    FUNC_3(&VAR_2->outputs, &VAR_6->node);
    return 0;
}
