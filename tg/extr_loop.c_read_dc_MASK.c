
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,int ,int,char*,int,char*,int,int) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int ,int,unsigned char*) ;
 int FUNC_4 (int,...) ;

void FUNC_5 (int VAR_1, int VAR_2, unsigned VAR_3) {
  int VAR_4 = 0;
  FUNC_0 (FUNC_4 (VAR_1, &VAR_4, 4) == 4);
  int VAR_5 = 0;
  FUNC_0 (FUNC_4 (VAR_1, &VAR_5, 4) == 4);
  FUNC_0 (VAR_5 >= 0 && VAR_5 < 100);
  char VAR_6[100];
  FUNC_0 (FUNC_4 (VAR_1, VAR_6, VAR_5) == VAR_5);
  VAR_6[VAR_5] = 0;

  long long VAR_7;
  static unsigned char VAR_8[256];
  FUNC_0 (FUNC_4 (VAR_1, &VAR_7, 8) == 8);
  FUNC_0 (FUNC_4 (VAR_1, VAR_8, 256) == 256);


  FUNC_1 (VAR_0, 0, VAR_2, "DC", 2, VAR_6, VAR_5, VAR_4);
  FUNC_3 (VAR_0, VAR_2, VAR_8);
  FUNC_2 (VAR_0, VAR_2);
}
