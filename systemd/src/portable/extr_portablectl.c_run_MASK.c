
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* member_0; int const member_1; int const member_2; int member_4; int member_3; } ;
typedef TYPE_1__ Verb ;






 int FUNC_0 (int,char**,TYPE_1__ const*,int *) ;




 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (int) ;
 int FUNC_4 (int,char**) ;




__attribute__((used)) static int FUNC_5(int VAR_0, char *VAR_1[]) {
        static const Verb VAR_2[] = {
                { "help", 138, 138, 0, 134 },
                { "list", 138, 1, 137, 131 },
                { "attach", 2, 138, 0, 136 },
                { "detach", 2, 2, 0, 135 },
                { "inspect", 2, 138, 0, 133 },
                { "is-attached", 2, 2, 0, 132 },
                { "read-only", 2, 3, 0, 130 },
                { "remove", 2, 138, 0, 129 },
                { "set-limit", 3, 3, 0, 128 },
                {}
        };

        int VAR_3;

        FUNC_3(1);
        FUNC_2();
        FUNC_1();

        VAR_3 = FUNC_4(VAR_0, VAR_1);
        if (VAR_3 <= 0)
                return VAR_3;

        return FUNC_0(VAR_0, VAR_1, VAR_2, ((void*)0));
}
