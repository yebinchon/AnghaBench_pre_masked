
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* fragment_path; scalar_t__ source_path; } ;
typedef TYPE_1__ Unit ;


 scalar_t__ FUNC_0 (char const*,char*) ;

const char *FUNC_1(Unit *VAR_0) {
        const char *VAR_1;




        VAR_1 = VAR_0->source_path ?: VAR_0->fragment_path;
        if (!VAR_1)
                return ((void*)0);


        if (FUNC_0(VAR_1, "/dev/null"))
                return ((void*)0);

        return VAR_1;
}
