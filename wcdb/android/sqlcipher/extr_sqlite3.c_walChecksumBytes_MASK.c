
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u32 ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (int) ;

__attribute__((used)) static void FUNC_2(
  int VAR_0,
  u8 *VAR_1,
  int VAR_2,
  const u32 *VAR_3,
  u32 *VAR_4
){
  u32 VAR_5, VAR_6;
  u32 *VAR_7 = (u32 *)VAR_1;
  u32 *VAR_8 = (u32 *)&VAR_1[VAR_2];

  if( VAR_3 ){
    VAR_5 = VAR_3[0];
    VAR_6 = VAR_3[1];
  }else{
    VAR_5 = VAR_6 = 0;
  }

  FUNC_1( VAR_2>=8 );
  FUNC_1( (VAR_2&0x00000007)==0 );

  if( VAR_0 ){
    do {
      VAR_5 += *VAR_7++ + VAR_6;
      VAR_6 += *VAR_7++ + VAR_5;
    }while( VAR_7<VAR_8 );
  }else{
    do {
      VAR_5 += FUNC_0(VAR_7[0]) + VAR_6;
      VAR_6 += FUNC_0(VAR_7[1]) + VAR_5;
      VAR_7 += 2;
    }while( VAR_7<VAR_8 );
  }

  VAR_4[0] = VAR_5;
  VAR_4[1] = VAR_6;
}
