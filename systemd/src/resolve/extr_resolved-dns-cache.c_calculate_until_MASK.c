
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ usec_t ;
typedef scalar_t__ uint32_t ;
struct TYPE_6__ {scalar_t__ minimum; } ;
struct TYPE_8__ {scalar_t__ expiry; TYPE_1__ soa; TYPE_2__* key; int ttl; } ;
struct TYPE_7__ {scalar_t__ type; } ;
typedef TYPE_3__ DnsResourceRecord ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (scalar_t__,int ) ;
 scalar_t__ FUNC_1 (int ,scalar_t__) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static usec_t FUNC_4(DnsResourceRecord *VAR_5, uint32_t VAR_6, usec_t VAR_7, bool VAR_8) {
        uint32_t VAR_9;
        usec_t VAR_10;

        FUNC_2(VAR_5);

        VAR_9 = FUNC_1(VAR_5->ttl, VAR_6);
        if (VAR_5->key->type == VAR_2 && VAR_8) {






                if (VAR_9 > VAR_5->soa.minimum)
                        VAR_9 = VAR_5->soa.minimum;
        }

        VAR_10 = VAR_9 * VAR_4;
        if (VAR_10 > VAR_0)
                VAR_10 = VAR_0;

        if (VAR_5->expiry != VAR_3) {
                usec_t VAR_11;




                VAR_11 = FUNC_0(VAR_5->expiry, FUNC_3(VAR_1));
                if (VAR_10 > VAR_11)
                        VAR_10 = VAR_11;
        }

        return VAR_7 + VAR_10;
}
