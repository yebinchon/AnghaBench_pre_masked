
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ encoding; int index; } ;
typedef int OMX_INDEXTYPE ;
typedef scalar_t__ OMX_AUDIO_CODINGTYPE ;


 scalar_t__ VAR_0 ;
 TYPE_1__* VAR_1 ;

__attribute__((used)) static OMX_INDEXTYPE FUNC_0(OMX_AUDIO_CODINGTYPE VAR_2)
{
  int VAR_3;

  for(VAR_3 = 0; VAR_1[VAR_3].encoding != VAR_0 &&
      VAR_1[VAR_3].encoding != VAR_2; VAR_3++);

  return VAR_1[VAR_3].index;
}
