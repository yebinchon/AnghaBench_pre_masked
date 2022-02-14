
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int const v_t ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int const*,int ) ;
 int FUNC_2 (unsigned int const,int ) ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int FUNC_3 () ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_4 (int const*,int ) ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int const*,int ) ;

__attribute__((used)) static void
FUNC_7(void **VAR_10, const size_t VAR_11, void **VAR_12,
    const unsigned *VAR_13)
{
 v_t *VAR_14 = (v_t *)VAR_10[VAR_8];
 v_t *VAR_15 = (v_t *)VAR_10[VAR_9];
 const v_t * const VAR_16 = VAR_14 + (VAR_11 / sizeof (v_t));
 const v_t *VAR_17 = (v_t *)VAR_12[VAR_0];
 const v_t *VAR_18 = (v_t *)VAR_12[VAR_1];

 FUNC_3();

 for (; VAR_14 < VAR_16; VAR_14 += VAR_4, VAR_15 += VAR_4,
     VAR_17 += VAR_4, VAR_18 += VAR_4) {
  FUNC_1(VAR_14, VAR_6);
  FUNC_1(VAR_15, VAR_7);
  FUNC_6(VAR_17, VAR_6);
  FUNC_6(VAR_18, VAR_7);


  FUNC_0(VAR_6, VAR_5);


  FUNC_2(VAR_13[VAR_2], VAR_6);
  FUNC_2(VAR_13[VAR_3], VAR_7);
  FUNC_5(VAR_7, VAR_6);
  FUNC_4(VAR_14, VAR_6);


  FUNC_5(VAR_5, VAR_6);
  FUNC_4(VAR_15, VAR_6);
 }
}
