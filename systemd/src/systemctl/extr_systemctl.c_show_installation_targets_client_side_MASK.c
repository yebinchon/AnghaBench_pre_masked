
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int UnitFileFlags ;
struct TYPE_3__ {scalar_t__ type; char* path; } ;
typedef TYPE_1__ UnitFileChange ;


 char** FUNC_0 (char const*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (int,char*,char const*) ;
 int FUNC_2 (char*,char*) ;
 int FUNC_3 (int ,int,int *,char**,TYPE_1__**,size_t*) ;

__attribute__((used)) static int FUNC_4(const char *VAR_5) {
        UnitFileChange *VAR_6 = ((void*)0);
        size_t VAR_7 = 0, VAR_8;
        UnitFileFlags VAR_9;
        char **VAR_10;
        int VAR_11;

        VAR_10 = FUNC_0(VAR_5);
        VAR_9 = VAR_0 |
                (VAR_4 ? VAR_1 : 0);

        VAR_11 = FUNC_3(VAR_2, VAR_9, ((void*)0), VAR_10, &VAR_6, &VAR_7);
        if (VAR_11 < 0)
                return FUNC_1(VAR_11, "Failed to get file links for %s: %m", VAR_5);

        for (VAR_8 = 0; VAR_8 < VAR_7; VAR_8++)
                if (VAR_6[VAR_8].type == VAR_3)
                        FUNC_2("  %s\n", VAR_6[VAR_8].path);

        return 0;
}
