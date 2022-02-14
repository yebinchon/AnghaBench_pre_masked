
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;


 int VAR_0 ;
 int FUNC_0 (int,int,int,int,int,int) ;
 int FUNC_1 (int) ;

int
FUNC_2(u_char VAR_1, u_char VAR_2, u_char VAR_3)
{
 static const int VAR_4[6] = { 0x00, 0x5f, 0x87, 0xaf, 0xd7, 0xff };
 int VAR_5, VAR_6, VAR_7, VAR_8, VAR_9, VAR_10, VAR_11, VAR_12;
 int VAR_13, VAR_14, VAR_15;


 VAR_5 = FUNC_1(VAR_1); VAR_8 = VAR_4[VAR_5];
 VAR_6 = FUNC_1(VAR_2); VAR_9 = VAR_4[VAR_6];
 VAR_7 = FUNC_1(VAR_3); VAR_10 = VAR_4[VAR_7];


 if (VAR_8 == VAR_1 && VAR_9 == VAR_2 && VAR_10 == VAR_3)
  return ((16 + (36 * VAR_5) + (6 * VAR_6) + VAR_7) | VAR_0);


 VAR_13 = (VAR_1 + VAR_2 + VAR_3) / 3;
 if (VAR_13 > 238)
  VAR_14 = 23;
 else
  VAR_14 = (VAR_13 - 3) / 10;
 VAR_15 = 8 + (10 * VAR_14);


 VAR_11 = FUNC_0(VAR_8, VAR_9, VAR_10, VAR_1, VAR_2, VAR_3);
 if (FUNC_0(VAR_15, VAR_15, VAR_15, VAR_1, VAR_2, VAR_3) < VAR_11)
  VAR_12 = 232 + VAR_14;
 else
  VAR_12 = 16 + (36 * VAR_5) + (6 * VAR_6) + VAR_7;
 return (VAR_12 | VAR_0);
}
