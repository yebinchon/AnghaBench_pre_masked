
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct conf {int * fh; } ;
typedef scalar_t__ rstatus_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct conf*) ;
 int FUNC_1 (struct conf*) ;
 struct conf* FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (struct conf*) ;
 scalar_t__ FUNC_4 (struct conf*) ;
 scalar_t__ FUNC_5 (struct conf*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (char*,char*) ;

struct conf *
FUNC_8(char *VAR_1)
{
    rstatus_t VAR_2;
    struct conf *VAR_3;

    VAR_3 = FUNC_2(VAR_1);
    if (VAR_3 == ((void*)0)) {
        return ((void*)0);
    }


    VAR_2 = FUNC_5(VAR_3);
    if (VAR_2 != VAR_0) {
        goto error;
    }


    VAR_2 = FUNC_3(VAR_3);
    if (VAR_2 != VAR_0) {
        goto error;
    }


    VAR_2 = FUNC_4(VAR_3);
    if (VAR_2 != VAR_0) {
        goto error;
    }

    FUNC_1(VAR_3);

    FUNC_6(VAR_3->fh);
    VAR_3->fh = ((void*)0);

    return VAR_3;

error:
    FUNC_7("nutcracker: configuration file '%s' syntax is invalid",
               VAR_1);
    FUNC_6(VAR_3->fh);
    VAR_3->fh = ((void*)0);
    FUNC_0(VAR_3);
    return ((void*)0);
}
