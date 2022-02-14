
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Unit ;
typedef int Manager ;
typedef int FILE ;
typedef int FDSet ;


 int VAR_0 ;
 int FUNC_0 (int,char*,char const*) ;
 int FUNC_1 (int *,char const*,int *,int *,int **) ;
 int FUNC_2 (int *,int *,int *) ;

__attribute__((used)) static int FUNC_3(Manager *VAR_1, const char *VAR_2, FILE *VAR_3, FDSet *VAR_4) {
        Unit *VAR_5;
        int VAR_6;

        VAR_6 = FUNC_1(VAR_1, VAR_2, ((void*)0), ((void*)0), &VAR_5);
        if (VAR_6 < 0) {
                if (VAR_6 == -VAR_0)
                        return VAR_6;
                return FUNC_0(VAR_6, "Failed to load unit \"%s\", skipping deserialization: %m", VAR_2);
        }

        VAR_6 = FUNC_2(VAR_5, VAR_3, VAR_4);
        if (VAR_6 < 0) {
                if (VAR_6 == -VAR_0)
                        return VAR_6;
                return FUNC_0(VAR_6, "Failed to deserialize unit \"%s\", skipping: %m", VAR_2);
        }

        return 0;
}
