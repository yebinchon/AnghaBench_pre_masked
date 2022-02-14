
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {void (* xProfile ) (void*,char const*,VAR_0) ;int mutex; int mTrace; void* pProfileArg; } ;
typedef TYPE_1__ sqlite3 ;


 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

void *FUNC_3(
  sqlite3 *VAR_4,
  void (*VAR_5)(void*,const char*,VAR_6),
  void *VAR_7
){
  void *VAR_8;







  FUNC_1(VAR_4->mutex);
  VAR_8 = VAR_4->pProfileArg;
  VAR_4->xProfile = VAR_5;
  VAR_4->pProfileArg = VAR_7;
  VAR_4->mTrace &= VAR_2;
  if( VAR_4->xProfile ) VAR_4->mTrace |= VAR_3;
  FUNC_2(VAR_4->mutex);
  return VAR_8;
}
