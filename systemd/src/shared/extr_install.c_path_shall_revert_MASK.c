
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char LookupPaths ;


 int FUNC_0 (char const*) ;
 int FUNC_1 (char const*,char const*,int) ;
 int FUNC_2 (char const*,char const*) ;
 int FUNC_3 (char const*,char const*) ;

__attribute__((used)) static int FUNC_4(const LookupPaths *VAR_0, const char *VAR_1) {
        int VAR_2;

        FUNC_0(VAR_0);
        FUNC_0(VAR_1);



        VAR_2 = FUNC_1(VAR_0, VAR_1, 1);
        if (VAR_2 != 0)
                return VAR_2;

        VAR_2 = FUNC_2(VAR_0, VAR_1);
        if (VAR_2 != 0)
                return VAR_2;

        return FUNC_3(VAR_0, VAR_1);
}
