
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int uid_t ;
struct stat {int st_uid; int st_gid; } ;
typedef int gid_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int VAR_5 ;
 scalar_t__ FUNC_1 (int,int,int) ;
 scalar_t__ FUNC_2 (int,struct stat*) ;
 int FUNC_3 (int,int,struct stat*,int,int) ;
 int FUNC_4 (int) ;

__attribute__((used)) static int FUNC_5(int VAR_6, bool VAR_7, uid_t VAR_8, uid_t VAR_9) {
        struct stat VAR_10;
        int VAR_11;

        FUNC_0(VAR_6 >= 0);






        if ((VAR_8 & 0xFFFF) != 0) {

                VAR_11 = -VAR_2;
                goto finish;
        }

        if (VAR_8 == VAR_3) {
                VAR_11 = -VAR_1;
                goto finish;
        }

        if (VAR_9 != 0x10000) {

                VAR_11 = -VAR_2;
                goto finish;
        }

        if (FUNC_2(VAR_6, &VAR_10) < 0) {
                VAR_11 = -VAR_5;
                goto finish;
        }

        if ((uint32_t) VAR_10.st_uid >> 16 != (uint32_t) VAR_10.st_gid >> 16) {

                VAR_11 = -VAR_0;
                goto finish;
        }



        if (((uint32_t) (VAR_10.st_uid ^ VAR_8) >> 16) == 0)
                return 0;





        if ((VAR_10.st_uid & VAR_4) != VAR_3) {
                if (FUNC_1(VAR_6,
                           VAR_3 | (VAR_10.st_uid & ~VAR_4),
                           (gid_t) VAR_3 | (VAR_10.st_gid & ~(gid_t) VAR_4)) < 0) {
                        VAR_11 = -VAR_5;
                        goto finish;
                }
        }

        return FUNC_3(VAR_6, VAR_7, &VAR_10, VAR_8, 1);

finish:
        if (VAR_7)
                FUNC_4(VAR_6);

        return VAR_11;
}
