
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct Tox_Options {int dummy; } ;
typedef int TOX_ERR_OPTIONS_NEW ;


 int FUNC_0 (int *,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 struct Tox_Options* FUNC_1 (int,int) ;
 int FUNC_2 (struct Tox_Options*) ;

struct Tox_Options *FUNC_3(TOX_ERR_OPTIONS_NEW *VAR_2)
{
    struct Tox_Options *VAR_3 = FUNC_1(sizeof(struct Tox_Options), 1);

    if (VAR_3) {
        FUNC_2(VAR_3);
        FUNC_0(VAR_2, VAR_1);
        return VAR_3;
    }

    FUNC_0(VAR_2, VAR_0);
    return ((void*)0);
}
