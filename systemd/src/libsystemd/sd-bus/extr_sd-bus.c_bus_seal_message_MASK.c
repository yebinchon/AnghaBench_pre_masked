
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_1__ ;


typedef int usec_t ;
struct TYPE_11__ {int cookie; scalar_t__ patch_sender; int sender; scalar_t__ sealed; } ;
typedef TYPE_1__ sd_bus_message ;
typedef TYPE_1__ sd_bus ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*,int *) ;
 int FUNC_5 (TYPE_1__*,int ,int ) ;
 int FUNC_6 (TYPE_1__*,scalar_t__) ;

__attribute__((used)) static int FUNC_7(sd_bus *VAR_0, sd_bus_message *VAR_1, usec_t VAR_2) {
        int VAR_3;

        FUNC_2(VAR_0);
        FUNC_2(VAR_1);

        if (VAR_1->sealed) {



                VAR_0->cookie = FUNC_1(VAR_0->cookie, FUNC_0(VAR_1));
                return 0;
        }

        if (VAR_2 == 0) {
                VAR_3 = FUNC_4(VAR_0, &VAR_2);
                if (VAR_3 < 0)
                        return VAR_3;
        }

        if (!VAR_1->sender && VAR_0->patch_sender) {
                VAR_3 = FUNC_6(VAR_1, VAR_0->patch_sender);
                if (VAR_3 < 0)
                        return VAR_3;
        }

        VAR_3 = FUNC_3(VAR_0);
        if (VAR_3 < 0)
                return VAR_3;

        return FUNC_5(VAR_1, VAR_0->cookie, VAR_2);
}
