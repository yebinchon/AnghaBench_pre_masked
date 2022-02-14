
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {int types; } ;
struct TYPE_8__ {int types; } ;
struct TYPE_10__ {TYPE_3__ nsec3; TYPE_2__ nsec; TYPE_1__* key; } ;
struct TYPE_7__ {int type; } ;
typedef TYPE_4__ DnsResourceRecord ;


 int VAR_0 ;


 int VAR_1 ;
 int FUNC_0 (TYPE_4__*) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static bool FUNC_2(DnsResourceRecord *VAR_2) {
        FUNC_0(VAR_2);





        switch (VAR_2->key->type) {

        case 129:
                return !FUNC_1(VAR_2->nsec.types, VAR_0) ||
                        FUNC_1(VAR_2->nsec.types, VAR_1);

        case 128:
                return !FUNC_1(VAR_2->nsec3.types, VAR_0) ||
                        FUNC_1(VAR_2->nsec3.types, VAR_1);

        default:
                return 1;
        }
}
