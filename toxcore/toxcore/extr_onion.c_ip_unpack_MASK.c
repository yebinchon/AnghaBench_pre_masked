
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
struct TYPE_6__ {int uint8; } ;
struct TYPE_7__ {int uint8; } ;
struct TYPE_8__ {scalar_t__ family; TYPE_1__ ip6; TYPE_2__ ip4; } ;
typedef TYPE_3__ IP ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ,scalar_t__ const*,int) ;
 int FUNC_1 (TYPE_3__*) ;

__attribute__((used)) static int FUNC_2(IP *VAR_4, const uint8_t *VAR_5, unsigned int VAR_6, _Bool VAR_7)
{
    if (VAR_6 < (1 + VAR_1))
        return -1;

    VAR_4->family = VAR_5[0];

    if (VAR_4->family == VAR_2 || VAR_4->family == VAR_3) {
        FUNC_0(VAR_4->ip4.uint8, VAR_5 + 1, VAR_0);
    } else {
        FUNC_0(VAR_4->ip6.uint8, VAR_5 + 1, VAR_1);
    }

    if (!VAR_7) {
        return FUNC_1(VAR_4);
    } else {
        FUNC_1(VAR_4);
        return 0;
    }
}
