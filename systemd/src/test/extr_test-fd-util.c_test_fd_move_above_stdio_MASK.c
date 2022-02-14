
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (int ,int ,int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (char*,int ) ;

__attribute__((used)) static void FUNC_6(void) {
        int VAR_3, VAR_4;

        VAR_3 = FUNC_3(0, VAR_1, 3);
        FUNC_0(VAR_3 >= 3);
        FUNC_0(FUNC_1(0) != VAR_0);

        VAR_4 = FUNC_5("/dev/null", VAR_2);
        FUNC_0(VAR_4 == 0);

        VAR_4 = FUNC_4(VAR_4);
        FUNC_0(VAR_4 >= 3);

        FUNC_0(FUNC_2(VAR_3) == 0);
        FUNC_0(FUNC_1(VAR_3) != VAR_0);
        FUNC_0(FUNC_1(VAR_4) != VAR_0);
}
