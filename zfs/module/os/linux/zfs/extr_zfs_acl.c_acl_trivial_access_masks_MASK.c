
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int mode_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;

__attribute__((used)) static void
FUNC_0(mode_t VAR_21, uint32_t *VAR_22, uint32_t *VAR_23,
    uint32_t *VAR_24, uint32_t *VAR_25, uint32_t *VAR_26, uint32_t *VAR_27)
{
 *VAR_23 = *VAR_24 = *VAR_22 = *VAR_26 = 0;

 if (!(VAR_21 & VAR_14) && (VAR_21 & (VAR_12|VAR_13)))
  *VAR_23 |= VAR_4;
 if (!(VAR_21 & VAR_17) && (VAR_21 & (VAR_15|VAR_16)))
  *VAR_23 |= VAR_9;
 if (!(VAR_21 & VAR_20) && (VAR_21 & (VAR_18|VAR_19)))
  *VAR_23 |= VAR_1;

 if (!(VAR_21 & VAR_12) && (VAR_21 & VAR_13))
  *VAR_24 = VAR_4;
 if (!(VAR_21 & VAR_15) && (VAR_21 & VAR_16))
  *VAR_24 |= VAR_9;
 if (!(VAR_21 & VAR_18) && (VAR_21 & VAR_19))
  *VAR_24 |= VAR_1;

 if ((VAR_21 & VAR_14) && (!(VAR_21 & VAR_12) && (VAR_21 & VAR_13)))
  *VAR_22 |= VAR_4;
 if ((VAR_21 & VAR_17) && (!(VAR_21 & VAR_15) && (VAR_21 & VAR_16)))
  *VAR_22 |= VAR_9;
 if ((VAR_21 & VAR_20) && (!(VAR_21 & VAR_18) && (VAR_21 & VAR_19)))
  *VAR_22 |= VAR_1;

 *VAR_25 = VAR_8|VAR_11|VAR_7|
     VAR_10|VAR_2|VAR_3|
     VAR_5|VAR_6;
 if (VAR_21 & VAR_14)
  *VAR_25 |= VAR_4;
 if (VAR_21 & VAR_17)
  *VAR_25 |= VAR_9|VAR_0;
 if (VAR_21 & VAR_20)
  *VAR_25 |= VAR_1;

 *VAR_26 = VAR_2|VAR_3| VAR_5|
     VAR_6;
 if (VAR_21 & VAR_12)
  *VAR_26 |= VAR_4;
 if (VAR_21 & VAR_15)
  *VAR_26 |= VAR_9|VAR_0;
 if (VAR_21 & VAR_18)
  *VAR_26 |= VAR_1;

 *VAR_27 = VAR_2|VAR_3| VAR_5|
     VAR_6;
 if (VAR_21 & VAR_13)
  *VAR_27 |= VAR_4;
 if (VAR_21 & VAR_16)
  *VAR_27 |= VAR_9|VAR_0;
 if (VAR_21 & VAR_19)
  *VAR_27 |= VAR_1;
}
