
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ sqlite3_int64 ;
struct TYPE_4__ {int validJD; int Y; int M; int D; int h; int m; int s; int tz; scalar_t__ validTZ; scalar_t__ validHMS; scalar_t__ validYMD; scalar_t__ iJD; scalar_t__ rawS; } ;
typedef TYPE_1__ DateTime ;


 int FUNC_0 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_1(DateTime *VAR_0){
  int VAR_1, VAR_2, VAR_3, VAR_4, VAR_5, VAR_6, VAR_7;

  if( VAR_0->validJD ) return;
  if( VAR_0->validYMD ){
    VAR_1 = VAR_0->Y;
    VAR_2 = VAR_0->M;
    VAR_3 = VAR_0->D;
  }else{
    VAR_1 = 2000;
    VAR_2 = 1;
    VAR_3 = 1;
  }
  if( VAR_1<-4713 || VAR_1>9999 || VAR_0->rawS ){
    FUNC_0(VAR_0);
    return;
  }
  if( VAR_2<=2 ){
    VAR_1--;
    VAR_2 += 12;
  }
  VAR_4 = VAR_1/100;
  VAR_5 = 2 - VAR_4 + (VAR_4/4);
  VAR_6 = 36525*(VAR_1+4716)/100;
  VAR_7 = 306001*(VAR_2+1)/10000;
  VAR_0->iJD = (sqlite3_int64)((VAR_6 + VAR_7 + VAR_3 + VAR_5 - 1524.5 ) * 86400000);
  VAR_0->validJD = 1;
  if( VAR_0->validHMS ){
    VAR_0->iJD += VAR_0->h*3600000 + VAR_0->m*60000 + (sqlite3_int64)(VAR_0->s*1000);
    if( VAR_0->validTZ ){
      VAR_0->iJD -= VAR_0->tz*60000;
      VAR_0->validYMD = 0;
      VAR_0->validHMS = 0;
      VAR_0->validTZ = 0;
    }
  }
}
