
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {unsigned int imagebase; TYPE_1__* ddirs; } ;
struct TYPE_3__ {scalar_t__ vaddr; unsigned int size; } ;


 size_t VAR_0 ;
 unsigned int FUNC_0 (void*) ;
 unsigned int FUNC_1 (void*) ;
 TYPE_2__ VAR_1 ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (void*,unsigned int) ;
 void* VAR_2 ;

__attribute__((used)) static int FUNC_4(void)
{
    if (VAR_1.ddirs[VAR_0].vaddr == 0)
        return 0;
    void *VAR_3 = VAR_2 + VAR_1.ddirs[VAR_0].vaddr;
    void *VAR_4 = VAR_2 + FUNC_1(VAR_3);
    unsigned VAR_5 = FUNC_1(VAR_3 + 4);
    if (VAR_5 != VAR_1.ddirs[VAR_0].size)
        return FUNC_2("only 1 page can be relocated\n");
    unsigned VAR_6 = (VAR_5 - 8) / 2;
    while (VAR_6--)
    {
        unsigned VAR_7 = FUNC_0(VAR_3 + 8 + VAR_6 * 2);
        if (VAR_7 == 0)
            continue;
        if ((VAR_7 & 0xF000) != 0x3000)
            return FUNC_2("unknown relocation type: %x\n", VAR_7);

        void *VAR_8 = VAR_4 + (VAR_7 & 0xFFF);
        FUNC_3(VAR_8, FUNC_1(VAR_8) - VAR_1.imagebase + (unsigned) VAR_2);
    }
    return 0;
}
