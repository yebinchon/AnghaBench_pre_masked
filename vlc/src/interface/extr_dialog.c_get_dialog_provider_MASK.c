
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ no_interact; } ;
typedef TYPE_1__ vlc_object_t ;
typedef int vlc_dialog_provider ;
struct TYPE_6__ {int * p_dialog_provider; } ;


 int FUNC_0 (int ) ;
 TYPE_3__* FUNC_1 (int ) ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 (TYPE_1__*) ;

__attribute__((used)) static inline vlc_dialog_provider *
FUNC_4(vlc_object_t *VAR_0, bool VAR_1)
{
    if ((VAR_1 && VAR_0->no_interact) || FUNC_2())
        return ((void*)0);

    vlc_dialog_provider *VAR_2 =
        FUNC_1(FUNC_3(VAR_0))->p_dialog_provider;
    FUNC_0(VAR_2 != ((void*)0));
    return VAR_2;
}
