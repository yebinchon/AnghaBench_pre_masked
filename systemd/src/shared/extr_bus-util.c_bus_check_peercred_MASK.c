
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ucred {scalar_t__ uid; } ;
typedef int sd_bus ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 (int,struct ucred*) ;
 int FUNC_3 (int *) ;

int FUNC_4(sd_bus *VAR_1) {
        struct ucred VAR_2;
        int VAR_3, VAR_4;

        FUNC_0(VAR_1);

        VAR_3 = FUNC_3(VAR_1);
        if (VAR_3 < 0)
                return VAR_3;

        VAR_4 = FUNC_2(VAR_3, &VAR_2);
        if (VAR_4 < 0)
                return VAR_4;

        if (VAR_2.uid != 0 && VAR_2.uid != FUNC_1())
                return -VAR_0;

        return 1;
}
