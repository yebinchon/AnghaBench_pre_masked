
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct option {char* member_0; char member_3; int * member_2; int const member_1; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 char* VAR_1 ;
 char* VAR_2 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int,char**,char*,struct option const*,int *) ;
 int FUNC_3 () ;
 int FUNC_4 (int ,char*) ;

 int VAR_3 ;
 int FUNC_5 () ;

__attribute__((used)) static int FUNC_6(int VAR_4, char *VAR_5[]) {
        static const struct option VAR_6[] = {
                { "version", 128, ((void*)0), 'V' },
                { "help", 128, ((void*)0), 'h' },
                {}
        };

        int VAR_7;

        while ((VAR_7 = FUNC_2(VAR_4, VAR_5, "Vh", VAR_6, ((void*)0))) >= 0)
                switch (VAR_7) {
                case 'V':
                        return FUNC_5();
                case 'h':
                        return FUNC_3();
                case '?':
                        return -VAR_0;
                default:
                        FUNC_1("Unknown option");
                }

        VAR_1 = VAR_5[VAR_3++];
        if (!VAR_1)
                return FUNC_4(FUNC_0(VAR_0),
                                       "Command missing.");

        VAR_2 = VAR_5[VAR_3++];
        if (!VAR_2)
                return FUNC_4(FUNC_0(VAR_0),
                                       "syspath missing.");

        return 1;
}
