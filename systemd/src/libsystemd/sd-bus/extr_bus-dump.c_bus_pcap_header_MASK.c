
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_3__ {int magic_number; int version_major; int version_minor; int network; scalar_t__ snaplen; int sigfigs; int thiszone; } ;
typedef TYPE_1__ pcap_hdr_t ;
typedef int hdr ;
typedef int FILE ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_1__*,int,int,int *) ;
 int * VAR_0 ;

int FUNC_3(size_t VAR_1, FILE *VAR_2) {

        pcap_hdr_t VAR_3 = {
                .magic_number = 0xa1b2c3d4U,
                .version_major = 2,
                .version_minor = 4,
                .thiszone = 0,
                .sigfigs = 0,
                .network = 231,
        };

        if (!VAR_2)
                VAR_2 = VAR_0;

        FUNC_0(VAR_1 > 0);
        FUNC_0((size_t) (uint32_t) VAR_1 == VAR_1);

        VAR_3.snaplen = (uint32_t) VAR_1;

        FUNC_2(&VAR_3, 1, sizeof(VAR_3), VAR_2);

        return FUNC_1(VAR_2);
}
