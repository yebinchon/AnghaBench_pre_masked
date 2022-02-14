
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int input_thread_t ;
struct TYPE_4__ {size_t i_control; int lock_control; int wait_control; TYPE_2__* control; int * stats; int p_item; int * p_resource; int * p_es_out_display; int * p_renderer; } ;
typedef TYPE_1__ input_thread_private_t ;
struct TYPE_5__ {int param; int i_type; } ;
typedef TYPE_2__ input_control_t ;


 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char*) ;
 char* FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 TYPE_1__* FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,char*,char*) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int *) ;

__attribute__((used)) static void FUNC_14(input_thread_t *VAR_0)
{
    input_thread_private_t *VAR_1 = FUNC_6(VAR_0);


    char *VAR_2 = FUNC_4(VAR_1->p_item);
    FUNC_9(VAR_0, "destroying input for '%s'", VAR_2);
    FUNC_3(VAR_2);


    if (VAR_1->p_renderer != ((void*)0))
        FUNC_13(VAR_1->p_renderer);
    if (VAR_1->p_es_out_display != ((void*)0))
        FUNC_2(VAR_1->p_es_out_display);

    if (VAR_1->p_resource != ((void*)0))
        FUNC_7(VAR_1->p_resource);

    FUNC_5(VAR_1->p_item);

    if (VAR_1->stats != ((void*)0))
        FUNC_8(VAR_1->stats);

    for (size_t VAR_3 = 0; VAR_3 < VAR_1->i_control; VAR_3++)
    {
        input_control_t *VAR_4 = &VAR_1->control[VAR_3];

        FUNC_0(VAR_4->i_type, &VAR_4->param);
    }

    FUNC_10(&VAR_1->wait_control);
    FUNC_11(&VAR_1->lock_control);
    FUNC_12(FUNC_1(VAR_0));
}
