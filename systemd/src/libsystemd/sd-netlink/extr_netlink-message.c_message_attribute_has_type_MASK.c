
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ uint16_t ;
struct TYPE_6__ {size_t n_containers; TYPE_1__* containers; } ;
typedef TYPE_2__ sd_netlink_message ;
struct TYPE_5__ {int type_system; } ;
typedef int NLType ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*) ;
 size_t FUNC_1 (int const*) ;
 scalar_t__ FUNC_2 (int const*) ;
 int FUNC_3 (int ,int const**,scalar_t__) ;

__attribute__((used)) static int FUNC_4(sd_netlink_message *VAR_1, size_t *VAR_2, uint16_t VAR_3, uint16_t VAR_4) {
        const NLType *VAR_5;
        int VAR_6;

        FUNC_0(VAR_1);

        VAR_6 = FUNC_3(VAR_1->containers[VAR_1->n_containers].type_system, &VAR_5, VAR_3);
        if (VAR_6 < 0)
                return VAR_6;

        if (FUNC_2(VAR_5) != VAR_4)
                return -VAR_0;

        if (VAR_2)
                *VAR_2 = FUNC_1(VAR_5);
        return 0;
}
