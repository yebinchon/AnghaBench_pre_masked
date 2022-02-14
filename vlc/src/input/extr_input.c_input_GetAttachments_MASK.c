
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int input_thread_t ;
struct TYPE_5__ {int i_attachment; TYPE_1__* p_item; int * attachment; } ;
typedef TYPE_2__ input_thread_private_t ;
typedef int input_attachment_t ;
struct TYPE_4__ {int lock; } ;


 TYPE_2__* FUNC_0 (int *) ;
 int ** FUNC_1 (int,int) ;
 int * FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

int FUNC_5(input_thread_t *VAR_0,
                         input_attachment_t ***VAR_1)
{
    input_thread_private_t *VAR_2 = FUNC_0(VAR_0);

    FUNC_3(&VAR_2->p_item->lock);
    int VAR_3 = VAR_2->i_attachment;
    if (VAR_3 <= 0)
    {
        FUNC_4(&VAR_2->p_item->lock);
        *VAR_1 = ((void*)0);
        return 0;
    }

    *VAR_1 = FUNC_1(VAR_3, sizeof(input_attachment_t*));
    if (!*VAR_1)
        return -1;

    for (int VAR_4 = 0; VAR_4 < VAR_3; VAR_4++)
        (*VAR_1)[VAR_4] = FUNC_2(VAR_2->attachment[VAR_4]);

    FUNC_4(&VAR_2->p_item->lock);
    return VAR_3;
}
