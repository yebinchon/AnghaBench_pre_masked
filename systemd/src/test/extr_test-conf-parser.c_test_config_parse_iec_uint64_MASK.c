
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int *,char*,int,char*,int,char*,int ,char*,int*,int *) ;

__attribute__((used)) static void FUNC_2(void) {
        uint64_t VAR_0 = 0;
        FUNC_0(FUNC_1(((void*)0), "/this/file", 11, "Section", 22, "Size", 0, "4M", &VAR_0, ((void*)0)) == 0);
        FUNC_0(VAR_0 == 4 * 1024 * 1024);

        FUNC_0(FUNC_1(((void*)0), "/this/file", 11, "Section", 22, "Size", 0, "4.5M", &VAR_0, ((void*)0)) == 0);
}
