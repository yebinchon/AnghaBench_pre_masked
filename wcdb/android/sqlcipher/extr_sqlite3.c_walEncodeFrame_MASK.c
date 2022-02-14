
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct TYPE_4__ {scalar_t__ bigEndCksum; int aSalt; int * aFrameCksum; } ;
struct TYPE_5__ {scalar_t__ iReCksum; int szPage; TYPE_1__ hdr; } ;
typedef TYPE_2__ Wal ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,int ,int) ;
 int FUNC_2 (int *,int ,int) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int,int *,int,int *,int *) ;

__attribute__((used)) static void FUNC_5(
  Wal *VAR_2,
  u32 VAR_3,
  u32 VAR_4,
  u8 *VAR_5,
  u8 *VAR_6
){
  int VAR_7;
  u32 *VAR_8 = VAR_2->hdr.aFrameCksum;
  FUNC_0( VAR_1==24 );
  FUNC_3(&VAR_6[0], VAR_3);
  FUNC_3(&VAR_6[4], VAR_4);
  if( VAR_2->iReCksum==0 ){
    FUNC_1(&VAR_6[8], VAR_2->hdr.aSalt, 8);

    VAR_7 = (VAR_2->hdr.bigEndCksum==VAR_0);
    FUNC_4(VAR_7, VAR_6, 8, VAR_8, VAR_8);
    FUNC_4(VAR_7, VAR_5, VAR_2->szPage, VAR_8, VAR_8);

    FUNC_3(&VAR_6[16], VAR_8[0]);
    FUNC_3(&VAR_6[20], VAR_8[1]);
  }else{
    FUNC_2(&VAR_6[8], 0, 16);
  }
}
