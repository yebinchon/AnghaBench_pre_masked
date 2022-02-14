
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int st_mode; } ;
typedef int blkid_probe ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (int ,char*,int *,int *) ;
 int FUNC_9 (int ,int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_10 (int ,struct stat*) ;

__attribute__((used)) static int FUNC_11(blkid_probe VAR_2) {
        struct stat VAR_3;
        int VAR_4;



        if (FUNC_10(FUNC_5(VAR_2), &VAR_3))
                return -VAR_1;

        FUNC_3(VAR_2, 1);

        if (!FUNC_0(VAR_3.st_mode) &&
            FUNC_6(VAR_2) <= 1024 * 1440 &&
            FUNC_7(VAR_2)) {




                FUNC_4(VAR_2, 0);

                VAR_4 = FUNC_1(VAR_2);
                if (VAR_4 < 0)
                        return VAR_4;

                if (FUNC_8(VAR_2, "PTTYPE", ((void*)0), ((void*)0)) == 0)
                        return 0;
        }

        FUNC_9(VAR_2, VAR_0);
        FUNC_4(VAR_2, 1);

        return FUNC_2(VAR_2);
}
