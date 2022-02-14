
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int vlc_object_t ;
struct TYPE_4__ {int (* deactivate ) (int *) ;} ;
typedef TYPE_1__ module_t ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int *,char*,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,char*) ;
 int FUNC_4 (int *) ;

void FUNC_5(vlc_object_t *VAR_0, module_t *VAR_1)
{
    FUNC_1(VAR_0, "removing module \"%s\"", FUNC_0(VAR_1));
    FUNC_3(VAR_0, "module-name");

    if (VAR_1->deactivate != ((void*)0))
        VAR_1->deactivate(VAR_0);

    FUNC_4(VAR_0);
}
