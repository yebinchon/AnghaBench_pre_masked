
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int st_mode; } ;
typedef int socklen_t ;
typedef int other_type ;
typedef int accepting ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int,int) ;
 int VAR_5 ;
 scalar_t__ FUNC_2 (int,struct stat*) ;
 scalar_t__ FUNC_3 (int,int ,int ,int*,int*) ;

__attribute__((used)) static int FUNC_4(int VAR_6, int VAR_7, int VAR_8) {
        struct stat VAR_9;

        FUNC_1(VAR_6 >= 0, -VAR_0);
        FUNC_1(VAR_7 >= 0, -VAR_1);

        if (FUNC_2(VAR_6, &VAR_9) < 0)
                return -VAR_5;

        if (!FUNC_0(VAR_9.st_mode))
                return 0;

        if (VAR_7 != 0) {
                int VAR_10 = 0;
                socklen_t VAR_11 = sizeof(VAR_10);

                if (FUNC_3(VAR_6, VAR_2, VAR_4, &VAR_10, &VAR_11) < 0)
                        return -VAR_5;

                if (VAR_11 != sizeof(VAR_10))
                        return -VAR_1;

                if (VAR_10 != VAR_7)
                        return 0;
        }

        if (VAR_8 >= 0) {
                int VAR_12 = 0;
                socklen_t VAR_13 = sizeof(VAR_12);

                if (FUNC_3(VAR_6, VAR_2, VAR_3, &VAR_12, &VAR_13) < 0)
                        return -VAR_5;

                if (VAR_13 != sizeof(VAR_12))
                        return -VAR_1;

                if (!VAR_12 != !VAR_8)
                        return 0;
        }

        return 1;
}
