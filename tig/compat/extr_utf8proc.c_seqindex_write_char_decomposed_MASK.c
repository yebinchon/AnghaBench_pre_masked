
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int utf8proc_uint16_t ;
typedef int utf8proc_ssize_t ;
typedef int utf8proc_option_t ;
typedef int utf8proc_int32_t ;


 int VAR_0 ;
 int FUNC_0 (int const**) ;
 int FUNC_1 (int ,int *,int,int ,int*) ;
 int* VAR_1 ;

__attribute__((used)) static utf8proc_ssize_t FUNC_2(utf8proc_uint16_t VAR_2, utf8proc_int32_t *VAR_3, utf8proc_ssize_t VAR_4, utf8proc_option_t VAR_5, int *VAR_6) {
  utf8proc_ssize_t VAR_7 = 0;
  const utf8proc_uint16_t *VAR_8 = &VAR_1[VAR_2 & 0x1FFF];
  int VAR_9 = VAR_2 >> 13;
  if (VAR_9 >= 7) {
    VAR_9 = *VAR_8;
    VAR_8++;
  }
  for (; VAR_9 >= 0; VAR_8++, VAR_9--) {
    utf8proc_int32_t VAR_10 = FUNC_0(&VAR_8);

    VAR_7 += FUNC_1(VAR_10, VAR_3+VAR_7,
      (VAR_4 > VAR_7) ? (VAR_4 - VAR_7) : 0, VAR_5,
    VAR_6);
    if (VAR_7 < 0) return VAR_0;
  }
  return VAR_7;
}
