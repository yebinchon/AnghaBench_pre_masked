
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {char const* name; } ;
typedef TYPE_1__ NamingScheme ;


 size_t FUNC_0 (TYPE_1__ const*) ;
 TYPE_1__ const* VAR_0 ;
 scalar_t__ FUNC_1 (char const*,char const*) ;

__attribute__((used)) static const NamingScheme* FUNC_2(const char *VAR_1) {
        size_t VAR_2;

        if (FUNC_1(VAR_1, "latest"))
                return VAR_0 + FUNC_0(VAR_0) - 1;

        for (VAR_2 = 0; VAR_2 < FUNC_0(VAR_0); VAR_2++)
                if (FUNC_1(VAR_0[VAR_2].name, VAR_1))
                        return VAR_0 + VAR_2;

        return ((void*)0);
}
