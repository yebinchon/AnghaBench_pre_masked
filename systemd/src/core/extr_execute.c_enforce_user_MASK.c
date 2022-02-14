
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uid_t ;
struct TYPE_4__ {scalar_t__ capability_ambient_set; int secure_bits; } ;
typedef TYPE_1__ ExecContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__ const*) ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int ,...) ;
 scalar_t__ FUNC_2 (scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_3 (scalar_t__) ;

__attribute__((used)) static int FUNC_4(const ExecContext *VAR_4, uid_t VAR_5) {
        FUNC_0(VAR_4);

        if (!FUNC_3(VAR_5))
                return 0;




        if (VAR_4->capability_ambient_set != 0) {




                if (VAR_5 != 0) {
                        int VAR_6 = VAR_4->secure_bits | 1<<VAR_2;

                        if (FUNC_1(VAR_0) != VAR_6)
                                if (FUNC_1(VAR_1, VAR_6) < 0)
                                        return -VAR_3;
                }
        }


        if (FUNC_2(VAR_5, VAR_5, VAR_5) < 0)
                return -VAR_3;






        return 0;
}
