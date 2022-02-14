
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int isWritable; } ;
struct TYPE_7__ {int position; int size; TYPE_2__* storage; TYPE_1__ file; } ;
struct TYPE_6__ {char* data; } ;
typedef TYPE_3__ THMemoryFile ;
typedef int THFile ;


 int FUNC_0 (int ,int,char*) ;
 int FUNC_1 (TYPE_3__*,int) ;
 int FUNC_2 (char*,char const*,size_t) ;

__attribute__((used)) static size_t FUNC_3(THFile *VAR_0, const char *VAR_1, size_t VAR_2)
{
  THMemoryFile *VAR_3 = (THMemoryFile*)VAR_0;

  FUNC_0(VAR_3->storage != ((void*)0), 1, "attempt to use a closed file");
  FUNC_0(VAR_3->file.isWritable, 1, "attempt to write in a read-only file");

  FUNC_1(VAR_3, VAR_3->position+VAR_2);
  FUNC_2(VAR_3->storage->data+VAR_3->position, VAR_1, VAR_2);
  VAR_3->position += VAR_2;
  if(VAR_3->position > VAR_3->size)
  {
    VAR_3->size = VAR_3->position;
    VAR_3->storage->data[VAR_3->size] = '\0';
  }

  return VAR_2;
}
