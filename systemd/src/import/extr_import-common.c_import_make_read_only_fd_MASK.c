
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int st_mode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int,int ,int ,int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,int) ;
 int VAR_3 ;
 scalar_t__ FUNC_3 (int,int) ;
 int FUNC_4 (int,struct stat*) ;
 int FUNC_5 (int,char*) ;

int FUNC_6(int VAR_4) {
        int VAR_5;

        FUNC_1(VAR_4 >= 0);



        VAR_5 = FUNC_2(VAR_4, 1);
        if (FUNC_0(VAR_5, -VAR_2, -VAR_1, -VAR_0)) {
                struct stat VAR_6;





                VAR_5 = FUNC_4(VAR_4, &VAR_6);
                if (VAR_5 < 0)
                        return FUNC_5(VAR_3, "Failed to stat temporary image: %m");


                if (FUNC_3(VAR_4, VAR_6.st_mode & 07555) < 0)
                        return FUNC_5(VAR_3, "Failed to chmod() final image: %m");

                return 0;

        } else if (VAR_5 < 0)
                return FUNC_5(VAR_5, "Failed to make subvolume read-only: %m");

        return 0;
}
