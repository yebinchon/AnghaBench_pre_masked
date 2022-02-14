
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct statvfs {int f_frsize; int f_blocks; int f_bfree; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int,struct statvfs*) ;

__attribute__((used)) static bool FUNC_3(int VAR_4, uint64_t VAR_5, uint64_t VAR_6, uint64_t VAR_7) {
        uint64_t VAR_8 = 0, VAR_9 = (uint64_t) -1;
        struct statvfs VAR_10;

        FUNC_1(VAR_4 >= 0);

        if (FUNC_2(VAR_4, &VAR_10) >= 0) {
                VAR_8 = VAR_10.f_frsize * VAR_10.f_blocks;
                VAR_9 = VAR_10.f_frsize * VAR_10.f_bfree;
        }

        if (VAR_7 == (uint64_t) -1) {

                if (VAR_8 > 0) {
                        VAR_7 = FUNC_0(VAR_8 / 10);

                        if (VAR_7 > VAR_3)
                                VAR_7 = VAR_3;

                        if (VAR_7 < VAR_2)
                                VAR_7 = VAR_2;
                } else
                        VAR_7 = VAR_2;
        } else
                VAR_7 = FUNC_0(VAR_7);

        if (VAR_7 > 0 && VAR_5 > VAR_7)
                return 1;

        if (VAR_6 == (uint64_t) -1) {

                if (VAR_8 > 0) {
                        VAR_6 = FUNC_0((VAR_8 * 3) / 20);

                        if (VAR_6 > VAR_1)
                                VAR_6 = VAR_1;
                } else
                        VAR_6 = VAR_0;
        } else
                VAR_6 = FUNC_0(VAR_6);

        if (VAR_6 > 0 && VAR_9 < VAR_6)
                return 1;

        return 0;
}
