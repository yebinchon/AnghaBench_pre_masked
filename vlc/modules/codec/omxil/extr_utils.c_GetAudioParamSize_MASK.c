
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ encoding; scalar_t__ index; unsigned int size; } ;
typedef scalar_t__ OMX_INDEXTYPE ;


 scalar_t__ VAR_0 ;
 TYPE_1__* VAR_1 ;

unsigned int FUNC_0(OMX_INDEXTYPE VAR_2)
{
  int VAR_3;

  for(VAR_3 = 0; VAR_1[VAR_3].encoding != VAR_0 &&
      VAR_1[VAR_3].index != VAR_2; VAR_3++);

  return VAR_1[VAR_3].size;
}
