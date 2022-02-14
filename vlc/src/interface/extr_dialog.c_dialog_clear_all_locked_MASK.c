
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int dialog_array; } ;
typedef TYPE_1__ vlc_dialog_provider ;
typedef int vlc_dialog_id ;


 int FUNC_0 (TYPE_1__*,int *) ;
 size_t FUNC_1 (int *) ;
 int * FUNC_2 (int *,size_t) ;

__attribute__((used)) static void
FUNC_3(vlc_dialog_provider *VAR_0)
{
    for (size_t VAR_1 = 0; VAR_1 < FUNC_1(&VAR_0->dialog_array); ++VAR_1)
    {
        vlc_dialog_id *VAR_2 =
            FUNC_2(&VAR_0->dialog_array, VAR_1);
        FUNC_0(VAR_0, VAR_2);
    }
}
