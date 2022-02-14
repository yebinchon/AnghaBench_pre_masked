
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 char* VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_1 (char *VAR_2, char *VAR_3) {
  static char VAR_4[(1 << 20) + 1];
  VAR_1 = 0;
  VAR_0 = VAR_4;
  while (VAR_2 < VAR_3) {
    FUNC_0 (VAR_1 < (1 << 20));
    switch (*VAR_2) {
    case '\\':
      VAR_2 ++;
      switch (*VAR_2) {
      case 'n':
        VAR_0[VAR_1 ++] = '\n';
        break;
      case 'r':
        VAR_0[VAR_1 ++] = '\r';
        break;
      case 't':
        VAR_0[VAR_1 ++] = '\t';
        break;
      case 'b':
        VAR_0[VAR_1 ++] = '\b';
        break;
      case 'a':
        VAR_0[VAR_1 ++] = '\a';
        break;
      default:
        VAR_0[VAR_1 ++] = *VAR_2;
        break;
      }
      break;
    default:
      VAR_0[VAR_1 ++] = *VAR_2;;
      break;
    }
    VAR_2 ++;
  }
  VAR_0[VAR_1] = 0;
}
