
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u64 ;
typedef int u32 ;
typedef int i64 ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int const*) ;
 int FUNC_1 (int const*) ;
 int FUNC_2 (int const*) ;
 int FUNC_3 (int const*) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int const) ;

__attribute__((used)) static i64 FUNC_6(u32 VAR_1, const u8 *VAR_2){
  u32 VAR_3;
  FUNC_4( VAR_0 || (VAR_1>=1 && VAR_1<=9 && VAR_1!=7) );
  switch( VAR_1 ){
    case 0:
    case 1:
      FUNC_5( VAR_2[0]&0x80 );
      return FUNC_1(VAR_2);
    case 2:
      FUNC_5( VAR_2[0]&0x80 );
      return FUNC_3(VAR_2);
    case 3:
      FUNC_5( VAR_2[0]&0x80 );
      return FUNC_2(VAR_2);
    case 4: {
      FUNC_5( VAR_2[0]&0x80 );
      VAR_3 = FUNC_0(VAR_2);
      return (i64)*(int*)&VAR_3;
    }
    case 5: {
      FUNC_5( VAR_2[0]&0x80 );
      return FUNC_0(VAR_2+2) + (((i64)1)<<32)*FUNC_3(VAR_2);
    }
    case 6: {
      u64 VAR_4 = FUNC_0(VAR_2);
      FUNC_5( VAR_2[0]&0x80 );
      VAR_4 = (VAR_4<<32) | FUNC_0(VAR_2+4);
      return (i64)*(i64*)&VAR_4;
    }
  }

  return (VAR_1 - 8);
}
