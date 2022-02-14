
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {size_t count; void** descs; void** values; } ;
typedef TYPE_1__ enum_context_t ;
struct TYPE_5__ {int name; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 TYPE_2__* VAR_2 ;
 void* FUNC_0 (int ) ;
 void* FUNC_1 (void**,size_t) ;

__attribute__((used)) static void FUNC_2(enum_context_t *VAR_3)
{
    size_t VAR_4 = VAR_0;
    VAR_3->values = FUNC_1(VAR_3->values, (VAR_3->count + VAR_4 + 1) * sizeof(char *));
    VAR_3->descs = FUNC_1(VAR_3->descs, (VAR_3->count + VAR_4 + 1) * sizeof(char *));
    for (size_t VAR_5 = 0; VAR_5 < VAR_4; ++VAR_5) {
        VAR_3->values[VAR_3->count] = FUNC_0(VAR_2[VAR_5].name);
        VAR_3->descs[VAR_3->count] = FUNC_0(VAR_2[VAR_5].name);
        VAR_3->count++;
    }
    VAR_3->values[VAR_3->count] = FUNC_0(VAR_1);
    VAR_3->descs[VAR_3->count] = FUNC_0(VAR_1);
    VAR_3->count++;
}
