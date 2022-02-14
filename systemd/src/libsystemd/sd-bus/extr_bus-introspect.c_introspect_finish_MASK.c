
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct introspect {int introspection; int f; } ;


 char* FUNC_0 (int ) ;
 int FUNC_1 (struct introspect*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*,int ) ;
 int FUNC_4 (int ) ;

int FUNC_5(struct introspect *VAR_0, char **VAR_1) {
        int VAR_2;

        FUNC_1(VAR_0);

        FUNC_3("</node>\n", VAR_0->f);

        VAR_2 = FUNC_2(VAR_0->f);
        if (VAR_2 < 0)
                return VAR_2;

        VAR_0->f = FUNC_4(VAR_0->f);
        *VAR_1 = FUNC_0(VAR_0->introspection);

        return 0;
}
