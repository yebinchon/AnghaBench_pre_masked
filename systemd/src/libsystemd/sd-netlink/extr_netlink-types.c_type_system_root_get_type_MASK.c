
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_7__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_8__ {scalar_t__ protocol; } ;
typedef TYPE_1__ sd_netlink ;
typedef size_t sd_genl_family ;
struct TYPE_10__ {size_t count; TYPE_2__* types; } ;
struct TYPE_9__ {scalar_t__ type; } ;
typedef TYPE_2__ NLType ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_7__ VAR_3 ;
 int FUNC_0 (TYPE_1__*,int ,size_t*) ;
 int VAR_4 ;
 int FUNC_1 (int *,TYPE_2__ const**,int ) ;

int FUNC_2(sd_netlink *VAR_5, const NLType **VAR_6, uint16_t VAR_7) {
        sd_genl_family VAR_8;
        const NLType *VAR_9;
        int VAR_10;

        if (!VAR_5 || VAR_5->protocol != VAR_1)
                return FUNC_1(&VAR_4, VAR_6, VAR_7);

        VAR_10 = FUNC_0(VAR_5, VAR_7, &VAR_8);
        if (VAR_10 < 0)
                return VAR_10;

        if (VAR_8 >= VAR_3.count)
                return -VAR_0;

        VAR_9 = &VAR_3.types[VAR_8];

        if (VAR_9->type == VAR_2)
                return -VAR_0;

        *VAR_6 = VAR_9;

        return 0;
}
