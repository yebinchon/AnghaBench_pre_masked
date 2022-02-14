
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char const**,int *,int ,char**,...) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char const*) ;
 int FUNC_4 (char*,char*) ;

__attribute__((used)) static void FUNC_5(void) {
        const char *VAR_1, *VAR_2;
        char *VAR_3, *VAR_4, *VAR_5;

        VAR_1 = VAR_2 = "foobar waldi piep";
        FUNC_0(FUNC_1(&VAR_1, ((void*)0), 0, &VAR_3, &VAR_4, &VAR_5, ((void*)0)) == 3);
        FUNC_0(FUNC_3(VAR_1));
        FUNC_0(FUNC_4(VAR_3, "foobar"));
        FUNC_0(FUNC_4(VAR_4, "waldi"));
        FUNC_0(FUNC_4(VAR_5, "piep"));
        FUNC_2(VAR_3);
        FUNC_2(VAR_4);
        FUNC_2(VAR_5);

        VAR_1 = VAR_2 = "'foobar' wa\"ld\"i   ";
        FUNC_0(FUNC_1(&VAR_1, ((void*)0), 0, &VAR_3, &VAR_4, &VAR_5, ((void*)0)) == 2);
        FUNC_0(FUNC_3(VAR_1));
        FUNC_0(FUNC_4(VAR_3, "'foobar'"));
        FUNC_0(FUNC_4(VAR_4, "wa\"ld\"i"));
        FUNC_0(FUNC_4(VAR_5, ((void*)0)));
        FUNC_2(VAR_3);
        FUNC_2(VAR_4);

        VAR_1 = VAR_2 = "'foobar' wa\"ld\"i   ";
        FUNC_0(FUNC_1(&VAR_1, ((void*)0), VAR_0, &VAR_3, &VAR_4, &VAR_5, ((void*)0)) == 2);
        FUNC_0(FUNC_3(VAR_1));
        FUNC_0(FUNC_4(VAR_3, "foobar"));
        FUNC_0(FUNC_4(VAR_4, "waldi"));
        FUNC_0(FUNC_4(VAR_5, ((void*)0)));
        FUNC_2(VAR_3);
        FUNC_2(VAR_4);

        VAR_1 = VAR_2 = "";
        FUNC_0(FUNC_1(&VAR_1, ((void*)0), 0, &VAR_3, &VAR_4, &VAR_5, ((void*)0)) == 0);
        FUNC_0(FUNC_3(VAR_1));
        FUNC_0(FUNC_4(VAR_3, ((void*)0)));
        FUNC_0(FUNC_4(VAR_4, ((void*)0)));
        FUNC_0(FUNC_4(VAR_5, ((void*)0)));

        VAR_1 = VAR_2 = "  ";
        FUNC_0(FUNC_1(&VAR_1, ((void*)0), 0, &VAR_3, &VAR_4, &VAR_5, ((void*)0)) == 0);
        FUNC_0(FUNC_3(VAR_1));
        FUNC_0(FUNC_4(VAR_3, ((void*)0)));
        FUNC_0(FUNC_4(VAR_4, ((void*)0)));
        FUNC_0(FUNC_4(VAR_5, ((void*)0)));

        VAR_1 = VAR_2 = "foobar";
        FUNC_0(FUNC_1(&VAR_1, ((void*)0), 0, ((void*)0)) == 0);
        FUNC_0(VAR_1 == VAR_2);

        VAR_1 = VAR_2 = "foobar waldi";
        FUNC_0(FUNC_1(&VAR_1, ((void*)0), 0, &VAR_3, ((void*)0)) == 1);
        FUNC_0(VAR_1 == VAR_2+7);
        FUNC_0(FUNC_4(VAR_3, "foobar"));
        FUNC_2(VAR_3);

        VAR_1 = VAR_2 = "     foobar    ";
        FUNC_0(FUNC_1(&VAR_1, ((void*)0), 0, &VAR_3, ((void*)0)) == 1);
        FUNC_0(FUNC_3(VAR_1));
        FUNC_0(FUNC_4(VAR_3, "foobar"));
        FUNC_2(VAR_3);
}
