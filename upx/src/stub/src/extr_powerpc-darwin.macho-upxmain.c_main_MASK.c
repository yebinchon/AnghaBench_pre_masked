
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
typedef int uint32_t ;
struct l_info {int dummy; } ;
typedef int mhdr ;
typedef int f_unfilter ;
typedef int f_expand ;
struct TYPE_8__ {int cmdsize; scalar_t__ cmd; } ;
struct TYPE_7__ {unsigned int ncmds; } ;
struct TYPE_6__ {unsigned int const vmaddr; int * segname; } ;
typedef TYPE_1__ Mach_segment_command ;
typedef TYPE_2__ Mach_header ;
typedef TYPE_3__ Mach_command ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,size_t) ;
 int FUNC_1 (struct l_info const*,size_t,TYPE_2__*,int,int *,int *,TYPE_2__**) ;

int
FUNC_2(int VAR_1, char *VAR_2[])
{
    Mach_header const *VAR_3 = (Mach_header const *)((~0ul<<12) & (unsigned long)&FUNC_2);
    Mach_command const *VAR_4 = (Mach_command const *)(1+ VAR_3);
    f_unfilter *VAR_5;
    f_expand *VAR_6;
    char *VAR_7;
    size_t VAR_8;

    unsigned VAR_9;
    for (VAR_9=0; VAR_9 < VAR_3->ncmds; ++VAR_9,
            VAR_4 = (Mach_command const *)(VAR_4->cmdsize + (char const *)VAR_4))
    if (VAR_0==VAR_4->cmd) {
        Mach_segment_command const *const VAR_10 = (Mach_segment_command const *)VAR_4;

        if (*(uint64_t const *)(&"__LINKEDIT"[2]) == *(uint64_t const *)(&VAR_10->segname[2])) {
            VAR_5 = (f_unfilter *)(sizeof(unsigned) + VAR_10->vmaddr);
            VAR_6 = (f_expand *)(*(unsigned const *)VAR_10->vmaddr + VAR_10->vmaddr);
            unsigned const *VAR_11 = (unsigned const *)VAR_10->vmaddr;
            while (!(VAR_8 = *--VAR_11)) ;
            VAR_7 = (char *)(-VAR_8 + (char const *)VAR_11);
            break;
        }
    }
    char VAR_12[16384];
    uint32_t VAR_13 = FUNC_1((struct l_info const *)VAR_7, VAR_8,
        (Mach_header *)VAR_12, sizeof(VAR_12),
        VAR_6, VAR_5, (Mach_header **)&VAR_2[-2]);


    FUNC_0(VAR_7, VAR_8);
    return VAR_13;
}
