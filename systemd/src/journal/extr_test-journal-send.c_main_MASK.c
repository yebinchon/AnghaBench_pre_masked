
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iovec {char* member_0; int member_1; } ;
typedef int huge ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int) ;
 int FUNC_2 (char*) ;
 int VAR_5 ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*,char*,int) ;
 int FUNC_5 (char*,char,int) ;
 scalar_t__ FUNC_6 (char*) ;
 scalar_t__ FUNC_7 (int ,char*) ;
 scalar_t__ FUNC_8 (char*,char*,...) ;
 scalar_t__ FUNC_9 (struct iovec*,int) ;
 int FUNC_10 (int) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ,char*) ;

int FUNC_13(int VAR_6, char *VAR_7[]) {
        char VAR_8[4096*1024];


        struct iovec VAR_9[] = {
                {(char*) "GRAPH=graph", FUNC_0("GRAPH=graph")}
        };
        struct iovec VAR_10[] = {
                {(char*) "GRAPH=graph\n", FUNC_0("GRAPH=graph\n")}
        };
        struct iovec VAR_11[] = {
                {(char*) "MESSAGE=graph", FUNC_0("MESSAGE=graph")}
        };
        struct iovec VAR_12[] = {
                {(char*) "MESSAGE=graph\n", FUNC_0("MESSAGE=graph\n")}
        };

        FUNC_1(FUNC_7(VAR_1, "piepapo") == 0);

        FUNC_1(FUNC_8("MESSAGE=foobar",
                                  "VALUE=%i", 7,
                                  ((void*)0)) == 0);

        VAR_5 = VAR_0;
        FUNC_1(FUNC_6("Foobar") == 0);

        FUNC_1(FUNC_6("") == 0);

        FUNC_5(VAR_8, 'x', sizeof(VAR_8));
        FUNC_4(VAR_8, "HUGE=", 5);
        FUNC_2(VAR_8);

        FUNC_1(FUNC_8("MESSAGE=Huge field attached",
                                  VAR_8,
                                  ((void*)0)) == 0);

        FUNC_1(FUNC_8("MESSAGE=uiui",
                                  "VALUE=A",
                                  "VALUE=B",
                                  "VALUE=C",
                                  "SINGLETON=1",
                                  "OTHERVALUE=X",
                                  "OTHERVALUE=Y",
                                  "WITH_BINARY=this is a binary value \a",
                                  ((void*)0)) == 0);

        FUNC_12(VAR_2, "Hello World!");

        FUNC_1(FUNC_7(VAR_2, "Hello World") == 0);

        FUNC_1(FUNC_8("MESSAGE=Hello World!",
                                  "MESSAGE_ID=52fb62f99e2c49d89cfbf9d6de5e3555",
                                  "PRIORITY=5",
                                  "HOME=%s", FUNC_3("HOME"),
                                  "TERM=%s", FUNC_3("TERM"),
                                  "PAGE_SIZE=%li", FUNC_11(VAR_4),
                                  "N_CPUS=%li", FUNC_11(VAR_3),
                                  ((void*)0)) == 0);

        FUNC_1(FUNC_9(VAR_9, 1) == 0);
        FUNC_1(FUNC_9(VAR_10, 1) == 0);
        FUNC_1(FUNC_9(VAR_11, 1) == 0);
        FUNC_1(FUNC_9(VAR_12, 1) == 0);



        FUNC_1(FUNC_9(VAR_9, 1) == 0);
        FUNC_1(FUNC_9(VAR_10, 1) == 0);
        FUNC_1(FUNC_9(VAR_11, 1) == 0);
        FUNC_1(FUNC_9(VAR_12, 1) == 0);

        FUNC_10(1);

        return 0;
}
