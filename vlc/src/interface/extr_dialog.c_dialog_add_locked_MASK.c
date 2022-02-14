
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int dialog_array; } ;
typedef TYPE_1__ vlc_dialog_provider ;
struct TYPE_9__ {int i_type; int i_refcount; int wait; int lock; } ;
typedef TYPE_2__ vlc_dialog_id ;
typedef enum dialog_type { ____Placeholder_dialog_type } dialog_type ;


 TYPE_2__* FUNC_0 (int,int) ;
 int FUNC_1 (TYPE_2__*) ;
 scalar_t__ FUNC_2 (int *,TYPE_2__*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static vlc_dialog_id *
FUNC_5(vlc_dialog_provider *VAR_0, enum dialog_type VAR_1)
{
    vlc_dialog_id *VAR_2 = FUNC_0(1, sizeof(*VAR_2));

    if (VAR_2 == ((void*)0))
        return ((void*)0);

    if(FUNC_2(&VAR_0->dialog_array, VAR_2))
    {
        FUNC_1(VAR_2);
        return ((void*)0);
    }

    FUNC_4(&VAR_2->lock);
    FUNC_3(&VAR_2->wait);

    VAR_2->i_type = VAR_1;
    VAR_2->i_refcount = 2;

    return VAR_2;
}
