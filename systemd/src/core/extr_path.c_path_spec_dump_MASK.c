
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int type; int path; } ;
typedef TYPE_1__ PathSpec ;
typedef int FILE ;


 int FUNC_0 (int *,char*,char const*,char*,int ) ;
 char* FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(PathSpec *VAR_0, FILE *VAR_1, const char *VAR_2) {
        FUNC_0(VAR_1,
                "%s%s: %s\n",
                VAR_2,
                FUNC_1(VAR_0->type),
                VAR_0->path);
}
