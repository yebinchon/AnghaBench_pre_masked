
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*) ;

__attribute__((used)) static int FUNC_1(char **VAR_5, int *VAR_6)
{
  int VAR_7;
  for (VAR_7 = 1; VAR_5[VAR_7] != ((void*)0); VAR_7++) {
    if (VAR_5[VAR_7][0] != '-')
      return VAR_7;
    switch (VAR_5[VAR_7][1]) {
    case '-':
      FUNC_0(VAR_5[VAR_7]);
      return (VAR_5[VAR_7+1] != ((void*)0) ? VAR_7+1 : 0);
    case '\0':
      return VAR_7;
    case 'i':
      FUNC_0(VAR_5[VAR_7]);
      *VAR_6 |= VAR_1;

    case 'v':
      FUNC_0(VAR_5[VAR_7]);
      *VAR_6 |= VAR_4;
      break;
    case 'e':
      *VAR_6 |= VAR_0;
    case 'j':
    case 'l':
      *VAR_6 |= VAR_3;
      if (VAR_5[VAR_7][2] == '\0') {
 VAR_7++;
 if (VAR_5[VAR_7] == ((void*)0)) return -1;
      }
      break;
    case 'O': break;
    case 'b':
      if (*VAR_6) return -1;
      *VAR_6 |= VAR_0;
      return 0;
    case 'E':
      *VAR_6 |= VAR_2;
      break;
    default: return -1;
    }
  }
  return 0;
}
