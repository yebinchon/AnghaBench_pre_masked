
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t FUNC_0 (int,int ,int ) ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (int*,int *) ;
 int FUNC_3 () ;

__attribute__((used)) static size_t FUNC_4(void) {
        static size_t VAR_3 = -1;

        if (VAR_3 == (size_t) -1) {
                uint64_t VAR_4;
                int VAR_5;

                VAR_5 = FUNC_2(&VAR_4, ((void*)0));
                if (VAR_5 < 0) {
                        FUNC_1(VAR_5, "Cannot query /proc/meminfo for MemTotal: %m");
                        VAR_3 = VAR_0;
                } else






                        VAR_3 = FUNC_0(VAR_4 / 8 / FUNC_3(), VAR_2, VAR_1);
        }

        return VAR_3;
}
