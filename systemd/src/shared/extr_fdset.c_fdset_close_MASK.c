
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FDSet ;


 int FUNC_0 (int *) ;
 int FUNC_1 (void*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*,int ) ;
 void* FUNC_4 (int ) ;

void FUNC_5(FDSet *VAR_0) {
        void *VAR_1;

        while ((VAR_1 = FUNC_4(FUNC_0(VAR_0)))) {
                FUNC_3("Closing set fd %i", FUNC_1(VAR_1));
                (void) FUNC_2(FUNC_1(VAR_1));
        }
}
