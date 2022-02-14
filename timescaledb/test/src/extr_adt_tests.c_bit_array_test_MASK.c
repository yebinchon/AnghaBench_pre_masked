
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int BitArrayIterator ;
typedef int BitArray ;


 int FUNC_0 (int ,int) ;
 int FUNC_1 (int *,int,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (int *,int *) ;

__attribute__((used)) static void
FUNC_7(void)
{
 BitArray VAR_0;
 BitArrayIterator VAR_1;
 int VAR_2;
 FUNC_2(&VAR_0);

 for (VAR_2 = 0; VAR_2 < 65; VAR_2++)
  FUNC_1(&VAR_0, VAR_2, VAR_2);

 FUNC_1(&VAR_0, 0, 0);
 FUNC_1(&VAR_0, 0, 0);
 FUNC_1(&VAR_0, 64, 0x9069060909009090);
 FUNC_1(&VAR_0, 1, 0);
 FUNC_1(&VAR_0, 64, ~0x9069060909009090);
 FUNC_1(&VAR_0, 1, 1);

 FUNC_5(&VAR_1, &VAR_0);
 for (VAR_2 = 0; VAR_2 < 65; VAR_2++)
  FUNC_0(FUNC_3(&VAR_1, VAR_2), VAR_2);

 FUNC_0(FUNC_3(&VAR_1, 0), 0);
 FUNC_0(FUNC_3(&VAR_1, 0), 0);
 FUNC_0(FUNC_3(&VAR_1, 64), 0x9069060909009090);
 FUNC_0(FUNC_3(&VAR_1, 1), 0);
 FUNC_0(FUNC_3(&VAR_1, 64), ~0x9069060909009090);
 FUNC_0(FUNC_3(&VAR_1, 1), 1);

 FUNC_6(&VAR_1, &VAR_0);
 FUNC_0(FUNC_4(&VAR_1, 1), 1);
 FUNC_0(FUNC_4(&VAR_1, 64), ~0x9069060909009090);
 FUNC_0(FUNC_4(&VAR_1, 1), 0);
 FUNC_0(FUNC_4(&VAR_1, 64), 0x9069060909009090);
 FUNC_0(FUNC_4(&VAR_1, 0), 0);
 FUNC_0(FUNC_4(&VAR_1, 0), 0);
 for (VAR_2 = 64; VAR_2 >= 0; VAR_2--)
  FUNC_0(FUNC_4(&VAR_1, VAR_2), VAR_2);
}
