
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ ssize_t ;
struct TYPE_2__ {size_t written_uncompressed; int output_fd; } ;
typedef TYPE_1__ RawImport ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,void const*,size_t,int) ;

__attribute__((used)) static int FUNC_1(const void *VAR_1, size_t VAR_2, void *VAR_3) {
        RawImport *VAR_4 = VAR_3;
        ssize_t VAR_5;

        VAR_5 = FUNC_0(VAR_4->output_fd, VAR_1, VAR_2, 64);
        if (VAR_5 < 0)
                return (int) VAR_5;
        if ((size_t) VAR_5 < VAR_2)
                return -VAR_0;

        VAR_4->written_uncompressed += VAR_2;

        return 0;
}
