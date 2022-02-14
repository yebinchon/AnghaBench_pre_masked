
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_5__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ class; } ;
struct TYPE_7__ {TYPE_5__* key; } ;
typedef TYPE_1__ DnsTransaction ;
typedef TYPE_1__ DnsResourceRecord ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (TYPE_5__*) ;

__attribute__((used)) static int FUNC_3(DnsTransaction *VAR_1, DnsResourceRecord *VAR_2) {
        FUNC_0(VAR_1);
        FUNC_0(VAR_2);




        return VAR_2->key->class == VAR_0 &&
                FUNC_1(FUNC_2(VAR_2->key));
}
