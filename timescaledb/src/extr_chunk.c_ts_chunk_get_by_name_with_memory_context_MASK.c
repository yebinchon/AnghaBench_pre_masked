
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int int16 ;
typedef int ScanKeyData ;
typedef int NameData ;
typedef int MemoryContext ;
typedef int Chunk ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ,int ,int ,int ) ;
 int * FUNC_2 (int ,int *,int,int ,int ,int) ;
 int FUNC_3 (int *,char const*) ;

Chunk *
FUNC_4(const char *VAR_5, const char *VAR_6,
           int16 VAR_7, MemoryContext VAR_8,
           bool VAR_9)
{
 NameData VAR_10, VAR_11;
 ScanKeyData VAR_12[2];

 FUNC_3(&VAR_10, VAR_5);
 FUNC_3(&VAR_11, VAR_6);




 FUNC_1(&VAR_12[0],
    VAR_0,
    VAR_2,
    VAR_4,
    FUNC_0(&VAR_10));
 FUNC_1(&VAR_12[1],
    VAR_1,
    VAR_2,
    VAR_4,
    FUNC_0(&VAR_11));

 return FUNC_2(VAR_3,
         VAR_12,
         2,
         VAR_7,
         VAR_8,
         VAR_9);
}
