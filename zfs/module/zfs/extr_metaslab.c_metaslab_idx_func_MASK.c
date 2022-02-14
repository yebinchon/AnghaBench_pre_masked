
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int multilist_t ;
struct TYPE_2__ {unsigned int ms_id; } ;
typedef TYPE_1__ metaslab_t ;


 unsigned int FUNC_0 (int *) ;

__attribute__((used)) static unsigned int
FUNC_1(multilist_t *VAR_0, void *VAR_1)
{
 metaslab_t *VAR_2 = VAR_1;
 return (VAR_2->ms_id % FUNC_0(VAR_0));
}
