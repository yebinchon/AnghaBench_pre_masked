
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char const FDSet ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char const**) ;
 int FUNC_1 (int) ;
 int FUNC_2 (char const*,int) ;
 int FUNC_3 (char const**) ;
 scalar_t__ FUNC_4 (char const*,int ) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (int,char*) ;

__attribute__((used)) static int FUNC_7(FDSet **VAR_1, const char **VAR_2) {
        int VAR_3;

        FUNC_0(VAR_1);
        FUNC_0(VAR_2);

        VAR_3 = FUNC_3(VAR_1);
        if (VAR_3 < 0) {
                *VAR_2 = "Failed to allocate fd set";
                return FUNC_6(VAR_3, "Failed to allocate fd set: %m");
        }

        FUNC_2(*VAR_1, 1);

        if (VAR_0)
                FUNC_1(FUNC_4(*VAR_1, FUNC_5(VAR_0)) >= 0);

        return 0;
}
