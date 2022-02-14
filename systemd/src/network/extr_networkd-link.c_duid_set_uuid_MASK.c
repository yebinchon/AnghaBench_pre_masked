
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int sd_id128_t ;
struct TYPE_4__ {int raw_data_len; scalar_t__ type; int raw_data; } ;
typedef TYPE_1__ DUID ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int *,int *,int) ;

__attribute__((used)) static int FUNC_2(DUID *VAR_2, sd_id128_t VAR_3) {
        FUNC_0(VAR_2);

        if (VAR_2->raw_data_len > 0)
                return 0;

        if (VAR_2->type != VAR_0)
                return -VAR_1;

        FUNC_1(&VAR_2->raw_data, &VAR_3, sizeof(sd_id128_t));
        VAR_2->raw_data_len = sizeof(sd_id128_t);

        return 1;
}
