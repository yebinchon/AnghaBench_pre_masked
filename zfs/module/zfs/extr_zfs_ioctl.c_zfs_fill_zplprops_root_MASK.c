
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;
typedef int nvlist_t ;
typedef int boolean_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *,scalar_t__,int,int,int *,int *,int*) ;
 scalar_t__ FUNC_1 (scalar_t__) ;

__attribute__((used)) static int
FUNC_2(uint64_t VAR_3, nvlist_t *VAR_4,
    nvlist_t *VAR_5, boolean_t *VAR_6)
{
 boolean_t VAR_7;
 boolean_t VAR_8;
 uint64_t VAR_9 = VAR_0;
 int VAR_10;

 VAR_9 = FUNC_1(VAR_3);
 VAR_7 = (VAR_9 >= VAR_1);
 VAR_8 = (VAR_9 >= VAR_2);

 VAR_10 = FUNC_0(((void*)0), VAR_9, VAR_7, VAR_8,
     VAR_4, VAR_5, VAR_6);
 return (VAR_10);
}
