
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ usec_t ;
typedef scalar_t__ uint64_t ;
struct TYPE_4__ {int state; } ;
typedef TYPE_1__ sd_bus ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ,int ,int ,int ) ;
 int FUNC_1 (TYPE_1__*) ;
 scalar_t__ FUNC_2 (int ) ;

__attribute__((used)) static usec_t FUNC_3(sd_bus *VAR_4, uint64_t VAR_5) {
        FUNC_1(VAR_4);

        if (VAR_5 == (uint64_t) -1)
                return 0;





        if (FUNC_0(VAR_4->state, VAR_2, VAR_1, VAR_0))
                return VAR_5;
        else
                return FUNC_2(VAR_3) + VAR_5;
}
