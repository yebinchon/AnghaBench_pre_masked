
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef enum vlc_dts_syncword_e { ____Placeholder_vlc_dts_syncword_e } vlc_dts_syncword_e ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (int const*,char*,int) ;

__attribute__((used)) static enum vlc_dts_syncword_e FUNC_1( const uint8_t *VAR_7 )
{
    if( FUNC_0( VAR_7, "\x7F\xFE\x80\x01", 4 ) == 0 )
        return VAR_2;
    else
    if( FUNC_0( VAR_7, "\xFE\x7F\x01\x80", 4 ) == 0 )
        return VAR_3;
    else
    if( FUNC_0( VAR_7, "\x64\x58\x20\x25", 4 ) == 0 )
        return VAR_5;
    else
    if( FUNC_0( VAR_7, "\x1F\xFF\xE8\x00", 4 ) == 0
     && VAR_7[4] == 0x07 && (VAR_7[5] & 0xf0) == 0xf0 )
        return VAR_0;
    else
    if( FUNC_0( VAR_7, "\xFF\x1F\x00\xE8", 4 ) == 0
     && (VAR_7[4] & 0xf0) == 0xf0 && VAR_7[5] == 0x07 )
        return VAR_1;
    else
    if( FUNC_0( VAR_7, "\x0A\x80\x19\x21", 4 ) == 0 )
        return VAR_6;
    else
        return VAR_4;
}
