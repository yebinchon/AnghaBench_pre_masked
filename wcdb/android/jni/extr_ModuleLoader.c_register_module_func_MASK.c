
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {char const* name; void* func; } ;
typedef TYPE_1__ wcdb_moddef_t ;


 TYPE_1__** VAR_0 ;
 size_t* VAR_1 ;
 size_t* VAR_2 ;
 void* FUNC_0 (TYPE_1__*,size_t) ;

void FUNC_1(const char *VAR_3, void *VAR_4, unsigned VAR_5)
{
    if (VAR_2[VAR_5] == VAR_1[VAR_5]) {
        size_t VAR_6 =
            VAR_1[VAR_5] ? VAR_1[VAR_5] * 2 : 16;
        void *VAR_7 = FUNC_0(VAR_0[VAR_5], VAR_6 * sizeof(wcdb_moddef_t));
        if (!VAR_7)
            *(char *) (0xdeadbeaf) = 0;

        VAR_0[VAR_5] = (wcdb_moddef_t *) VAR_7;
        VAR_1[VAR_5] = VAR_6;
    }

    wcdb_moddef_t *VAR_8 = VAR_0[VAR_5] + (VAR_2[VAR_5]++);
    VAR_8->name = VAR_3;
    VAR_8->func = VAR_4;
}
