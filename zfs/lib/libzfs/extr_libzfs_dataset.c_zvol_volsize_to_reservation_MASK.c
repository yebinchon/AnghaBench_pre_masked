
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zpool_handle_t ;
typedef int uint64_t ;
typedef int nvlist_t ;


 int VAR_0 ;
 unsigned long long VAR_1 ;
 int FUNC_0 (int ,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (int *,int ,char**) ;
 scalar_t__ FUNC_3 (int *,int ,int*) ;
 int FUNC_4 (int *,int,int) ;
 int FUNC_5 (int ) ;

uint64_t
FUNC_6(zpool_handle_t *VAR_6, uint64_t VAR_7,
    nvlist_t *VAR_8)
{
 uint64_t VAR_9;
 uint64_t VAR_10, VAR_11;
 int VAR_12;
 char *VAR_13;

 if (FUNC_2(VAR_8,
     FUNC_5(VAR_3), &VAR_13) == 0)
  VAR_12 = FUNC_1(VAR_13);
 else
  VAR_12 = 1;
 if (FUNC_3(VAR_8,
     FUNC_5(VAR_4),
     &VAR_11) != 0)
  VAR_11 = VAR_5;

 VAR_10 = VAR_7 / VAR_11;




 VAR_7 = FUNC_4(VAR_6, VAR_10, VAR_11);


 VAR_9 = 7;

 while (VAR_10 > 1) {
  VAR_10 += VAR_0 - 1;
  VAR_10 /= VAR_0;
  VAR_9 += VAR_10;
 }
 VAR_9 *= FUNC_0(VAR_2, VAR_12 + 1);
 VAR_7 *= VAR_12;





 VAR_9 *= 1ULL << VAR_1;
 VAR_7 += VAR_9;
 return (VAR_7);
}
