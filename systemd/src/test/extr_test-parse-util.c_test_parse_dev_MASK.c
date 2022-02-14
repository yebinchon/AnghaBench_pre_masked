
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int dev_t ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*,int *) ;

__attribute__((used)) static void FUNC_4(void) {
        dev_t VAR_1;

        FUNC_0(FUNC_3("", &VAR_1) == -VAR_0);
        FUNC_0(FUNC_3("junk", &VAR_1) == -VAR_0);
        FUNC_0(FUNC_3("0", &VAR_1) == -VAR_0);
        FUNC_0(FUNC_3("5", &VAR_1) == -VAR_0);
        FUNC_0(FUNC_3("5:", &VAR_1) == -VAR_0);
        FUNC_0(FUNC_3(":5", &VAR_1) == -VAR_0);
        FUNC_0(FUNC_3("-1:-1", &VAR_1) == -VAR_0);

        FUNC_0(FUNC_3("4294967295:4294967295", &VAR_1) == -VAR_0);

        FUNC_0(FUNC_3("8:11", &VAR_1) >= 0 && FUNC_1(VAR_1) == 8 && FUNC_2(VAR_1) == 11);
        FUNC_0(FUNC_3("0:0", &VAR_1) >= 0 && FUNC_1(VAR_1) == 0 && FUNC_2(VAR_1) == 0);
}
