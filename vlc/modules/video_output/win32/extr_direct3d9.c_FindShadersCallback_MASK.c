
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char** values; char** descs; int count; int member_2; int * member_1; int * member_0; } ;
typedef TYPE_1__ enum_context_t ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (char const*) ;

__attribute__((used)) static int FUNC_2(const char *VAR_0, char ***VAR_1, char ***VAR_2)
{
    FUNC_1(VAR_0);

    enum_context_t VAR_3 = { ((void*)0), ((void*)0), 0 };

    FUNC_0(&VAR_3);

    *VAR_1 = VAR_3.values;
    *VAR_2 = VAR_3.descs;
    return VAR_3.count;

}
