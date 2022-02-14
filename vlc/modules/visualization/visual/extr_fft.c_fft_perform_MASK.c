
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int sound_sample ;
struct TYPE_3__ {int imag; int real; int sintable; int costable; int bitReverse; } ;
typedef TYPE_1__ fft_state ;


 int FUNC_0 (int ,int ,int ,int ) ;
 int FUNC_1 (int ,int ,float*) ;
 int FUNC_2 (int const*,int ,int ,int ) ;

void FUNC_3(const sound_sample *VAR_0, float *VAR_1, fft_state *VAR_2) {

    FUNC_2(VAR_0, VAR_2->real, VAR_2->imag, VAR_2->bitReverse );


    FUNC_0(VAR_2->real, VAR_2->imag, VAR_2->costable, VAR_2->sintable);


    FUNC_1(VAR_2->real, VAR_2->imag, VAR_1);
}
