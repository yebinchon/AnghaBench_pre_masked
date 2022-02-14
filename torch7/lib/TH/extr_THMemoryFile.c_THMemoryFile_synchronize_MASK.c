
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * storage; } ;
typedef TYPE_1__ THMemoryFile ;
typedef int THFile ;


 int FUNC_0 (int ,int,char*) ;

__attribute__((used)) static void FUNC_1(THFile *VAR_0)
{
  THMemoryFile *VAR_1 = (THMemoryFile*)VAR_0;
  FUNC_0(VAR_1->storage != ((void*)0), 1, "attempt to use a closed file");
}
