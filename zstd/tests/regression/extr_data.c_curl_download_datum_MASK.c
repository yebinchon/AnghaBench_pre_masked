
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int dict; int type; int data; } ;
typedef TYPE_1__ data_t ;
typedef int CURL ;


 int FUNC_0 (int *,int *,int ) ;
 scalar_t__ FUNC_1 (TYPE_1__ const*) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_2(CURL* VAR_1, data_t const* VAR_2) {
    int VAR_3;
    VAR_3 = FUNC_0(VAR_1, &VAR_2->data, VAR_2->type);
    if (VAR_3 != 0)
        return VAR_3;
    if (FUNC_1(VAR_2)) {
        VAR_3 = FUNC_0(VAR_1, &VAR_2->dict, VAR_0);
        if (VAR_3 != 0)
            return VAR_3;
    }
    return VAR_3;
}
