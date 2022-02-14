
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct option {char* member_0; unsigned char member_3; int * member_2; int const member_1; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* VAR_3 ;
 int VAR_4 ;
 void* VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int,char**,char*,struct option const*,int *) ;
 int FUNC_2 () ;

 void* VAR_7 ;
 int FUNC_3 () ;


__attribute__((used)) static int FUNC_4(int VAR_8, char *VAR_9[]) {
        enum {
                ARG_USR = 0x100,
        };

        static const struct option VAR_10[] = {
                { "update", 129, ((void*)0), 'u' },
                { "usr", 129, ((void*)0), ARG_USR },
                { "strict", 129, ((void*)0), 's' },
                { "test", 128, ((void*)0), 't' },
                { "root", 128, ((void*)0), 'r' },
                { "version", 129, ((void*)0), 'V' },
                { "help", 129, ((void*)0), 'h' },
                {}
        };

        int VAR_11;

        while ((VAR_11 = FUNC_1(VAR_8, VAR_9, "ust:r:Vh", VAR_10, ((void*)0))) >= 0)
                switch(VAR_11) {
                case 'u':
                        VAR_6 = 1;
                        break;
                case ARG_USR:
                        VAR_2 = VAR_1;
                        break;
                case 's':
                        VAR_4 = 1;
                        break;
                case 't':
                        VAR_5 = VAR_7;
                        break;
                case 'r':
                        VAR_3 = VAR_7;
                        break;
                case 'V':
                        return FUNC_3();
                case 'h':
                        return FUNC_2();
                case '?':
                        return -VAR_0;
                default:
                        FUNC_0("Unknown option");
                }

        return 1;
}
