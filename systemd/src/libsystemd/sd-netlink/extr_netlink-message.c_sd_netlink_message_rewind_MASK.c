
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_7__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ uint16_t ;
struct rtattr {int dummy; } ;
struct TYPE_10__ {scalar_t__ protocol; unsigned int n_containers; TYPE_7__* hdr; TYPE_5__* containers; int sealed; } ;
typedef TYPE_1__ sd_netlink_message ;
typedef int sd_netlink ;
struct TYPE_12__ {int nlmsg_type; } ;
struct TYPE_11__ {int const* type_system; int attributes; } ;
typedef int NLTypeSystem ;
typedef int NLType ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (size_t) ;
 scalar_t__ FUNC_1 (TYPE_7__*) ;
 int FUNC_2 (TYPE_7__*,size_t) ;
 int FUNC_3 (TYPE_7__*) ;
 int FUNC_4 (TYPE_1__*,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (TYPE_1__*,TYPE_5__*,struct rtattr*,int ) ;
 int FUNC_7 (TYPE_1__*) ;
 size_t FUNC_8 (int const*) ;
 scalar_t__ FUNC_9 (int const*) ;
 int FUNC_10 (int const*,int const**) ;
 int FUNC_11 (int *,int const**,int ) ;

int FUNC_12(sd_netlink_message *VAR_3, sd_netlink *VAR_4) {
        const NLType *VAR_5;
        uint16_t VAR_6;
        size_t VAR_7;
        unsigned VAR_8;
        int VAR_9;

        FUNC_4(VAR_3, -VAR_0);
        FUNC_4(VAR_4 || VAR_3->protocol != VAR_1, -VAR_0);


        if (!VAR_3->sealed)
                FUNC_7(VAR_3);

        for (VAR_8 = 1; VAR_8 <= VAR_3->n_containers; VAR_8++)
                VAR_3->containers[VAR_8].attributes = FUNC_5(VAR_3->containers[VAR_8].attributes);

        VAR_3->n_containers = 0;

        if (VAR_3->containers[0].attributes)

                return 0;

        FUNC_3(VAR_3->hdr);

        VAR_9 = FUNC_11(VAR_4, &VAR_5, VAR_3->hdr->nlmsg_type);
        if (VAR_9 < 0)
                return VAR_9;

        VAR_6 = FUNC_9(VAR_5);
        VAR_7 = FUNC_8(VAR_5);

        if (VAR_6 == VAR_2) {
                const NLTypeSystem *VAR_10;

                FUNC_10(VAR_5, &VAR_10);

                VAR_3->containers[0].type_system = VAR_10;

                VAR_9 = FUNC_6(VAR_3,
                                            &VAR_3->containers[VAR_3->n_containers],
                                            (struct rtattr*)((uint8_t*)FUNC_1(VAR_3->hdr) + FUNC_0(VAR_7)),
                                            FUNC_2(VAR_3->hdr, VAR_7));
                if (VAR_9 < 0)
                        return VAR_9;
        }

        return 0;
}
