
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int result; } ;
struct TYPE_10__ {scalar_t__ msg; TYPE_1__ data; int easy_handle; } ;
struct TYPE_9__ {int (* on_finished ) (TYPE_2__*,int ,int ) ;int curl; } ;
typedef TYPE_2__ CurlGlue ;
typedef TYPE_3__ CURLMsg ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_2__*) ;
 TYPE_3__* FUNC_1 (int ,int*) ;
 int FUNC_2 (TYPE_2__*,int ,int ) ;

__attribute__((used)) static void FUNC_3(CurlGlue *VAR_1) {
        CURLMsg *VAR_2;
        int VAR_3 = 0;

        FUNC_0(VAR_1);

        VAR_2 = FUNC_1(VAR_1->curl, &VAR_3);
        if (!VAR_2)
                return;

        if (VAR_2->msg != VAR_0)
                return;

        if (VAR_1->on_finished)
                VAR_1->on_finished(VAR_1, VAR_2->easy_handle, VAR_2->data.result);
}
