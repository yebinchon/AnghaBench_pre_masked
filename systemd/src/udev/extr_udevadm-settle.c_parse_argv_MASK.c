
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct option {char* member_0; char member_3; int * member_2; int const member_1; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int,char**,char*,struct option const*,int *) ;
 int FUNC_3 () ;
 int FUNC_4 (int,char*,int ) ;
 int FUNC_5 (int ,char*,int) ;

 int VAR_3 ;
 int FUNC_6 (int ,int *) ;
 int FUNC_7 () ;


__attribute__((used)) static int FUNC_8(int VAR_4, char *VAR_5[]) {
        static const struct option VAR_6[] = {
                { "timeout", 128, ((void*)0), 't' },
                { "exit-if-exists", 128, ((void*)0), 'E' },
                { "version", 129, ((void*)0), 'V' },
                { "help", 129, ((void*)0), 'h' },
                { "seq-start", 128, ((void*)0), 's' },
                { "seq-end", 128, ((void*)0), 'e' },
                { "quiet", 129, ((void*)0), 'q' },
                {}
        };

        int VAR_7, VAR_8;

        while ((VAR_7 = FUNC_2(VAR_4, VAR_5, "t:E:Vhs:e:q", VAR_6, ((void*)0))) >= 0) {
                switch (VAR_7) {
                case 't':
                        VAR_8 = FUNC_6(VAR_3, &VAR_2);
                        if (VAR_8 < 0)
                                return FUNC_4(VAR_8, "Failed to parse timeout value '%s': %m", VAR_3);
                        break;
                case 'E':
                        VAR_1 = VAR_3;
                        break;
                case 'V':
                        return FUNC_7();
                case 'h':
                        return FUNC_3();
                case 's':
                case 'e':
                case 'q':
                        return FUNC_5(FUNC_0(VAR_0),
                                              "Option -%c no longer supported.",
                                              VAR_7);
                case '?':
                        return -VAR_0;
                default:
                        FUNC_1("Unknown option.");
                }
        }

        return 1;
}
