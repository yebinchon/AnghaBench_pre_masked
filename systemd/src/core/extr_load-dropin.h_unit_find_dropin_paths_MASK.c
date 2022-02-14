
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int names; TYPE_2__* manager; } ;
typedef TYPE_3__ Unit ;
struct TYPE_6__ {int search_path; } ;
struct TYPE_7__ {int unit_path_cache; TYPE_1__ lookup_paths; } ;


 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (int *,int ,int ,char*,char*,int ,char***) ;

__attribute__((used)) static inline int FUNC_2(Unit *VAR_0, char ***VAR_1) {
        FUNC_0(VAR_0);

        return FUNC_1(((void*)0),
                                           VAR_0->manager->lookup_paths.search_path,
                                           VAR_0->manager->unit_path_cache,
                                           ".d", ".conf",
                                           VAR_0->names,
                                           VAR_1);
}
