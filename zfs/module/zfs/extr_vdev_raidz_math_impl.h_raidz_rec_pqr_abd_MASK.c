
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int const v_t ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int const*,int ) ;
 int FUNC_2 (unsigned int const,int ) ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 int FUNC_3 () ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_4 (int const*,int ) ;
 size_t VAR_15 ;
 size_t VAR_16 ;
 size_t VAR_17 ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int const*,int ) ;

__attribute__((used)) static void
FUNC_7(void **VAR_18, const size_t VAR_19, void **VAR_20,
    const unsigned * const VAR_21)
{
 v_t *VAR_22 = (v_t *)VAR_18[VAR_15];
 v_t *VAR_23 = (v_t *)VAR_18[VAR_16];
 v_t *VAR_24 = (v_t *)VAR_18[VAR_17];
 const v_t * const VAR_25 = VAR_22 + (VAR_19 / sizeof (v_t));
 const v_t *VAR_26 = (v_t *)VAR_20[VAR_0];
 const v_t *VAR_27 = (v_t *)VAR_20[VAR_1];
 const v_t *VAR_28 = (v_t *)VAR_20[VAR_2];

 FUNC_3();

 for (; VAR_22 < VAR_25; VAR_22 += VAR_9, VAR_23 += VAR_9,
     VAR_24 += VAR_9, VAR_26 += VAR_9, VAR_27 += VAR_9,
     VAR_28 += VAR_9) {
  FUNC_1(VAR_22, VAR_10);
  FUNC_1(VAR_23, VAR_12);
  FUNC_1(VAR_24, VAR_14);

  FUNC_6(VAR_26, VAR_10);
  FUNC_6(VAR_27, VAR_12);
  FUNC_6(VAR_28, VAR_14);


  FUNC_0(VAR_10, VAR_11);
  FUNC_0(VAR_12, VAR_13);


  FUNC_2(VAR_21[VAR_3], VAR_10);
  FUNC_2(VAR_21[VAR_4], VAR_12);
  FUNC_5(VAR_12, VAR_10);
  FUNC_2(VAR_21[VAR_5], VAR_14);
  FUNC_5(VAR_14, VAR_10);
  FUNC_4(VAR_22, VAR_10);


  FUNC_5(VAR_10, VAR_11);
  FUNC_2(VAR_21[VAR_8], VAR_10);
  FUNC_5(VAR_10, VAR_13);
  FUNC_0(VAR_11, VAR_10);
  FUNC_2(VAR_21[VAR_6], VAR_10);
  FUNC_2(VAR_21[VAR_7], VAR_13);
  FUNC_5(VAR_10, VAR_13);
  FUNC_4(VAR_23, VAR_13);


  FUNC_5(VAR_11, VAR_13);
  FUNC_4(VAR_24, VAR_13);
 }
}
