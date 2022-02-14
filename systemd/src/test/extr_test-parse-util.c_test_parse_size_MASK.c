
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*,int,int*) ;

__attribute__((used)) static void FUNC_2(void) {
        uint64_t VAR_2;

        FUNC_0(FUNC_1("", 1024, &VAR_2) == -VAR_0);

        FUNC_0(FUNC_1("111", 1024, &VAR_2) == 0);
        FUNC_0(VAR_2 == 111);

        FUNC_0(FUNC_1("111.4", 1024, &VAR_2) == 0);
        FUNC_0(VAR_2 == 111);

        FUNC_0(FUNC_1(" 112 B", 1024, &VAR_2) == 0);
        FUNC_0(VAR_2 == 112);

        FUNC_0(FUNC_1(" 112.6 B", 1024, &VAR_2) == 0);
        FUNC_0(VAR_2 == 112);

        FUNC_0(FUNC_1("3.5 K", 1024, &VAR_2) == 0);
        FUNC_0(VAR_2 == 3*1024 + 512);

        FUNC_0(FUNC_1("3. K", 1024, &VAR_2) == 0);
        FUNC_0(VAR_2 == 3*1024);

        FUNC_0(FUNC_1("3.0 K", 1024, &VAR_2) == 0);
        FUNC_0(VAR_2 == 3*1024);

        FUNC_0(FUNC_1("3. 0 K", 1024, &VAR_2) == -VAR_0);

        FUNC_0(FUNC_1(" 4 M 11.5K", 1024, &VAR_2) == 0);
        FUNC_0(VAR_2 == 4*1024*1024 + 11 * 1024 + 512);

        FUNC_0(FUNC_1("3B3.5G", 1024, &VAR_2) == -VAR_0);

        FUNC_0(FUNC_1("3.5G3B", 1024, &VAR_2) == 0);
        FUNC_0(VAR_2 == 3ULL*1024*1024*1024 + 512*1024*1024 + 3);

        FUNC_0(FUNC_1("3.5G 4B", 1024, &VAR_2) == 0);
        FUNC_0(VAR_2 == 3ULL*1024*1024*1024 + 512*1024*1024 + 4);

        FUNC_0(FUNC_1("3B3G4T", 1024, &VAR_2) == -VAR_0);

        FUNC_0(FUNC_1("4T3G3B", 1024, &VAR_2) == 0);
        FUNC_0(VAR_2 == (4ULL*1024 + 3)*1024*1024*1024 + 3);

        FUNC_0(FUNC_1(" 4 T 3 G 3 B", 1024, &VAR_2) == 0);
        FUNC_0(VAR_2 == (4ULL*1024 + 3)*1024*1024*1024 + 3);

        FUNC_0(FUNC_1("12P", 1024, &VAR_2) == 0);
        FUNC_0(VAR_2 == 12ULL * 1024*1024*1024*1024*1024);

        FUNC_0(FUNC_1("12P12P", 1024, &VAR_2) == -VAR_0);

        FUNC_0(FUNC_1("3E 2P", 1024, &VAR_2) == 0);
        FUNC_0(VAR_2 == (3 * 1024 + 2ULL) * 1024*1024*1024*1024*1024);

        FUNC_0(FUNC_1("12X", 1024, &VAR_2) == -VAR_0);

        FUNC_0(FUNC_1("12.5X", 1024, &VAR_2) == -VAR_0);

        FUNC_0(FUNC_1("12.5e3", 1024, &VAR_2) == -VAR_0);

        FUNC_0(FUNC_1("1024E", 1024, &VAR_2) == -VAR_1);
        FUNC_0(FUNC_1("-1", 1024, &VAR_2) == -VAR_1);
        FUNC_0(FUNC_1("-1024E", 1024, &VAR_2) == -VAR_1);

        FUNC_0(FUNC_1("-1024P", 1024, &VAR_2) == -VAR_1);

        FUNC_0(FUNC_1("-10B 20K", 1024, &VAR_2) == -VAR_1);
}
