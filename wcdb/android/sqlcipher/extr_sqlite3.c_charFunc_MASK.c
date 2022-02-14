
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u8 ;
typedef int sqlite3_value ;
typedef int sqlite3_int64 ;
typedef int sqlite3_context ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned char* FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,char*,int,int ,int ) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(
  sqlite3_context *VAR_2,
  int VAR_3,
  sqlite3_value **VAR_4
){
  unsigned char *VAR_5, *VAR_6;
  int VAR_7;
  VAR_6 = VAR_5 = FUNC_0( VAR_3*4+1 );
  if( VAR_5==0 ){
    FUNC_1(VAR_2);
    return;
  }
  for(VAR_7=0; VAR_7<VAR_3; VAR_7++){
    sqlite3_int64 VAR_8;
    unsigned VAR_9;
    VAR_8 = FUNC_3(VAR_4[VAR_7]);
    if( VAR_8<0 || VAR_8>0x10ffff ) VAR_8 = 0xfffd;
    VAR_9 = (unsigned)(VAR_8 & 0x1fffff);
    if( VAR_9<0x00080 ){
      *VAR_6++ = (u8)(VAR_9&0xFF);
    }else if( VAR_9<0x00800 ){
      *VAR_6++ = 0xC0 + (u8)((VAR_9>>6)&0x1F);
      *VAR_6++ = 0x80 + (u8)(VAR_9 & 0x3F);
    }else if( VAR_9<0x10000 ){
      *VAR_6++ = 0xE0 + (u8)((VAR_9>>12)&0x0F);
      *VAR_6++ = 0x80 + (u8)((VAR_9>>6) & 0x3F);
      *VAR_6++ = 0x80 + (u8)(VAR_9 & 0x3F);
    }else{
      *VAR_6++ = 0xF0 + (u8)((VAR_9>>18) & 0x07);
      *VAR_6++ = 0x80 + (u8)((VAR_9>>12) & 0x3F);
      *VAR_6++ = 0x80 + (u8)((VAR_9>>6) & 0x3F);
      *VAR_6++ = 0x80 + (u8)(VAR_9 & 0x3F);
    } }

  FUNC_2(VAR_2, (char*)VAR_5, VAR_6-VAR_5, VAR_1, VAR_0);
}
