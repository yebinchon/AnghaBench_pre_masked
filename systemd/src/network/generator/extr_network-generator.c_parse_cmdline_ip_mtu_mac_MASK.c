
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Context ;


 int FUNC_0 (int *,char const*,char const*) ;
 int FUNC_1 (int *,char const*,int,char const*) ;
 char* FUNC_2 (char const*,char) ;
 char* FUNC_3 (char const*,int) ;

__attribute__((used)) static int FUNC_4(Context *VAR_0, const char *VAR_1, int VAR_2, const char *VAR_3) {
        const char *VAR_4, *VAR_5;
        int VAR_6;



        VAR_5 = FUNC_2(VAR_3, ':');
        if (!VAR_5)
                VAR_4 = VAR_3;
        else
                VAR_4 = FUNC_3(VAR_3, VAR_5 - VAR_3);

        VAR_6 = FUNC_1(VAR_0, VAR_1, VAR_2, VAR_4);
        if (VAR_6 < 0)
                return VAR_6;

        if (!VAR_5)
                return 0;

        VAR_6 = FUNC_0(VAR_0, VAR_1, VAR_5 + 1);
        if (VAR_6 < 0)
                return VAR_6;

        return 0;
}
