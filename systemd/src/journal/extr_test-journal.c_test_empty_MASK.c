
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int JournalFile ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*,int,int ,int ,int *,int) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int,char*,int,int,int,int ,int,int *,int *,int *,int *,int **) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (char*,...) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (char*) ;
 scalar_t__ FUNC_8 (char*,int) ;
 int FUNC_9 (int ) ;

__attribute__((used)) static void FUNC_10(void) {
        JournalFile *VAR_6, *VAR_7, *VAR_8, *VAR_9;
        char VAR_10[] = "/var/tmp/journal-XXXXXX";

        FUNC_9(VAR_0);

        FUNC_6(VAR_10);

        FUNC_0(FUNC_3(-1, "test.journal", VAR_2|VAR_1, 0666, 0, (uint64_t) -1, 0, ((void*)0), ((void*)0), ((void*)0), ((void*)0), &VAR_6) == 0);

        FUNC_0(FUNC_3(-1, "test-compress.journal", VAR_2|VAR_1, 0666, 1, (uint64_t) -1, 0, ((void*)0), ((void*)0), ((void*)0), ((void*)0), &VAR_7) == 0);

        FUNC_0(FUNC_3(-1, "test-seal.journal", VAR_2|VAR_1, 0666, 0, (uint64_t) -1, 1, ((void*)0), ((void*)0), ((void*)0), ((void*)0), &VAR_8) == 0);

        FUNC_0(FUNC_3(-1, "test-seal-compress.journal", VAR_2|VAR_1, 0666, 1, (uint64_t) -1, 1, ((void*)0), ((void*)0), ((void*)0), ((void*)0), &VAR_9) == 0);

        FUNC_4(VAR_6);
        FUNC_7("");
        FUNC_4(VAR_7);
        FUNC_7("");
        FUNC_4(VAR_8);
        FUNC_7("");
        FUNC_4(VAR_9);
        FUNC_7("");

        FUNC_5("Done...");

        if (VAR_5)
                FUNC_5("Not removing %s", VAR_10);
        else {
                FUNC_1(".", 3000000, 0, 0, ((void*)0), 1);

                FUNC_0(FUNC_8(VAR_10, VAR_4|VAR_3) >= 0);
        }

        (void) FUNC_2(VAR_6);
        (void) FUNC_2(VAR_7);
        (void) FUNC_2(VAR_8);
        (void) FUNC_2(VAR_9);
}
