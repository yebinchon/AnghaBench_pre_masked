
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char const*) ;
 int FUNC_1 (int,char*,char const*) ;

__attribute__((used)) static int FUNC_2(const char *VAR_4, unsigned long VAR_5) {
        int VAR_6;

        VAR_6 = FUNC_0(VAR_4);
        if (VAR_6 == -VAR_0)
                return 0;
        if (VAR_6 < 0)
                return FUNC_1(VAR_6, "Failed to parse $%s: %m", VAR_4);

        VAR_2 = (VAR_2 & ~VAR_5) | (VAR_6 > 0 ? 0 : VAR_5);
        VAR_3 |= VAR_1;
        return 0;
}
