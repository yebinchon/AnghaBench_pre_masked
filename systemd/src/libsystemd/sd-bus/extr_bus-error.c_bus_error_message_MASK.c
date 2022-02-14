
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {char const* message; } ;
typedef TYPE_1__ sd_bus_error ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_1__ const*,int ) ;
 char const* FUNC_1 (int) ;

const char *FUNC_2(const sd_bus_error *VAR_1, int VAR_2) {

        if (VAR_1) {


                if (FUNC_0(VAR_1, VAR_0))
                        return "Access denied";

                if (VAR_1->message)
                        return VAR_1->message;
        }

        if (VAR_2 < 0)
                VAR_2 = -VAR_2;

        return FUNC_1(VAR_2);
}
