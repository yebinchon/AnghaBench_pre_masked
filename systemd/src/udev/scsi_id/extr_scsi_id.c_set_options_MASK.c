
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 char* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ) ;
 int VAR_9 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*) ;
 char* VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_3 (int ) ;
 int VAR_13 ;
 int FUNC_4 (int,char**,char*,int ,int *) ;
 int FUNC_5 () ;
 int FUNC_6 (int ,char*,char*) ;
 int FUNC_7 () ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 char* VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_10 (char*,char*) ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_11 (char*,char*) ;
 int FUNC_12 (char*,int ,char*) ;

__attribute__((used)) static int FUNC_13(int VAR_19, char **VAR_20,
                       char *VAR_21) {
        int VAR_22;






        VAR_15 = 1;
        while ((VAR_22 = FUNC_4(VAR_19, VAR_20, "d:f:gp:uvVxhbs:", VAR_16, ((void*)0))) >= 0)
                switch (VAR_22) {
                case 'b':
                        VAR_9 = 0;
                        break;

                case 'd':
                        VAR_12 = 1;
                        FUNC_12(VAR_21, VAR_5, VAR_14);
                        break;

                case 'f':
                        FUNC_12(VAR_10, VAR_5, VAR_14);
                        break;

                case 'g':
                        VAR_9 = 1;
                        break;

                case 'h':
                        FUNC_5();
                        FUNC_3(VAR_1);

                case 'p':
                        if (FUNC_11(VAR_14, "0x80"))
                                VAR_11 = VAR_6;
                        else if (FUNC_11(VAR_14, "0x83"))
                                VAR_11 = VAR_7;
                        else if (FUNC_11(VAR_14, "pre-spc3-83"))
                                VAR_11 = VAR_8;
                        else
                                return FUNC_6(FUNC_0(VAR_0),
                                                       "Unknown page code '%s'",
                                                       VAR_14);
                        break;

                case 's':
                        VAR_18 = FUNC_2(VAR_14);
                        if (VAR_18 < 3 || VAR_18 > 4)
                                return FUNC_6(FUNC_0(VAR_0),
                                                       "Unknown SG version '%s'",
                                                       VAR_14);
                        break;

                case 'u':
                        VAR_17 = 1;
                        break;

                case 'v':
                        FUNC_9(VAR_4);
                        FUNC_8(VAR_3);
                        FUNC_7();
                        break;

                case 'V':
                        FUNC_10("%s\n", VAR_2);
                        FUNC_3(VAR_1);

                case 'x':
                        VAR_13 = 1;
                        break;

                case '?':
                        return -1;

                default:
                        FUNC_1("Unknown option");
                }

        if (VAR_15 < VAR_19 && !VAR_12) {
                VAR_12 = 1;
                FUNC_12(VAR_21, VAR_5, VAR_20[VAR_15]);
        }

        return 0;
}
