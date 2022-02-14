
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pid_t ;
typedef scalar_t__ ino_t ;


 int VAR_0 ;
 int FUNC_0 (int,char*,scalar_t__*) ;
 int FUNC_1 (int,int*) ;

__attribute__((used)) static int FUNC_2(pid_t VAR_1, pid_t *VAR_2) {
        pid_t VAR_3 = VAR_1, VAR_4 = 0;
        ino_t VAR_5;
        int VAR_6 = 0;

        VAR_6 = FUNC_0(VAR_1, "mnt", &VAR_5);
        if (VAR_6 < 0)
                return VAR_6;

        for (;;) {
                ino_t VAR_7;

                VAR_6 = FUNC_1(VAR_3, &VAR_4);
                if (VAR_6 < 0)
                        return VAR_6;

                VAR_6 = FUNC_0(VAR_4, "mnt", &VAR_7);
                if (VAR_6 < 0)
                        return VAR_6;

                if (VAR_5 != VAR_7)
                        break;

                if (VAR_4 == 1)
                        return -VAR_0;

                VAR_3 = VAR_4;
        }

        *VAR_2 = VAR_4;
        return 0;
}
