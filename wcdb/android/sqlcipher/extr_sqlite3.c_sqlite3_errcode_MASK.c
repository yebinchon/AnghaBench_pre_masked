
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int errCode; int errMask; scalar_t__ mallocFailed; } ;
typedef TYPE_1__ sqlite3 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;

int FUNC_1(sqlite3 *VAR_2){
  if( VAR_2 && !FUNC_0(VAR_2) ){
    return VAR_0;
  }
  if( !VAR_2 || VAR_2->mallocFailed ){
    return VAR_1;
  }
  return VAR_2->errCode & VAR_2->errMask;
}
