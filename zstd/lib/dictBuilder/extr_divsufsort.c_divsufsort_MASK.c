
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (unsigned char const*,int*,int*,int*,int,int) ;
 int FUNC_1 (int*) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (unsigned char const*,int*,int*,int*,int,int) ;

int
FUNC_4(const unsigned char *VAR_2, int *VAR_3, int VAR_4, int VAR_5) {
  int *VAR_6, *VAR_7;
  int VAR_8;
  int VAR_9 = 0;


  if((VAR_2 == ((void*)0)) || (VAR_3 == ((void*)0)) || (VAR_4 < 0)) { return -1; }
  else if(VAR_4 == 0) { return 0; }
  else if(VAR_4 == 1) { VAR_3[0] = 0; return 0; }
  else if(VAR_4 == 2) { VAR_8 = (VAR_2[0] < VAR_2[1]); VAR_3[VAR_8 ^ 1] = 0, VAR_3[VAR_8] = 1; return 0; }

  VAR_6 = (int *)FUNC_2(VAR_0 * sizeof(int));
  VAR_7 = (int *)FUNC_2(VAR_1 * sizeof(int));


  if((VAR_6 != ((void*)0)) && (VAR_7 != ((void*)0))) {
    VAR_8 = FUNC_3(VAR_2, VAR_3, VAR_6, VAR_7, VAR_4, VAR_5);
    FUNC_0(VAR_2, VAR_3, VAR_6, VAR_7, VAR_4, VAR_8);
  } else {
    VAR_9 = -2;
  }

  FUNC_1(VAR_7);
  FUNC_1(VAR_6);

  return VAR_9;
}
