
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* psz_name; } ;
typedef TYPE_1__ seekpoint_t ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char**,int ,int) ;
 char* FUNC_2 (char*) ;

__attribute__((used)) static char *
FUNC_3(seekpoint_t *VAR_0, int VAR_1, int VAR_2)
{
    if (VAR_0->psz_name && VAR_0->psz_name[0] != '\0' )
        return FUNC_2(VAR_0->psz_name);

    char *VAR_3;
    int VAR_4 = FUNC_1(&VAR_3, FUNC_0("Chapter %i"), VAR_1 + VAR_2);
    if (VAR_4 == -1)
        return ((void*)0);
    return VAR_3;
}
