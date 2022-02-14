
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t UdevBuiltinCommand ;
struct TYPE_2__ {int name; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int FUNC_0 (char const*) ;
 TYPE_1__** VAR_3 ;
 size_t FUNC_1 (char const*,int ) ;
 scalar_t__ FUNC_2 (int ,char const*,size_t) ;
 scalar_t__ FUNC_3 (char const*,int ) ;

UdevBuiltinCommand FUNC_4(const char *VAR_4) {
        UdevBuiltinCommand VAR_5;
        size_t VAR_6;

        FUNC_0(VAR_4);

        VAR_4 += FUNC_3(VAR_4, VAR_0);
        VAR_6 = FUNC_1(VAR_4, VAR_0);
        for (VAR_5 = 0; VAR_5 < VAR_2; VAR_5++)
                if (VAR_3[VAR_5] && FUNC_2(VAR_3[VAR_5]->name, VAR_4, VAR_6))
                        return VAR_5;

        return VAR_1;
}
