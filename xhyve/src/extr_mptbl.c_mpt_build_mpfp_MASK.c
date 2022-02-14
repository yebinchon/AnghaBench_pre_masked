
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
typedef scalar_t__ uint32_t ;
typedef TYPE_1__* mpfps_t ;
struct TYPE_5__ {int length; int checksum; int spec_rev; scalar_t__ pap; int signature; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int) ;
 int FUNC_1 (TYPE_1__*,int ,int) ;
 int FUNC_2 (TYPE_1__*,int) ;

__attribute__((used)) static void
FUNC_3(mpfps_t VAR_2, uint64_t VAR_3)
{
 FUNC_1(VAR_2, 0, sizeof(*VAR_2));
 FUNC_0(VAR_2->signature, VAR_0, 4);
 VAR_2->pap = (uint32_t) (VAR_3 + sizeof(*VAR_2));
 VAR_2->length = 1;
 VAR_2->spec_rev = VAR_1;
 VAR_2->checksum = FUNC_2(VAR_2, sizeof(*VAR_2));
}
