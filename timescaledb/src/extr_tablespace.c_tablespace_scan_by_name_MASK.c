
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tuple_found_func ;
typedef int ScanKeyData ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char const*) ;
 int FUNC_1 (int ,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int *,int ,int ,int ,int ) ;
 int VAR_5 ;
 int FUNC_3 (int ,int *,int,int ,int *,void*,int ,int ) ;

__attribute__((used)) static int
FUNC_4(const char *VAR_6, tuple_found_func VAR_7, void *VAR_8)
{
 ScanKeyData VAR_9[1];
 int VAR_10 = 0;

 if (((void*)0) != VAR_6)
  FUNC_2(&VAR_9[VAR_10++],
     VAR_1,
     VAR_2,
     VAR_3,
     FUNC_1(VAR_5, FUNC_0(VAR_6)));

 return FUNC_3(VAR_4,
         VAR_9,
         VAR_10,
         VAR_7,
         ((void*)0),
         VAR_8,
         0,
         VAR_0);
}
