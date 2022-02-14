
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {TYPE_1__* key; } ;
struct TYPE_9__ {int type; int class; } ;
typedef TYPE_2__ DnsResourceRecord ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*) ;
 size_t FUNC_4 (int ,int ) ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (TYPE_2__*,int) ;
 int FUNC_7 (int,char*) ;
 int FUNC_8 (int ,int ,size_t) ;

__attribute__((used)) static int FUNC_9(DnsResourceRecord * const *VAR_0, DnsResourceRecord * const *VAR_1) {
        DnsResourceRecord *VAR_2 = *(DnsResourceRecord **) VAR_0, *VAR_3 = *(DnsResourceRecord **) VAR_1;
        size_t VAR_4;
        int VAR_5;

        FUNC_5(VAR_2);
        FUNC_5(VAR_3);

        VAR_5 = FUNC_1(FUNC_0(VAR_2->key->class), FUNC_0(VAR_3->key->class));
        if (VAR_5 != 0)
                return VAR_5;

        VAR_5 = FUNC_1(VAR_2->key->type, VAR_3->key->type);
        if (VAR_5 != 0)
                return VAR_5;

        VAR_5 = FUNC_6(VAR_2, 0);
        if (VAR_5 < 0) {
                FUNC_7(VAR_5, "Can't wire-format RR: %m");
                return 0;
        }

        VAR_5 = FUNC_6(VAR_3, 0);
        if (VAR_5 < 0) {
                FUNC_7(VAR_5, "Can't wire-format RR: %m");
                return 0;
        }

        VAR_4 = FUNC_4(FUNC_3(VAR_2), FUNC_3(VAR_3));

        VAR_5 = FUNC_8(FUNC_2(VAR_2), FUNC_2(VAR_3), VAR_4);
        if (VAR_5 != 0)
                return VAR_5;

        return FUNC_1(FUNC_3(VAR_2), FUNC_3(VAR_3));
}
