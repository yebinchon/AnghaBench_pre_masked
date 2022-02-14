
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {void* temporary_dir; void* root_dir; void* runtime_control; void* persistent_control; void* transient; void* generator_late; void* generator_early; void* generator; void* runtime_attached; void* persistent_attached; void* runtime_config; void* persistent_config; int search_path; } ;
typedef TYPE_1__ LookupPaths ;


 void* FUNC_0 (void*) ;
 int FUNC_1 (int ) ;

void FUNC_2(LookupPaths *VAR_0) {
        if (!VAR_0)
                return;

        VAR_0->search_path = FUNC_1(VAR_0->search_path);

        VAR_0->persistent_config = FUNC_0(VAR_0->persistent_config);
        VAR_0->runtime_config = FUNC_0(VAR_0->runtime_config);

        VAR_0->persistent_attached = FUNC_0(VAR_0->persistent_attached);
        VAR_0->runtime_attached = FUNC_0(VAR_0->runtime_attached);

        VAR_0->generator = FUNC_0(VAR_0->generator);
        VAR_0->generator_early = FUNC_0(VAR_0->generator_early);
        VAR_0->generator_late = FUNC_0(VAR_0->generator_late);

        VAR_0->transient = FUNC_0(VAR_0->transient);

        VAR_0->persistent_control = FUNC_0(VAR_0->persistent_control);
        VAR_0->runtime_control = FUNC_0(VAR_0->runtime_control);

        VAR_0->root_dir = FUNC_0(VAR_0->root_dir);
        VAR_0->temporary_dir = FUNC_0(VAR_0->temporary_dir);
}
