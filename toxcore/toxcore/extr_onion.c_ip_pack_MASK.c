
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
 int FUNC_0 (scalar_t__*,int ,int ) ;
 int FUNC_1 (scalar_t__*,int ,int ) ;
 int FUNC_2 (TYPE_3__*) ;

__attribute__((used)) static void FUNC_3(uint8_t *VAR_4, IP VAR_5)
{
    FUNC_2(&VAR_5);

    VAR_4[0] = VAR_5.family;

    if (VAR_5.family == VAR_2 || VAR_5.family == VAR_3) {
        FUNC_1(VAR_4 + 1, 0, VAR_1);
        FUNC_0(VAR_4 + 1, VAR_5.ip4.uint8, VAR_0);
    } else {
        FUNC_0(VAR_4 + 1, VAR_5.ip6.uint8, VAR_1);
    }
}
