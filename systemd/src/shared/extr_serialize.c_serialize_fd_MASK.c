
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char const FILE ;
typedef int FDSet ;


 int FUNC_0 (char const*) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int,char*) ;
 int FUNC_3 (char const*,char const*,char*,int) ;

int FUNC_4(FILE *VAR_0, FDSet *VAR_1, const char *VAR_2, int VAR_3) {
        int VAR_4;

        FUNC_0(VAR_0);
        FUNC_0(VAR_2);

        if (VAR_3 < 0)
                return 0;

        VAR_4 = FUNC_1(VAR_1, VAR_3);
        if (VAR_4 < 0)
                return FUNC_2(VAR_4, "Failed to add file descriptor to serialization set: %m");

        return FUNC_3(VAR_0, VAR_2, "%i", VAR_4);
}
