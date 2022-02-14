
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char const* msg; int code; } ;
typedef TYPE_1__ wsaerrmsg_t ;


 char const** VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_1__* VAR_2 ;

const char *FUNC_0(int VAR_3)
{

    if ((unsigned)VAR_3 < (unsigned)VAR_1)
        return VAR_0[VAR_3];


    for (const wsaerrmsg_t *VAR_4 = VAR_2; VAR_4->msg != ((void*)0); VAR_4++)
        if (VAR_4->code == VAR_3)
            return VAR_4->msg;

    return "Unknown error";
}
