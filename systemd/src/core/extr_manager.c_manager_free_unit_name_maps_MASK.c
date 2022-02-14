
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ unit_cache_mtime; int unit_path_cache; void* unit_name_map; void* unit_id_map; } ;
typedef TYPE_1__ Manager ;


 void* FUNC_0 (void*) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(Manager *VAR_0) {
        VAR_0->unit_id_map = FUNC_0(VAR_0->unit_id_map);
        VAR_0->unit_name_map = FUNC_0(VAR_0->unit_name_map);
        VAR_0->unit_path_cache = FUNC_1(VAR_0->unit_path_cache);
        VAR_0->unit_cache_mtime = 0;
}
