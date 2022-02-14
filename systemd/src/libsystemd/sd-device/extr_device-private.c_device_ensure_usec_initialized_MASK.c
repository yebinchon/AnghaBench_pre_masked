
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ usec_t ;
struct TYPE_6__ {scalar_t__ usec_initialized; } ;
typedef TYPE_1__ sd_device ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,scalar_t__) ;
 scalar_t__ FUNC_2 (int ) ;

int FUNC_3(sd_device *VAR_1, sd_device *VAR_2) {
        usec_t VAR_3;

        FUNC_0(VAR_1);

        if (VAR_2 && VAR_2->usec_initialized > 0)
                VAR_3 = VAR_2->usec_initialized;
        else
                VAR_3 = FUNC_2(VAR_0);

        return FUNC_1(VAR_1, VAR_3);
}
