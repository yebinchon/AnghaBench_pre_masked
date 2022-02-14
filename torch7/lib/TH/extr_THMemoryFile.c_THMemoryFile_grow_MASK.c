
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {size_t size; char* data; } ;
struct TYPE_4__ {size_t size; TYPE_3__* storage; } ;
typedef TYPE_1__ THMemoryFile ;


 int FUNC_0 (TYPE_3__*,int) ;

__attribute__((used)) static void FUNC_1(THMemoryFile *VAR_0, size_t VAR_1)
{
  size_t VAR_2;

  if(VAR_1 <= VAR_0->size)
    return;
  else
  {
    if(VAR_1 < VAR_0->storage->size)
    {
      VAR_0->size = VAR_1;
      VAR_0->storage->data[VAR_0->size] = '\0';
      return;
    }
  }

  VAR_2 = VAR_1-VAR_0->storage->size+1;
  FUNC_0(VAR_0->storage, (VAR_0->storage->size/2 > VAR_2 ?
                                       VAR_0->storage->size + (VAR_0->storage->size/2)
                                       : VAR_0->storage->size + VAR_2));
}
