
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {char** data; } ;
typedef TYPE_1__ Context ;


 char* VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (TYPE_1__*) ;
 int VAR_3 ;
 scalar_t__ FUNC_2 (char const*) ;
 int FUNC_3 (char const*) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (char const*) ;

__attribute__((used)) static int FUNC_6(Context *VAR_4) {
        const char *VAR_5;
        const char *VAR_6;

        FUNC_1(VAR_4);

        VAR_5 = VAR_4->data[VAR_2];



        if (FUNC_2(VAR_5))
                VAR_6 = VAR_5;


        else if (!FUNC_3(VAR_4->data[VAR_1]))
                VAR_6 = VAR_4->data[VAR_1];


        else if (!FUNC_3(VAR_5))
                VAR_6 = VAR_5;


        else
                VAR_6 = VAR_0;

        if (FUNC_5(VAR_6) < 0)
                return -VAR_3;

        (void) FUNC_4(FUNC_0("hosts"));

        return 0;
}
