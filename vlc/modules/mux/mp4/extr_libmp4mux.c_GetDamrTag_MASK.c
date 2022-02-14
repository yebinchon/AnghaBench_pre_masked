
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ i_codec; } ;
typedef TYPE_1__ es_format_t ;
typedef int bo_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,int) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,char*) ;
 int * FUNC_3 (char*) ;

__attribute__((used)) static bo_t *FUNC_4(es_format_t *VAR_1)
{
    bo_t *VAR_2 = FUNC_3("damr");
    if(!VAR_2)
        return ((void*)0);

    FUNC_2(VAR_2, "REFC");
    FUNC_1(VAR_2, 0);

    if (VAR_1->i_codec == VAR_0)
        FUNC_0(VAR_2, 0x81ff);
    else
        FUNC_0(VAR_2, 0x83ff);
    FUNC_0(VAR_2, 0x1);

    return VAR_2;
}
