
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {unsigned int a_val; } ;
struct TYPE_8__ {TYPE_1__ a_un; } ;
typedef TYPE_2__ Elf32_auxv_t ;


 int FUNC_0 (char*,TYPE_2__*,unsigned int const,unsigned int const) ;
 TYPE_2__* FUNC_1 (TYPE_2__*,unsigned int const) ;

__attribute__((used)) static void



FUNC_2(Elf32_auxv_t *VAR_0, unsigned const VAR_1, unsigned const VAR_2)
{
    FUNC_0("auxv_up  %%p %%x %%x\\n",VAR_0,VAR_1,VAR_2);
    VAR_0 = FUNC_1(VAR_0, VAR_1);
    if (VAR_0) {
        VAR_0->a_un.a_val = VAR_2;
    }
}
