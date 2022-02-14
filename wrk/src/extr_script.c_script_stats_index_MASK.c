
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int max; int min; } ;
typedef TYPE_1__ stats ;
typedef int lua_State ;


 TYPE_1__* FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int ) ;
 char* FUNC_3 (int *,int) ;
 int VAR_0 ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*,int ) ;
 int FUNC_6 (char*,char const*) ;

__attribute__((used)) static int FUNC_7(lua_State *VAR_1) {
    stats *VAR_2 = FUNC_0(VAR_1);
    const char *VAR_3 = FUNC_3(VAR_1, 2);
    if (!FUNC_6("min", VAR_3)) FUNC_2(VAR_1, VAR_2->min);
    if (!FUNC_6("max", VAR_3)) FUNC_2(VAR_1, VAR_2->max);
    if (!FUNC_6("mean", VAR_3)) FUNC_2(VAR_1, FUNC_4(VAR_2));
    if (!FUNC_6("stdev", VAR_3)) FUNC_2(VAR_1, FUNC_5(VAR_2, FUNC_4(VAR_2)));
    if (!FUNC_6("percentile", VAR_3)) {
        FUNC_1(VAR_1, VAR_0);
    }
    return 1;
}
