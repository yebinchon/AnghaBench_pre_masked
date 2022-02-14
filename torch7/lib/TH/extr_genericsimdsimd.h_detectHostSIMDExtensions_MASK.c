
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int*,int*,int*,int*) ;
 char* FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (char*,char*,int) ;

__attribute__((used)) static inline uint32_t FUNC_3()
{
  uint32_t VAR_6, VAR_7, VAR_8, VAR_9;
  uint32_t VAR_10 = 0x0;
  int VAR_11 = 1, VAR_12 = 1, VAR_13 = 1;
  char *VAR_14;

  VAR_14 = FUNC_1("TH_NO_AVX2");
  if (VAR_14 == ((void*)0) || FUNC_2(VAR_14, "1", 2) != 0)
    VAR_12 = 0;


  VAR_6 = 0x7;
  VAR_8 = 0x0;
  FUNC_0(&VAR_6, &VAR_7, &VAR_8, &VAR_9);
  if ((VAR_7 & VAR_0) && VAR_12 == 0) {
    VAR_10 |= VAR_4;
  }


  VAR_6 = 0x1;
  FUNC_0(&VAR_6, &VAR_7, &VAR_8, &VAR_9);

  VAR_14 = FUNC_1("TH_NO_AVX");
  if (VAR_14 == ((void*)0) || FUNC_2(VAR_14, "1", 2) != 0)
    VAR_11 = 0;
  if (VAR_8 & VAR_1 && VAR_11 == 0) {
    VAR_10 |= VAR_3;
  }

  VAR_14 = FUNC_1("TH_NO_SSE");
  if (VAR_14 == ((void*)0) || FUNC_2(VAR_14, "1", 2) != 0)
    VAR_13 = 0;
  if (VAR_9 & VAR_2 && VAR_13 == 0) {
    VAR_10 |= VAR_5;
  }

  return VAR_10;
}
