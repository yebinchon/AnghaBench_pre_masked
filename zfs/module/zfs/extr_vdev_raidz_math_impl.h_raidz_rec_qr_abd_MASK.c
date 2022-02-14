
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
 size_t VAR_4 ;
 size_t VAR_5 ;
 int FUNC_3 () ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_4 (int const*,int ) ;
 size_t VAR_10 ;
 size_t VAR_11 ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int const*,int ) ;

__attribute__((used)) static void
FUNC_7(void **VAR_12, const size_t VAR_13, void **VAR_14,
    const unsigned *VAR_15)
{
 v_t *VAR_16 = (v_t *)VAR_12[VAR_10];
 v_t *VAR_17 = (v_t *)VAR_12[VAR_11];
 const v_t * const VAR_18 = VAR_16 + (VAR_13 / sizeof (v_t));
 const v_t *VAR_19 = (v_t *)VAR_14[VAR_0];
 const v_t *VAR_20 = (v_t *)VAR_14[VAR_1];

 FUNC_3();

 for (; VAR_16 < VAR_18; VAR_16 += VAR_6, VAR_17 += VAR_6,
     VAR_19 += VAR_6, VAR_20 += VAR_6) {
  FUNC_1(VAR_16, VAR_8);
  FUNC_1(VAR_17, VAR_9);

  FUNC_6(VAR_19, VAR_8);
  FUNC_6(VAR_20, VAR_9);


  FUNC_0(VAR_8, VAR_7);


  FUNC_2(VAR_15[VAR_3], VAR_8);
  FUNC_5(VAR_9, VAR_8);
  FUNC_2(VAR_15[VAR_2], VAR_8);
  FUNC_4(VAR_16, VAR_8);


  FUNC_2(VAR_15[VAR_5], VAR_7);
  FUNC_5(VAR_9, VAR_7);
  FUNC_2(VAR_15[VAR_4], VAR_7);
  FUNC_4(VAR_17, VAR_7);
 }
}
