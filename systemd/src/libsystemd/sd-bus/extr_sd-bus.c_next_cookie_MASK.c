
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint64_t ;
typedef scalar_t__ uint32_t ;
struct TYPE_4__ {int cookie; int reply_callbacks; } ;
typedef TYPE_1__ sd_bus ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,scalar_t__) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int *) ;

__attribute__((used)) static int FUNC_4(sd_bus *VAR_2) {
        uint64_t VAR_3;

        FUNC_1(VAR_2);

        VAR_3 = FUNC_2(VAR_2->cookie);



        if (FUNC_0(VAR_3, VAR_0)) {
                uint32_t VAR_4;


                for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {
                        if (!FUNC_3(VAR_2->reply_callbacks, &VAR_3))
                                goto good;

                        VAR_3 = FUNC_2(VAR_3);
                }


                return -VAR_1;
        }

good:
        VAR_2->cookie = VAR_3;
        return 0;
}
