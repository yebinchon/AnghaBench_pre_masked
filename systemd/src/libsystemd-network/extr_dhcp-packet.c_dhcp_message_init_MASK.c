
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
typedef int uint32_t ;
typedef scalar_t__ uint16_t ;
struct TYPE_4__ {void* magic; void* xid; int hlen; scalar_t__ htype; scalar_t__ op; } ;
typedef TYPE_1__ DHCPMessage ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (scalar_t__,scalar_t__,int ) ;
 int VAR_6 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*,size_t,size_t*,int ,int ,int,scalar_t__*) ;
 void* FUNC_3 (int ) ;

int FUNC_4(DHCPMessage *VAR_7, uint8_t VAR_8, uint32_t VAR_9,
                      uint8_t VAR_10, uint16_t VAR_11, size_t VAR_12,
                      size_t *VAR_13) {
        size_t VAR_14 = 0;
        int VAR_15;

        FUNC_1(FUNC_0(VAR_8, VAR_3, VAR_2));
        FUNC_1(FUNC_0(VAR_11, VAR_0, VAR_1));

        VAR_7->op = VAR_8;
        VAR_7->htype = VAR_11;
        VAR_7->hlen = (VAR_11 == VAR_0) ? VAR_5 : 0;
        VAR_7->xid = FUNC_3(VAR_9);
        VAR_7->magic = FUNC_3(VAR_4);

        VAR_15 = FUNC_2(VAR_7, VAR_12, &VAR_14, 0,
                               VAR_6, 1, &VAR_10);
        if (VAR_15 < 0)
                return VAR_15;

        *VAR_13 = VAR_14;

        return 0;
}
