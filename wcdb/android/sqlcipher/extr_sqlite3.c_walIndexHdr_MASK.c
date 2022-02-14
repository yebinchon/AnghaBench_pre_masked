
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int WalIndexHdr ;
struct TYPE_3__ {scalar_t__ nWiData; scalar_t__* apWiData; } ;
typedef TYPE_1__ Wal ;


 int FUNC_0 (int) ;

__attribute__((used)) static volatile WalIndexHdr *FUNC_1(Wal *VAR_0){
  FUNC_0( VAR_0->nWiData>0 && VAR_0->apWiData[0] );
  return (volatile WalIndexHdr*)VAR_0->apWiData[0];
}
