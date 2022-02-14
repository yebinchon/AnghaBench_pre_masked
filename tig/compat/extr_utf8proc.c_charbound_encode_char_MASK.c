
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ utf8proc_uint8_t ;
typedef int utf8proc_ssize_t ;
typedef int utf8proc_int32_t ;



__attribute__((used)) static utf8proc_ssize_t FUNC_0(utf8proc_int32_t VAR_0, utf8proc_uint8_t *VAR_1) {
   if (VAR_0 < 0x00) {
      if (VAR_0 == -1) {
        VAR_1[0] = (utf8proc_uint8_t)0xFF;
        return 1;
      }
      return 0;
   } else if (VAR_0 < 0x80) {
      VAR_1[0] = (utf8proc_uint8_t)VAR_0;
      return 1;
   } else if (VAR_0 < 0x800) {
      VAR_1[0] = (utf8proc_uint8_t)(0xC0 + (VAR_0 >> 6));
      VAR_1[1] = (utf8proc_uint8_t)(0x80 + (VAR_0 & 0x3F));
      return 2;
   } else if (VAR_0 < 0x10000) {
      VAR_1[0] = (utf8proc_uint8_t)(0xE0 + (VAR_0 >> 12));
      VAR_1[1] = (utf8proc_uint8_t)(0x80 + ((VAR_0 >> 6) & 0x3F));
      VAR_1[2] = (utf8proc_uint8_t)(0x80 + (VAR_0 & 0x3F));
      return 3;
   } else if (VAR_0 < 0x110000) {
      VAR_1[0] = (utf8proc_uint8_t)(0xF0 + (VAR_0 >> 18));
      VAR_1[1] = (utf8proc_uint8_t)(0x80 + ((VAR_0 >> 12) & 0x3F));
      VAR_1[2] = (utf8proc_uint8_t)(0x80 + ((VAR_0 >> 6) & 0x3F));
      VAR_1[3] = (utf8proc_uint8_t)(0x80 + (VAR_0 & 0x3F));
      return 4;
   } else return 0;
}
