
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned char ctrlFlags; } ;
typedef TYPE_1__ unixFile ;



__attribute__((used)) static void FUNC_0(unixFile *VAR_0, unsigned char VAR_1, int *VAR_2){
  if( *VAR_2<0 ){
    *VAR_2 = (VAR_0->ctrlFlags & VAR_1)!=0;
  }else if( (*VAR_2)==0 ){
    VAR_0->ctrlFlags &= ~VAR_1;
  }else{
    VAR_0->ctrlFlags |= VAR_1;
  }
}
