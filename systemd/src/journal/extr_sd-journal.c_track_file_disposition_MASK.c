
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int has_runtime_files; int has_persistent_files; int path; } ;
typedef TYPE_1__ sd_journal ;
typedef TYPE_1__ JournalFile ;


 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 (TYPE_1__*,int ,char*) ;

__attribute__((used)) static void FUNC_2(sd_journal *VAR_0, JournalFile *VAR_1) {
        FUNC_0(VAR_0);
        FUNC_0(VAR_1);

        if (!VAR_0->has_runtime_files && FUNC_1(VAR_0, VAR_1->path, "/run"))
                VAR_0->has_runtime_files = 1;
        else if (!VAR_0->has_persistent_files && FUNC_1(VAR_0, VAR_1->path, "/var"))
                VAR_0->has_persistent_files = 1;
}
