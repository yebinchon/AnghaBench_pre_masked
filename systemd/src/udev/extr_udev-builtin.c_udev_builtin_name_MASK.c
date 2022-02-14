
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t UdevBuiltinCommand ;
struct TYPE_2__ {char const* name; } ;


 size_t VAR_0 ;
 int FUNC_0 (int) ;
 TYPE_1__** VAR_1 ;

const char *FUNC_1(UdevBuiltinCommand VAR_2) {
        FUNC_0(VAR_2 >= 0 && VAR_2 < VAR_0);

        if (!VAR_1[VAR_2])
                return ((void*)0);

        return VAR_1[VAR_2]->name;
}
