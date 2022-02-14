
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int vlc_object_t ;
struct TYPE_5__ {int lock; } ;
typedef TYPE_1__ vlc_dialog_provider ;
typedef int vlc_dialog_id ;


 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*,int *) ;
 int FUNC_2 (TYPE_1__*,int *) ;
 TYPE_1__* FUNC_3 (int *,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

void
FUNC_6(vlc_object_t *VAR_0, vlc_dialog_id *VAR_1)
{
    FUNC_0(VAR_0 != ((void*)0) && VAR_1 != ((void*)0));
    vlc_dialog_provider *VAR_2 = FUNC_3(VAR_0, 0);

    FUNC_4(&VAR_2->lock);
    FUNC_1(VAR_2, VAR_1);
    FUNC_2(VAR_2, VAR_1);
    FUNC_5(&VAR_2->lock);
}
