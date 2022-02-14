
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u8 ;
typedef size_t u16 ;
typedef int i64 ;
struct TYPE_3__ {size_t* symbols; size_t* num_bits; size_t max_bits; } ;
typedef TYPE_1__ HUF_dtable ;


 size_t FUNC_0 (size_t const* const,size_t const,int * const) ;

__attribute__((used)) static inline u8 FUNC_1(const HUF_dtable *const VAR_0,
                                   u16 *const VAR_1, const u8 *const VAR_2,
                                   i64 *const VAR_3) {

    const u8 VAR_4 = VAR_0->symbols[*VAR_1];
    const u8 VAR_5 = VAR_0->num_bits[*VAR_1];
    const u16 VAR_6 = FUNC_0(VAR_2, VAR_5, VAR_3);



    *VAR_1 = ((*VAR_1 << VAR_5) + VAR_6) & (((u16)1 << VAR_0->max_bits) - 1);

    return VAR_4;
}
