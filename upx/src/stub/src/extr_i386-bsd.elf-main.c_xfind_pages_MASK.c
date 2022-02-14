
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ p_type; size_t p_vaddr; size_t p_filesz; size_t p_memsz; } ;
typedef TYPE_1__ Elf32_Phdr ;


 int FUNC_0 (int ) ;
 unsigned int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_1 () ;
 char* FUNC_2 (void*,size_t,int ,unsigned int,int ,int ) ;

__attribute__((used)) static unsigned long



FUNC_3(unsigned VAR_6, Elf32_Phdr const *VAR_7, int VAR_8,
    char **const VAR_9
)
{
    size_t VAR_10= ~0, VAR_11= 0, VAR_12= 0;
    char *VAR_13;
    FUNC_0((FUNC_1(), VAR_6, VAR_7, VAR_8, VAR_9));
    VAR_6 += VAR_2 | VAR_0;
    for (; --VAR_8>=0; ++VAR_7) if (VAR_5==VAR_7->p_type) {
        if (VAR_7->p_vaddr < VAR_10) {
            VAR_10 = VAR_7->p_vaddr;
            VAR_12 = VAR_7->p_filesz;
        }
        if (VAR_11 < (VAR_7->p_memsz + VAR_7->p_vaddr)) {
            VAR_11 = VAR_7->p_memsz + VAR_7->p_vaddr;
        }
    }
    VAR_12 += ~VAR_3 & VAR_10;
    VAR_10 -= ~VAR_3 & VAR_10;
    VAR_11 = VAR_3 & (VAR_11 - VAR_10 - VAR_3 -1);
    VAR_12 = VAR_3 & (VAR_12 - VAR_3 -1);
    VAR_13 = FUNC_2((void *)VAR_10, VAR_11, VAR_4, VAR_6, VAR_1, 0);
    *VAR_9 = VAR_11 + VAR_13;

    return (unsigned long)VAR_13 - VAR_10;
}
