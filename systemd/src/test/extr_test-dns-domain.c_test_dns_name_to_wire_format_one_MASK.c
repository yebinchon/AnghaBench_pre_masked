
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (char const*,int *,size_t,int) ;
 int FUNC_2 (char*,char const*,char const*,size_t,int) ;
 int FUNC_3 (int *,char const*,int) ;

__attribute__((used)) static void FUNC_4(const char *VAR_0, const char *VAR_1, size_t VAR_2, int VAR_3) {
        uint8_t VAR_4[VAR_2];
        int VAR_5;

        FUNC_2("%s, %s, %zu, →%d", VAR_0, VAR_1, VAR_2, VAR_3);

        VAR_5 = FUNC_1(VAR_0, VAR_4, VAR_2, 0);
        FUNC_0(VAR_5 == VAR_3);

        if (VAR_5 < 0)
                return;

        FUNC_0(!FUNC_3(VAR_4, VAR_1, VAR_5));
}
