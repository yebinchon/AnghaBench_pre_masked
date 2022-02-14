
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 char* FUNC_0 (int) ;
 int FUNC_1 (char*,size_t,char*,int) ;

__attribute__((used)) static const char* FUNC_2(int VAR_1, char *VAR_2, size_t VAR_3) {
        const char *VAR_4;

        if (VAR_1 == VAR_0)
                return "*";

        VAR_4 = FUNC_0(VAR_1);
        if (VAR_4)
                return VAR_4;

        FUNC_1(VAR_2, VAR_3, "%i", VAR_1);
        return VAR_2;
}
