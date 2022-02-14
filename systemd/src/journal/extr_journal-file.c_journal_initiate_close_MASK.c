
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Set ;
typedef int JournalFile ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (int *) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int,char*) ;
 int FUNC_4 (int *,int *) ;

JournalFile* FUNC_5(
                JournalFile *VAR_0,
                Set *VAR_1) {

        int VAR_2;

        FUNC_0(VAR_0);

        if (VAR_1) {

                VAR_2 = FUNC_4(VAR_1, VAR_0);
                if (VAR_2 < 0)
                        FUNC_3(VAR_2, "Failed to add file to deferred close set, closing immediately.");
                else {
                        (void) FUNC_2(VAR_0, 0);
                        return ((void*)0);
                }
        }

        return FUNC_1(VAR_0);
}
