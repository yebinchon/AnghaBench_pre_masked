
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ p_type; unsigned int p_flags; size_t p_vaddr; size_t p_filesz; size_t p_memsz; } ;
typedef TYPE_1__ Elf32_Phdr ;
typedef int Elf32_Addr ;


 int FUNC_0 (int ) ;
 unsigned int const VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_1 () ;
 int VAR_8 ;
 char* FUNC_2 (void*,size_t,int ,int,int,int ) ;
 int VAR_9 ;
 int FUNC_3 (int,int) ;

__attribute__((used)) static unsigned long



FUNC_4(unsigned const VAR_10, Elf32_Phdr const *VAR_11, int VAR_12,
    Elf32_Addr VAR_13[2])
{
    size_t VAR_14[2]= { 0u, 0u};
    size_t VAR_15[2]= { 0u, 0u};
    size_t VAR_16[2]= {~0u, ~0u};
    char *VAR_17[2];
    unsigned VAR_18= 0;
    int VAR_19;

    FUNC_0((FUNC_1(), VAR_8, VAR_11, VAR_12, VAR_9));
    for (; --VAR_12>=0; ++VAR_11) if (VAR_7==VAR_11->p_type) {
        unsigned const VAR_20 = VAR_5 & VAR_11->p_flags;
        if (VAR_16[VAR_20] > VAR_11->p_vaddr) {
            VAR_16[VAR_20] = VAR_11->p_vaddr;
            VAR_14[VAR_20] = VAR_11->p_filesz;
        }
        if (VAR_15[VAR_20] < (VAR_11->p_memsz + VAR_11->p_vaddr)) {
            VAR_15[VAR_20] = VAR_11->p_memsz + VAR_11->p_vaddr;
        }
    }
    if ((VAR_0!=VAR_10) && 0x20000000u<=VAR_15[0]) {
        VAR_18= (0xfc000000u & VAR_13[1]) +
            FUNC_3(0x03ffffffu & VAR_13[1],
                 0x03ffffffu & VAR_13[0] );
        VAR_18= VAR_4 & (VAR_18 - VAR_4 -1);
    }
    for (VAR_19=0; VAR_19<=1; ++VAR_19) {
        VAR_14[VAR_19] += ~VAR_4 & VAR_16[VAR_19];
        VAR_16[VAR_19] -= ~VAR_4 & VAR_16[VAR_19];
        VAR_13[VAR_19] = VAR_18 + VAR_15[VAR_19];
        VAR_15[VAR_19] = VAR_4 & (VAR_15[VAR_19] - VAR_16[VAR_19] - VAR_4 -1);
        VAR_14[VAR_19] = VAR_4 & (VAR_14[VAR_19] - VAR_4 -1);
        VAR_17[VAR_19] = FUNC_2((void *)(VAR_18 + VAR_16[VAR_19]), VAR_15[VAR_19], VAR_6,
            VAR_2 | VAR_3 | VAR_1, -1, 0);
    }
    return (unsigned long)VAR_17[0] - VAR_16[0];
}
