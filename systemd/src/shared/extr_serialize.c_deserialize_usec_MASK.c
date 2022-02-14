
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int usec_t ;


 int FUNC_0 (char const*) ;
 int FUNC_1 (int,char*,char const*) ;
 int FUNC_2 (char const*,int *) ;

int FUNC_3(const char *VAR_0, usec_t *VAR_1) {
        int VAR_2;

        FUNC_0(VAR_0);

        VAR_2 = FUNC_2(VAR_0, VAR_1);
        if (VAR_2 < 0)
                return FUNC_1(VAR_2, "Failed to parse usec value \"%s\": %m", VAR_0);

        return 0;
}
