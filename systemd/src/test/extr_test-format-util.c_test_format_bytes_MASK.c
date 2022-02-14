
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int,int,char*,char*,char*,char*) ;

__attribute__((used)) static void FUNC_2(void) {
        FUNC_1(900, 1, "900B", "900B", "900B", "900B");
        FUNC_1(900, 0, "900", "900", "900", "900");
        FUNC_1(1023, 1, "1023B", "1023B", "1.0K", "1K");
        FUNC_1(1023, 0, "1023", "1023", "1.0K", "1K");
        FUNC_1(1024, 1, "1.0K", "1K", "1.0K", "1K");
        FUNC_1(1024, 0, "1.0K", "1K", "1.0K", "1K");
        FUNC_1(1100, 1, "1.0K", "1K", "1.1K", "1K");
        FUNC_1(1500, 1, "1.4K", "1K", "1.5K", "1K");
        FUNC_1(FUNC_0(3)*1024*1024, 1, "3.0M", "3M", "3.1M", "3M");
        FUNC_1(FUNC_0(3)*1024*1024*1024, 1, "3.0G", "3G", "3.2G", "3G");
        FUNC_1(FUNC_0(3)*1024*1024*1024*1024, 1, "3.0T", "3T", "3.2T", "3T");
        FUNC_1(FUNC_0(3)*1024*1024*1024*1024*1024, 1, "3.0P", "3P", "3.3P", "3P");
        FUNC_1(FUNC_0(3)*1024*1024*1024*1024*1024*1024, 1, "3.0E", "3E", "3.4E", "3E");
        FUNC_1(VAR_0, 1, ((void*)0), ((void*)0), ((void*)0), ((void*)0));
        FUNC_1(VAR_0, 0, ((void*)0), ((void*)0), ((void*)0), ((void*)0));
}
