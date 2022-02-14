
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int force; int logger; } ;
typedef TYPE_1__ vlc_object_t ;
typedef int module_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_1__*,char*,int ) ;
 int FUNC_2 (TYPE_1__*,char*,int ) ;
 int * FUNC_3 (int ,char const*,char const*,int,int ,TYPE_1__*) ;

module_t *FUNC_4(vlc_object_t *VAR_2, const char *VAR_3, const char *VAR_4,
                      bool VAR_5)
{
    const bool VAR_6 = VAR_2->force;
    module_t *VAR_7 = FUNC_3(VAR_2->logger, VAR_3, VAR_4, VAR_5,
                                       VAR_1, VAR_2);
    if (VAR_7 != ((void*)0)) {
        FUNC_1(VAR_2, "module-name", VAR_0);
        FUNC_2(VAR_2, "module-name", FUNC_0(VAR_7));
    }

    VAR_2->force = VAR_6;
    return VAR_7;
}
