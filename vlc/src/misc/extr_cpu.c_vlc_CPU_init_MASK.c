
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int i_has_altivec ;


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
 int FUNC_0 (int) ;
 int FUNC_1 (int*,int,int*,size_t*,int *,int ) ;
 scalar_t__ FUNC_2 (char*,int ) ;

__attribute__((used)) static void FUNC_3(void)
{
    uint32_t VAR_18 = 0;


     unsigned int VAR_19, VAR_20, VAR_21, VAR_22;
     bool VAR_23;
    asm volatile ("cpuid\n\t" : "=a" (VAR_19), "=b" (VAR_20), "=c" (VAR_21), "=d" (VAR_22) : "a" (0x00000000) : "cc");;
    VAR_23 = ( VAR_20 == 0x68747541 ) && ( VAR_21 == 0x444d4163 )
                    && ( VAR_22 == 0x69746e65 );


    asm volatile ("cpuid\n\t" : "=a" (VAR_19), "=b" (VAR_20), "=c" (VAR_21), "=d" (VAR_22) : "a" (0x00000001) : "cc");;




    VAR_18 |= VAR_9;

    if( VAR_22 & 0x02000000 )
        VAR_18 |= VAR_10;



    {

            VAR_18 |= VAR_11;
        if (VAR_22 & 0x04000000)
            VAR_18 |= VAR_12;
        if (VAR_21 & 0x00000001)
            VAR_18 |= VAR_13;
        if (VAR_21 & 0x00000200)
            VAR_18 |= VAR_16;
        if (VAR_21 & 0x00080000)
            VAR_18 |= VAR_14;
        if (VAR_21 & 0x00100000)
            VAR_18 |= VAR_15;
    }


    asm volatile ("cpuid\n\t" : "=a" (VAR_19), "=b" (VAR_20), "=c" (VAR_21), "=d" (VAR_22) : "a" (0x80000000) : "cc");;

    if( VAR_19 < 0x80000001 )
        goto out;


    asm volatile ("cpuid\n\t" : "=a" (VAR_19), "=b" (VAR_20), "=c" (VAR_21), "=d" (VAR_22) : "a" (0x80000001) : "cc");;




        VAR_18 |= VAR_7;

    if( VAR_23 && ( VAR_22 & 0x00400000 ) )
        VAR_18 |= VAR_10;
out:
    VAR_17 = VAR_18;
}
