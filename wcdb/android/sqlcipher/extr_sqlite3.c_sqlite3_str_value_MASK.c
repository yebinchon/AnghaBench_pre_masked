
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {size_t nChar; char* zText; } ;
typedef TYPE_1__ sqlite3_str ;



char *FUNC_0(sqlite3_str *VAR_0){
  if( VAR_0==0 || VAR_0->nChar==0 ) return 0;
  VAR_0->zText[VAR_0->nChar] = 0;
  return VAR_0->zText;
}
