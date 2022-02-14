
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct option {char* member_0; char member_3; int * member_2; int const member_1; } ;


 int VAR_0 ;
 char* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int,char**,char*,struct option const*,int *) ;
 int FUNC_2 (int ) ;

 char* VAR_4 ;
 int FUNC_3 (char*,...) ;


__attribute__((used)) static int FUNC_4(int VAR_5, char *VAR_6[], const char **VAR_7, const char **VAR_8) {
        static const struct option VAR_9[] = {
                { "syspath", 128, ((void*)0), 'p' },
                { "subsystem", 128, ((void*)0), 's' },
                { "debug", 129, ((void*)0), 'd' },
                { "help", 129, ((void*)0), 'h' },
                { "version", 129, ((void*)0), 'V' },
                { "monitor", 129, ((void*)0), 'm' },
                {}
        };
        int VAR_10;

        while ((VAR_10 = FUNC_1(VAR_5, VAR_6, "p:s:dhVm", VAR_9, ((void*)0))) >= 0)
                switch (VAR_10) {
                case 'p':
                        *VAR_7 = VAR_4;
                        break;

                case 's':
                        *VAR_8 = VAR_4;
                        break;

                case 'd':
                        FUNC_2(VAR_2);
                        break;

                case 'h':
                        FUNC_3("--debug --syspath= --subsystem= --help\n");
                        return 0;

                case 'V':
                        FUNC_3("%s\n", VAR_1);
                        return 0;

                case 'm':
                        VAR_3 = 1;
                        break;

                case '?':
                        return -VAR_0;

                default:
                        FUNC_0("Unhandled option code.");
                }

        return 1;
}
