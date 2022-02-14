
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_7__ {scalar_t__ ipproto; TYPE_2__* opt; } ;
struct TYPE_6__ {TYPE_1__* key; } ;
struct TYPE_5__ {int class; } ;
typedef TYPE_3__ DnsPacket ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,int ) ;

__attribute__((used)) static inline uint16_t FUNC_1(DnsPacket *VAR_3) {



        if (VAR_3->ipproto == VAR_2)
                return VAR_0;

        if (VAR_3->opt)
                return FUNC_0(VAR_1, VAR_3->opt->key->class);

        return VAR_1;
}
