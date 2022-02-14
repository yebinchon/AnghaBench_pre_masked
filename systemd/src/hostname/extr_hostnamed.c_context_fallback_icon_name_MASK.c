
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {char const** data; } ;
typedef TYPE_1__ Context ;


 size_t VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 char* FUNC_1 () ;
 int FUNC_2 (char const*) ;
 char* FUNC_3 (char*) ;
 char* FUNC_4 (char*,char const*) ;

__attribute__((used)) static char* FUNC_5(Context *VAR_1) {
        const char *VAR_2;

        FUNC_0(VAR_1);

        if (!FUNC_2(VAR_1->data[VAR_0]))
                return FUNC_4("computer-", VAR_1->data[VAR_0]);

        VAR_2 = FUNC_1();
        if (VAR_2)
                return FUNC_4("computer-", VAR_2);

        return FUNC_3("computer");
}
