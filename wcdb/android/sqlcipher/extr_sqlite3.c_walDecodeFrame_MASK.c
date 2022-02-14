
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u32 ;
struct TYPE_4__ {scalar_t__ bigEndCksum; int aSalt; scalar_t__* aFrameCksum; } ;
struct TYPE_5__ {int szPage; TYPE_1__ hdr; } ;
typedef TYPE_2__ Wal ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int *,int *,int) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int,int *,int,scalar_t__*,scalar_t__*) ;

__attribute__((used)) static int FUNC_4(
  Wal *VAR_2,
  u32 *VAR_3,
  u32 *VAR_4,
  u8 *VAR_5,
  u8 *VAR_6
){
  int VAR_7;
  u32 *VAR_8 = VAR_2->hdr.aFrameCksum;
  u32 VAR_9;
  FUNC_0( VAR_1==24 );




  if( FUNC_1(&VAR_2->hdr.aSalt, &VAR_6[8], 8)!=0 ){
    return 0;
  }



  VAR_9 = FUNC_2(&VAR_6[0]);
  if( VAR_9==0 ){
    return 0;
  }






  VAR_7 = (VAR_2->hdr.bigEndCksum==VAR_0);
  FUNC_3(VAR_7, VAR_6, 8, VAR_8, VAR_8);
  FUNC_3(VAR_7, VAR_5, VAR_2->szPage, VAR_8, VAR_8);
  if( VAR_8[0]!=FUNC_2(&VAR_6[16])
   || VAR_8[1]!=FUNC_2(&VAR_6[20])
  ){

    return 0;
  }




  *VAR_3 = VAR_9;
  *VAR_4 = FUNC_2(&VAR_6[4]);
  return 1;
}
