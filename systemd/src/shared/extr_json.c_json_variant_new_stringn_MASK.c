
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__* string; } ;
typedef TYPE_1__ JsonVariant ;


 int VAR_0 ;
 TYPE_1__** FUNC_0 (size_t,int ,size_t) ;
 TYPE_1__* VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (TYPE_1__**,int) ;
 int FUNC_2 (TYPE_1__**,int ,size_t) ;
 int FUNC_3 (TYPE_1__**) ;
 scalar_t__ FUNC_4 (char const*,int ,size_t) ;
 int FUNC_5 (scalar_t__*,char const*,size_t) ;
 size_t FUNC_6 (char const*) ;

int FUNC_7(JsonVariant **VAR_3, const char *VAR_4, size_t VAR_5) {
        JsonVariant *VAR_6;
        int VAR_7;

        FUNC_1(VAR_3, -VAR_0);
        if (!VAR_4) {
                FUNC_1(FUNC_0(VAR_5, 0, (size_t) -1), -VAR_0);
                return FUNC_3(VAR_3);
        }
        if (VAR_5 == (size_t) -1)
                VAR_5 = FUNC_6(VAR_4);
        else if (FUNC_4(VAR_4, 0, VAR_5))
                return -VAR_0;
        if (VAR_5 == 0) {
                *VAR_3 = VAR_1;
                return 0;
        }

        VAR_7 = FUNC_2(&VAR_6, VAR_2, VAR_5 + 1);
        if (VAR_7 < 0)
                return VAR_7;

        FUNC_5(VAR_6->string, VAR_4, VAR_5);
        VAR_6->string[VAR_5] = 0;

        *VAR_3 = VAR_6;
        return 0;
}
