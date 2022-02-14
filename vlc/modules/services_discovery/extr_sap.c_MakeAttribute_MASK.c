
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {char* value; int name; } ;
typedef TYPE_1__ attribute_t ;


 int FUNC_0 (int ) ;
 TYPE_1__* FUNC_1 (scalar_t__) ;
 char* FUNC_2 (int ,char) ;
 int FUNC_3 (int ,char const*) ;
 scalar_t__ FUNC_4 (char const*) ;

__attribute__((used)) static inline attribute_t *FUNC_5 (const char *VAR_0)
{
    attribute_t *VAR_1 = FUNC_1 (sizeof (*VAR_1) + FUNC_4 (VAR_0) + 1);
    if (VAR_1 == ((void*)0))
        return ((void*)0);

    FUNC_3 (VAR_1->name, VAR_0);
    FUNC_0 (VAR_1->name);
    char *VAR_2 = FUNC_2 (VAR_1->name, ':');
    if (VAR_2 != ((void*)0))
    {
        *VAR_2++ = '\0';
        VAR_1->value = VAR_2;
    }
    else
        VAR_1->value = "";
    return VAR_1;
}
