
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int OutputFlags ;
typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (int*) ;
 int FUNC_1 (char,int*) ;

__attribute__((used)) static int FUNC_2(FILE *VAR_1, OutputFlags *VAR_2) {
        FUNC_0(VAR_1);
        FUNC_0(VAR_2);

        if (!(*VAR_2 & VAR_0))
                return 0;




        FUNC_1('\n', VAR_1);
        *VAR_2 &= ~VAR_0;
        return 0;
}
