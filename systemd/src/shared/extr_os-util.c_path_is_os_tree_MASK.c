
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char const*) ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (char const*,int ) ;
 int FUNC_2 (char const*,int *,int *) ;

int FUNC_3(const char *VAR_3) {
        int VAR_4;

        FUNC_0(VAR_3);




        if (FUNC_1(VAR_3, VAR_1) < 0)
                return -VAR_2;


        VAR_4 = FUNC_2(VAR_3, ((void*)0), ((void*)0));
        if (VAR_4 == -VAR_0)
                return 0;
        if (VAR_4 < 0)
                return VAR_4;

        return 1;
}
