
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 int FUNC_1 (char*,char*) ;

__attribute__((used)) static void FUNC_2(void) {
        FUNC_0(FUNC_1("nofail,fail,nofail", "nofail\0fail\0") == 1);
        FUNC_0(FUNC_1("nofail,nofail,fail", "nofail\0fail\0") == 0);
        FUNC_0(FUNC_1("abc,cde,afail", "nofail\0fail\0") == 0);
        FUNC_0(FUNC_1("nofail,fail=0,nofail=0", "nofail\0fail\0") == 1);
        FUNC_0(FUNC_1("nofail,nofail=0,fail=0", "nofail\0fail\0") == 0);
}
