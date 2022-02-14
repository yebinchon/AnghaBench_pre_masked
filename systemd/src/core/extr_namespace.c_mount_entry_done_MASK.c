
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {void* options_malloc; void* source_malloc; void* path_malloc; } ;
typedef TYPE_1__ MountEntry ;


 int FUNC_0 (TYPE_1__*) ;
 void* FUNC_1 (void*) ;

__attribute__((used)) static void FUNC_2(MountEntry *VAR_0) {
        FUNC_0(VAR_0);

        VAR_0->path_malloc = FUNC_1(VAR_0->path_malloc);
        VAR_0->source_malloc = FUNC_1(VAR_0->source_malloc);
        VAR_0->options_malloc = FUNC_1(VAR_0->options_malloc);
}
