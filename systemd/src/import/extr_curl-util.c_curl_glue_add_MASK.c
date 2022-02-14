
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int curl; } ;
typedef TYPE_1__ CurlGlue ;
typedef TYPE_1__ CURL ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 (int ,TYPE_1__*) ;

int FUNC_2(CurlGlue *VAR_2, CURL *VAR_3) {
        FUNC_0(VAR_2);
        FUNC_0(VAR_3);

        if (FUNC_1(VAR_2->curl, VAR_3) != VAR_0)
                return -VAR_1;

        return 0;
}
