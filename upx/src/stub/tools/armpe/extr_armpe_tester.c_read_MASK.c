
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ objects; int imagesize; } ;
struct TYPE_3__ {scalar_t__ vaddr; int vsize; int rawdataptr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ FUNC_0 (int ,int ,int ,int ) ;
 unsigned int VAR_10 ;
 int VAR_11 ;
 int FUNC_1 (scalar_t__,int ,int,int ) ;
 scalar_t__ FUNC_2 (int ,int ,int ) ;
 TYPE_2__ VAR_12 ;
 TYPE_1__* VAR_13 ;
 scalar_t__ FUNC_3 (void*,int ,int,int,int,int ) ;
 int FUNC_4 (char*,...) ;
 scalar_t__ VAR_14 ;

__attribute__((used)) static int FUNC_5(void)
{
    unsigned VAR_15;

    VAR_14 = FUNC_3((void *) VAR_9, VAR_12.imagesize,
                 VAR_7 | VAR_6 | VAR_5,
                 VAR_2 | VAR_0 | VAR_1, -1, 0);
    if (((int) VAR_14) == -1)
        return FUNC_4("mmap() failed: %d\n", VAR_10);
    FUNC_4("mmap for %p (size %x) successful\n", VAR_14, VAR_12.imagesize);






    for (VAR_15 = 1; VAR_15 <= (unsigned) VAR_12.objects - 1; VAR_15++)
        if (FUNC_2(VAR_11, VAR_13[VAR_15].rawdataptr, VAR_8)
            || FUNC_1(VAR_14 + VAR_13[VAR_15].vaddr,
                     VAR_13[VAR_15].vsize, 1, VAR_11) != 1)
            return FUNC_4("error reading section %u\n", VAR_15);
    return 0;
}
