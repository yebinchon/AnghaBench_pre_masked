
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ScanKeyData ;
typedef int DropBehavior ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char const*) ;
 int VAR_4 ;
 int FUNC_1 (int ,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (int *,int ,int ,int ,int ) ;
 int FUNC_3 (int ,int *,int,int ,int *,int ,int ,int ,int ) ;
 int VAR_8 ;
 int VAR_9 ;

int
FUNC_4(const char *VAR_10, const char *VAR_11, DropBehavior VAR_12)
{
 ScanKeyData VAR_13[2];

 FUNC_2(&VAR_13[0],
    VAR_0,
    VAR_2,
    VAR_5,
    FUNC_1(VAR_9, FUNC_0(VAR_10)));
 FUNC_2(&VAR_13[1],
    VAR_1,
    VAR_2,
    VAR_5,
    FUNC_1(VAR_9, FUNC_0(VAR_11)));

 return FUNC_3(VAR_3,
          VAR_13,
          2,
          VAR_8,
          &VAR_12,
          0,
          VAR_6,
          VAR_7,
          VAR_4);
}
