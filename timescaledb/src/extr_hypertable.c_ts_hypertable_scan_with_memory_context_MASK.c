
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tuple_found_func ;
typedef int ScanKeyData ;
typedef int NameData ;
typedef int MemoryContext ;
typedef int LOCKMODE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ,int ,int ,int ) ;
 int FUNC_2 (int *,int,int ,int ,void*,int,int ,int,int ) ;
 int FUNC_3 (int *,char const*) ;

int
FUNC_4(const char *VAR_5, const char *VAR_6,
            tuple_found_func VAR_7, void *VAR_8, LOCKMODE VAR_9,
            bool VAR_10, MemoryContext VAR_11)
{
 ScanKeyData VAR_12[2];
 NameData VAR_13, VAR_14;

 FUNC_3(&VAR_13, VAR_5);
 FUNC_3(&VAR_14, VAR_6);


 FUNC_1(&VAR_12[0],
    VAR_0,
    VAR_2,
    VAR_3,
    FUNC_0(&VAR_13));
 FUNC_1(&VAR_12[1],
    VAR_1,
    VAR_2,
    VAR_3,
    FUNC_0(&VAR_14));

 return FUNC_2(VAR_12,
            2,
            VAR_4,
            VAR_7,
            VAR_8,
            1,
            VAR_9,
            VAR_10,
            VAR_11);
}
