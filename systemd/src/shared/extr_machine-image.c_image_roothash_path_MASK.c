
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int path; int name; } ;
typedef TYPE_1__ Image ;


 int FUNC_0 (TYPE_1__*) ;
 char* FUNC_1 (int ,char const*) ;
 char* FUNC_2 (int ,char*) ;

__attribute__((used)) static char *FUNC_3(Image *VAR_0) {
        const char *VAR_1;

        FUNC_0(VAR_0);

        VAR_1 = FUNC_2(VAR_0->name, ".roothash");

        return FUNC_1(VAR_0->path, VAR_1);
}
