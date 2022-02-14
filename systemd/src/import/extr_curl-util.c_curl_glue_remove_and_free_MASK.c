
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ curl; } ;
typedef TYPE_1__ CurlGlue ;
typedef int CURL ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (scalar_t__,int *) ;

void FUNC_3(CurlGlue *VAR_0, CURL *VAR_1) {
        FUNC_0(VAR_0);

        if (!VAR_1)
                return;

        if (VAR_0->curl)
                FUNC_2(VAR_0->curl, VAR_1);

        FUNC_1(VAR_1);
}
