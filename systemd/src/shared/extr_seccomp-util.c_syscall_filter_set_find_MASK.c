
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int name; } ;
typedef TYPE_1__ SyscallFilterSet ;


 unsigned int VAR_0 ;
 scalar_t__ FUNC_0 (char const*) ;
 scalar_t__ FUNC_1 (int ,char const*) ;
 TYPE_1__ const* VAR_1 ;

const SyscallFilterSet *FUNC_2(const char *VAR_2) {
        unsigned VAR_3;

        if (FUNC_0(VAR_2) || VAR_2[0] != '@')
                return ((void*)0);

        for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++)
                if (FUNC_1(VAR_1[VAR_3].name, VAR_2))
                        return VAR_1 + VAR_3;

        return ((void*)0);
}
