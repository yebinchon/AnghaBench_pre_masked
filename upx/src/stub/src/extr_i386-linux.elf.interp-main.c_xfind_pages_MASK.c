
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ p_type; size_t p_vaddr; size_t p_filesz; size_t p_memsz; } ;
typedef TYPE_1__ Elf32_Phdr ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 char* FUNC_0 (void*,size_t,int,unsigned int,int ,int ) ;
 int FUNC_1 (char*,size_t) ;

__attribute__((used)) static unsigned long
__attribute__((regparm(3), stdcall))
FUNC_2(unsigned VAR_7, Elf32_Phdr const *VAR_8, int VAR_9,
    char **const VAR_10
)
{
    size_t VAR_11= ~0, VAR_12= 0, VAR_13= 0;
    char *VAR_14;
    VAR_7 += VAR_1 | VAR_0;
    for (; --VAR_9>=0; ++VAR_8) if (VAR_6==VAR_8->p_type) {
        if (VAR_8->p_vaddr < VAR_11) {
            VAR_11 = VAR_8->p_vaddr;
            VAR_13 = VAR_8->p_filesz;
        }
        if (VAR_12 < (VAR_8->p_memsz + VAR_8->p_vaddr)) {
            VAR_12 = VAR_8->p_memsz + VAR_8->p_vaddr;
        }
    }
    VAR_13 += ~VAR_2 & VAR_11;
    VAR_11 -= ~VAR_2 & VAR_11;
    VAR_12 = VAR_2 & (VAR_12 - VAR_11 - VAR_2 -1);
    VAR_13 = VAR_2 & (VAR_13 - VAR_2 -1);
    VAR_14 = FUNC_0((void *)VAR_11, VAR_12, VAR_4|VAR_5|VAR_3, VAR_7, 0, 0);
    *VAR_10 = VAR_12 + VAR_14;
    FUNC_1(VAR_13 + VAR_14, VAR_12 - VAR_13);
    return (unsigned long)VAR_14 - VAR_11;
}
