
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_4__ {int sm_blksz; } ;
typedef TYPE_1__ space_map_t ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (TYPE_1__*) ;

uint64_t
FUNC_2(space_map_t *VAR_0)
{
 if (VAR_0 == ((void*)0))
  return (0);
 return (FUNC_0(FUNC_1(VAR_0), VAR_0->sm_blksz));
}
