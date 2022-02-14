
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ p_type; size_t p_vaddr; size_t p_filesz; size_t p_memsz; } ;
typedef TYPE_1__ Elf32_Phdr ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (void*) ;
 char* FUNC_1 (void*,size_t,int,unsigned int,int,int ) ;

__attribute__((used)) static unsigned long
__attribute__((regparm(3), stdcall))
FUNC_2(unsigned VAR_8, Elf32_Phdr const *VAR_9, int VAR_10)
{
    size_t VAR_11= ~0, VAR_12= 0, VAR_13= 0;
    char *VAR_14;
    VAR_8 += VAR_2 | VAR_0;
    for (; --VAR_10>=0; ++VAR_9) if (VAR_7==VAR_9->p_type) {
        if (VAR_9->p_vaddr < VAR_11) {
            VAR_11 = VAR_9->p_vaddr;
            VAR_13 = VAR_9->p_filesz;
        }
        if (VAR_12 < (VAR_9->p_memsz + VAR_9->p_vaddr)) {
            VAR_12 = VAR_9->p_memsz + VAR_9->p_vaddr;
        }
    }
    if (VAR_1 & VAR_8) {
        FUNC_0((void *)VAR_12);
    }
    VAR_13 += ~VAR_3 & VAR_11;
    VAR_11 -= ~VAR_3 & VAR_11;
    VAR_12 = VAR_3 & (VAR_12 - VAR_11 - VAR_3 -1);
    VAR_13 = VAR_3 & (VAR_13 - VAR_3 -1);
    VAR_14 = FUNC_1((void *)VAR_11, VAR_12, VAR_5|VAR_6|VAR_4, VAR_8, -1, 0);






    return (unsigned long)VAR_14 - VAR_11;
}
