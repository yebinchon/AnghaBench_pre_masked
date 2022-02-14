
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (int,int,int) ;
 int FUNC_2 (char*,int) ;

__attribute__((used)) static int FUNC_3(int VAR_2, int VAR_3) {
        int VAR_4;

        FUNC_0(VAR_3 >= 0);

        VAR_4 = FUNC_2("/dev/null", VAR_2|VAR_0);
        if (VAR_4 < 0)
                return -VAR_1;

        return FUNC_1(VAR_4, VAR_3, 0);
}
