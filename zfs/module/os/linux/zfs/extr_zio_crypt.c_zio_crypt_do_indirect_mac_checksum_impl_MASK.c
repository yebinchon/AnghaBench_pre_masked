
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint_t ;
typedef int uint8_t ;
typedef int uint64_t ;
typedef scalar_t__ boolean_t ;
typedef int blkptr_t ;
typedef int SHA2_CTX ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int ,int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_3 (int *,int *,int ) ;
 int FUNC_4 (int *,int *,int ) ;
 int FUNC_5 (int *,int ,scalar_t__,int *) ;

__attribute__((used)) static int
FUNC_6(boolean_t VAR_5, void *VAR_6,
    uint_t VAR_7, uint64_t VAR_8, boolean_t VAR_9, uint8_t *VAR_10)
{
 blkptr_t *VAR_11;
 int VAR_12, VAR_13 = VAR_7 >> VAR_3;
 SHA2_CTX VAR_14;
 uint8_t VAR_15[VAR_2];


 FUNC_2(VAR_1, &VAR_14);
 for (VAR_12 = 0, VAR_11 = VAR_6; VAR_12 < VAR_13; VAR_12++, VAR_11++) {
  FUNC_5(&VAR_14, VAR_8,
      VAR_9, VAR_11);
 }
 FUNC_1(VAR_15, &VAR_14);

 if (VAR_5) {
  FUNC_4(VAR_15, VAR_10, VAR_4);
  return (0);
 }

 if (FUNC_3(VAR_15, VAR_10, VAR_4) != 0)
  return (FUNC_0(VAR_0));

 return (0);
}
